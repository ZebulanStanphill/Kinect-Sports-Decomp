extern int fn_82F640F0(void *dest, unsigned int destSize, const void *src, unsigned int count);

int *fn_82F904C8(int *first, int *last, int *dest, int destSize, unsigned char tag1, unsigned char tag2)
{
    unsigned int count = last - first;
    int *result = dest + count;
    if (count > 0)
        fn_82F640F0(dest, count * sizeof(*first), first, count * sizeof(*first));
    return result;
}
