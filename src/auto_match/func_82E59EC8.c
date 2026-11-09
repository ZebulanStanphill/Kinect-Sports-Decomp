unsigned long __cdecl _byteswap_ulong(unsigned long v);
extern int fn_82EE5F60(void *s, void *buf, int n);
extern void fn_82EE5E28(void *s, int n);

void fn_82E59EC8(unsigned int *out, void *s)
{
    unsigned int v;
    if (fn_82EE5F60(s, &v, 4) >= 0) {
        *out = _byteswap_ulong(v);
        fn_82EE5E28(s, 4);
    }
}
