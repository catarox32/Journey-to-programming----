#include <iostream>

template <class ValueType>
class RBTree
{
    struct Node
    {
        enum Color
        {
            RED,
            BLACK
        };
        Node *left;
        Node *right;
        Node *parent;
        ValueType value;
        Color color;

        Node()
        {
            left = nullptr;
            right = nullptr;
            parent = nullptr;
            color = RED;
        }
    };

    Node *root_;
    size_t count_;

public:
    RBTree()
    {
        root_ = nullptr;
        count_ = 0;
    }

    RBTree(const RBTree &other)
    {
        count_ = other.count_;
        if (count_ == 0)
        {
            root_ = nullptr;
            return;
        }
        root_ = new Node;
        root_->color = other.root_->color;
        root_->value = other.root_->value;
        deepCopy(*(other.root_), root_);
    }

    void insert(const ValueType &value)
    {
        if (root_ == nullptr)
        {
            count_ = 1;
            root_ = new Node;
            root_->value = value;
            root_->color = Node::BLACK;
            return;
        }
        auto node = insert(value, root_);
        if (node != nullptr)
        {
            count_++;
        }
        insertBalance(node);
    }

    void erase(const ValueType &value)
    {
        auto node = find(value, root_);
        if (node == nullptr)
        {
            return;
        }
        erase(node);
        count_--;
    }

    ValueType *lower_bound(const ValueType &value) const
    { // NOLINT
        Node *current = root_;
        ValueType *res = nullptr;
        while (current != nullptr)
        {
            if (!(value < current->value))
            {
                if (!(current->value < value))
                {
                    return &(current->value);
                }
                current = current->right;
            }
            else
            {
                res = &current->value;
                current = current->left;
            }
        }
        return res;
    }

    ValueType *find(const ValueType &value) const
    {
        auto found = find(value, root_);
        if (found->value == value)
        {
            return &(found->right);
        }
        if (found->value < value && found->right != nullptr)
        {
            return &(found->right);
        }
        if (found->value < value && found->right == nullptr)
        {
            return &(found->parent->right->value);
        }
    }

    ValueType *traversal() const
    {
        ValueType *data = new ValueType[count_];
        int idx = 0;
        traversal(data, &idx, root_);
        return data;
    }

    RBTree &operator=(const RBTree &other)
    {
        if (this == &other)
        {
            return *this;
        }
        count_ = 0;
        clear(root_);
        count_ = other.count_;
        if (count_ == 0)
        {
            root_ = nullptr;
            return *this;
        }
        root_ = new Node;
        root_->color = other.root_->color;
        root_->value = other.root_->value;
        deepCopy(*(other.root_), root_);
        return *this;
    }

    size_t size() const
    {
        return count_;
    }

    bool empty() const
    {
        return count_ == 0;
    }

    ~RBTree()
    {
        count_ = 0;
        clear(root_);
    }

private:
    void leftRotate(Node *root_node)
    {
        if (root_node == nullptr)
        {
            return;
        }
        if (root_node->right == nullptr)
        {
            return;
        }
        if (root_node->right->left == nullptr)
        {
            return;
        }
        Node *right = root_node->right;
        root_node->right = right->left;

        if (root_node->right != nullptr)
        {
            root_node->right->parent = root_node;
        }

        right->parent = root_node->parent;

        if (root_node->parent == nullptr)
        {
            root_ = right;
        }
        else
        {
            if (root_node == root_node->parent->left)
            {
                root_node->parent->left = right;
            }
            else
            {
                root_node->parent->right = right;
            }
        }

        right->left = root_node;
        root_node->parent = right;
    }

    void rightRotate(Node *root_node)
    {
        if (root_node == nullptr)
        {
            return;
        }
        if (root_node->left == nullptr)
        {
            return;
        }
        if (root_node->left->right == nullptr)
        {
            return;
        }
        Node *left = root_node->left;
        root_node->left = left->right;

        if (root_node->left != nullptr)
        {
            root_node->left->parent = root_node;
        }

        left->parent = root_node->parent;

        if (root_node->parent == nullptr)
        {
            root_ = left;
        }
        else
        {
            if (root_node == root_node->parent->left)
            {
                root_node->parent->left = left;
            }
            else
            {
                root_node->parent->right = left;
            }
        }

        left->right = root_node;
        root_node->parent = left;
    }

