extern void fn_826310E0(void *p, unsigned int start, void *src, unsigned int count, unsigned __int64 mask);

void fn_828521D8(void *p, unsigned int start, void *src, unsigned int count)
{
    unsigned int first = start >> 2;
    unsigned int last = (start + count - 1) >> 2;
    fn_826310E0(p, start, src, count,
                (unsigned __int64)((__int64)0x8000000000000000ULL >> (last - first)) >> first);
}
