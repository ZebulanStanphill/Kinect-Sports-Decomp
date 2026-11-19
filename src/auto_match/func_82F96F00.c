extern int WSAEventSelect(int, int, int);

int fn_82F96F00(int ctx, int a, int b, int c)
{
    return WSAEventSelect(a, b, c);
}