    Node *find(const ValueType &value, Node *root_node) const
    {
        if (root_node == nullptr)
        {
            return nullptr;
        }
        if (!(value < root_node->value || root_node->value < value))
        {
            return root_node;
        }
        if (value < root_node->value)
        {
            if (root_node->left == nullptr)
            {
                return root_node;
            }
            return find(value, root_node->left);
        }
        else
        {
            if (root_node->right == nullptr)
            {
                return root_node;
            }
            return find(value, root_node->right);
        }
    }

    void transplant(Node *u, Node *v)
    {
        if (u == root_)
        {
            root_ = v;
        }
        else
        {
            if (u == u->parent->left)
            {
                u->parent->left = v;
            }
            else
            {
                u->parent->right = v;
            }
        }
        if (u != nullptr && v != nullptr)
        {
            v->parent = u->parent;
        }
    }

    void erase(Node *node)
    {
        if (node == nullptr)
        {
            return;
        }
        Node *temp_node = node;
        Node *replace_node;
        typename Node::Color orig_color = temp_node->color;
        if (node == root_ && node->left == nullptr && node->right == nullptr)
        {
            delete node;
            root_ = nullptr;
            return;
        }
        if (node->left == nullptr)
        {
            replace_node = node->right;
            transplant(node, node->right);
        }
        else
        {
            if (node->right == nullptr)
            {
                replace_node = node->left;
                transplant(node, node->left);
            }
            else
            {
                temp_node = node->left;
                while (temp_node->right != nullptr)
                {
                    temp_node = temp_node->right;
                }
                temp_node = node;
                orig_color = temp_node->color;
                replace_node = temp_node->left;
                if (temp_node->parent == node)
                {
                    replace_node->parent = temp_node;
                }
                else
                {
                    transplant(temp_node, temp_node->left);
                    temp_node->left = node->left;
                    temp_node->left->parent = temp_node;
                }
                transplant(node, temp_node);
                temp_node->right = node->right;
                temp_node->right->parent = temp_node;
                temp_node->color = node->color;
            }
        }
        delete node;
        if (orig_color == Node::BLACK && replace_node != nullptr)
        {
            eraseBalance(replace_node);
        }
    }

    void eraseBalance(Node *node)
    {
        while (node != root_ && node->color == Node::BLACK)
        {
            if (node == node->parent->left)
            {
                auto brother = node->parent->right;
                if (brother == nullptr)
                {
                    return;
                }
                if (brother->color == Node::RED)
                {
                    brother->color = Node::BLACK;
                    node->parent->color = Node::RED;
                    leftRotate(node->parent);
                    brother = node->parent->right;
                }
                if (brother->left->color == Node::BLACK && brother->right->color == Node::BLACK)
                {
                    brother->color = Node::RED;
                    node = node->parent;
                }
                else
                {
                    if (brother->right->color == Node::BLACK)
                    {
                        brother->left->color = Node::BLACK;
                        brother->color = Node::RED;
                        rightRotate(brother);
                        brother = node->parent->right;
                    }
                    brother->color = node->parent->color;
                    node->parent->color = Node::BLACK;
                    brother->right->color = Node::BLACK;
                    leftRotate(node->parent);
                    node = root_;
                }
            }
            else
            {
                auto brother = node->parent->left;
                if (brother == nullptr)
                {
                    return;
                }
                if (brother->color == Node::RED)
                {
                    brother->color = Node::BLACK;
                    node->parent->color = Node::RED;
                    rightRotate(node->parent);
                    brother = node->parent->left;
                }
                if (brother->right->color == Node::BLACK && brother->left->color == Node::BLACK)
                {
                    brother->color = Node::RED;
                    node = node->parent;
                }
                else
                {
                    if (brother->left->color == Node::BLACK)
                    {
                        brother->right->color = Node::BLACK;
                        brother->color = Node::RED;
                        leftRotate(brother);
                        brother = node->parent->left;
                    }
                    brother->color = node->parent->color;
                    node->parent->color = Node::BLACK;
                    brother->left->color = Node::BLACK;
                    rightRotate(node->parent);
                    node = root_;
                }
            }
        }
        node->color = Node::BLACK;
    }

