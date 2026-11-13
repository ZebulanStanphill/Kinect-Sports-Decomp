extern int fn_82F640F0(void *dest, unsigned int destSize, const void *src, unsigned int count);

int *fn_82F902F0(int *first, int *last, int *dest, unsigned char tag1, unsigned char tag2, unsigned char tag3)
{
    int *result;
    {
        int count = last - first;
        result = dest - count;
        if (count > 0)
            fn_82F640F0(result, count * sizeof(*first), first, count * sizeof(*first));
    }
    return result;
}
