extern void fn_826311B8(void *a, unsigned int offset, void *c, unsigned int size, unsigned __int64 mask);

int fn_82858350(void *a, unsigned int offset, void *c, unsigned int size)
{
    unsigned int first = offset >> 2;
    unsigned int last = (offset + size - 1) >> 2;

    fn_826311B8(a, offset, c, size,
          (unsigned __int64)((__int64)0x8000000000000000ULL >> (last - first)) >> first);
    return 0;
}