    Node *insert(const ValueType &value, Node *root_node)
    {
        if (!(value < root_node->value || root_node->value < value))
        {
            return nullptr;
        }
        Node *new_node;
        if (value < root_node->value)
        {
            if (root_node->left != nullptr)
            {
                return insert(value, root_node->left);
            }
            new_node = new Node;
            root_node->left = new_node;
        }
        if (value > root_node->value)
        {
            if (root_node->right != nullptr)
            {
                return insert(value, root_node->right);
            }
            new_node = new Node;
            root_node->right = new_node;
        }
        new_node->value = value;
        new_node->parent = root_node;
        new_node->left = nullptr;
        new_node->right = nullptr;
        new_node->color = Node::RED;
        return new_node;
    }

    void insertBalance(Node *node)
    {
        if (node == nullptr)
        {
            return;
        }
        while (node != nullptr && node->parent != nullptr && node->color == Node::RED &&
               node->parent->color == Node::RED)
        {
            if (node->parent == node->parent->parent->left)
            {
                auto uncle = node->parent->parent->right;
                if (uncle != nullptr && uncle->color == Node::RED)
                {
                    node->parent->color = Node::BLACK;
                    uncle->color = Node::BLACK;
                    if (node->parent->parent != nullptr)
                    {
                        node->parent->parent->color = Node::RED;
                    }
                    node = node->parent->parent;
                }
                else
                {
                    if (node == node->parent->right)
                    {
                        node = node->parent;
                        leftRotate(node);
                    }
                    node->parent->color = Node::BLACK;
                    if (node->parent->parent != nullptr)
                    {
                        node->parent->parent->color = Node::RED;
                    }
                    rightRotate(node->parent->parent);
                }
            }
            else
            {
                auto uncle = node->parent->parent->left;
                if (uncle != nullptr && uncle->color == Node::RED)
                {
                    node->parent->color = Node::BLACK;
                    uncle->color = Node::BLACK;
                    if (node->parent->parent != nullptr)
                    {
                        node->parent->parent->color = Node::RED;
                    }
                    node = node->parent->parent;
                }
                else
                {
                    if (node == node->parent->left)
                    {
                        node = node->parent;
                        rightRotate(node);
                    }
                    node->parent->color = Node::BLACK;
                    if (node->parent->parent != nullptr)
                    {
                        node->parent->parent->color = Node::RED;
                    }
                    leftRotate(node->parent->parent);
                }
            }
        }

        root_->color = Node::BLACK;
    }

    void deepCopy(const Node &src, Node *current_node)
    {
        if (src.right != nullptr)
        {
            current_node->right = new Node;
            current_node->right->parent = current_node;
            current_node->right->color = src.right->color;
            current_node->right->value = src.right->value;
            deepCopy(*(src.right), current_node->right);
        }
        if (src.left != nullptr)
        {
            current_node->left = new Node;
            current_node->left->parent = current_node;
            current_node->left->color = src.left->color;
            current_node->left->value = src.left->value;
            deepCopy(*(src.left), current_node->left);
        }
    }

    void traversal(ValueType *data, int *idx, Node *root_node) const
    {
        if (root_node == nullptr)
        {
            return;
        }
        traversal(data, idx, root_node->left);
        data[(*idx)++] = root_node->value;
        traversal(data, idx, root_node->right);
    }

    void clear(Node *root_node)
    {
        if (root_node == nullptr)
        {
            return;
        }
        clear(root_node->left);
        clear(root_node->right);
        delete root_node;
    }
};

int main()
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
