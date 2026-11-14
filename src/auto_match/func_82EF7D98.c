extern int fn_82EF75C0(const unsigned char *a, int strideA, const unsigned char *b, int strideB);

int fn_82EF7D98(const unsigned char *a, int strideA, const unsigned char *b, int strideB, int limit)
{
    if (limit < 0)
        return 0;
    return fn_82EF75C0(a, strideA, b, strideB);
}
