from cryptography.fernet import Fernet

class password_manager:
    def __init__(self) -> None:
        self.key = None
        self.pw_file = None
        self.pw_dict = {}
        pass
    def create_key(self, path):
        self.key = Fernet.generate_key()
        print(self.key)

pm = password_manager
pm.create_key(None)