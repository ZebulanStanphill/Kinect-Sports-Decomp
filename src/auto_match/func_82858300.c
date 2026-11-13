extern void fn_826310E0(void *a, unsigned int offset, void *c, unsigned int size, unsigned __int64 mask);

int fn_82858300(void *a, unsigned int offset, void *c, unsigned int size)
{
    unsigned int first = offset >> 2;
    unsigned int last = (offset + size - 1) >> 2;

    fn_826310E0(a, offset, c, size,
          (unsigned __int64)((__int64)0x8000000000000000ULL >> (last - first)) >> first);
    return 0;
}
