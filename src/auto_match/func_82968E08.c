extern int fn_82968BC8(unsigned int a, unsigned int b, void *ctx);
extern int fn_829689A0(unsigned int a, unsigned int b, void *ctx);

int fn_82968E08(unsigned int a, unsigned int b, void *ctx)
{
    int first = fn_82968BC8(a, b, ctx);
    int second = fn_82968BC8(a, b, ctx);
    int result;

    if (first != 0)
        return 1;
    if (second != 0)
        return -1;
    result = fn_829689A0(a, b, ctx);
    if (result != 0)
        return result;
    if (a < b)
        return -1;
    return b < a;
}
