extern void fn_8263CBB0(void *a, unsigned int b, void *c, unsigned __int64 mask);

void fn_828580C0(void *a, unsigned int n, void *c)
{
    fn_8263CBB0(a, n, c, 0x8000000000000000ULL >> (n + 32));
}
