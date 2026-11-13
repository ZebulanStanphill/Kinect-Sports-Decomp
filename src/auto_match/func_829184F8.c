extern void fn_826311B8(void *a, unsigned int offset, void *c, unsigned int size, unsigned __int64 mask);

/* Converts size * 4 ints to 0.0f/1.0f bools, then forwards the int data with the dword mask of [offset, offset + size). */
int fn_829184F8(void *a, unsigned int offset, int *src, float *dst, unsigned int size)
{
    unsigned int n = size * 4;
    unsigned int i;
    unsigned int first;
    unsigned int last;

    for (i = 0; i != n; i++)
        dst[i] = (float)(src[i] != 0);
    first = offset >> 2;
    last = (offset + size - 1) >> 2;
    fn_826311B8(a, offset, src, size,
          (unsigned __int64)((__int64)0x8000000000000000ULL >> (last - first)) >> first);
    return 0;
}
