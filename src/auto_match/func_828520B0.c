extern void fn_82639F78(int a, int index, int b, int c, int d, unsigned __int64 mask);

void fn_828520B0(int a, int index, int b, int c, int d)
{
    fn_82639F78(a, index, b, c, d,
                0x8000000000000000ULL >> ((((unsigned)((0x5f - index) * 0x5556)) >> 16) + 32));
}
