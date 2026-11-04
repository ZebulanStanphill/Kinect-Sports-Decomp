extern unsigned int fn_82F64CE0(const unsigned short *);
extern void fn_82A1BF98(void *, void *, unsigned int, const unsigned short *);

void fn_828ED440(void *unused, void *a, void *b, const unsigned short *s)
{
    unsigned int n = (fn_82F64CE0(s) + 1) * 2;
    fn_82A1BF98(a, b, n, s);
}
