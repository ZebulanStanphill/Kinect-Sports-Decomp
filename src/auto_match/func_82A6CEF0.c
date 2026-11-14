extern int fn_82C300E8(int a0, int a1, int a2, int a3, int a4, int a5, int a6, unsigned int a7);

int fn_82A6CEF0(int a0, int a1, int a2, int a3, int a4, int a5, int a6, unsigned int key)
{
    return fn_82C300E8(a0, a1, a2, a3, a4, a5, a6, key ^ 0xAB7638DE);
}
