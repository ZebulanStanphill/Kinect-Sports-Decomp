extern void fn_826311B8(void *p, unsigned int start, void *src, unsigned int count, unsigned __int64 mask);

void fn_82838FD0(void *p, unsigned int start, void *src, unsigned int count)
{
    unsigned int first = start >> 2;
    unsigned int last = (start + count - 1) >> 2;
    fn_826311B8(p, start, src, count,
                (unsigned __int64)((__int64)0x8000000000000000ULL >> (last - first)) >> first);
}
