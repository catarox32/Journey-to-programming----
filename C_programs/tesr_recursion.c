int recur(int n )
{
    if(n==1)
        return 1;
    else
        return 1 + recur(n-1);
}

void number()
{
    int n = 3;
    printf("%d", recur(n));
}