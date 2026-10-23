extern int fn_828E9D90(void *r);
extern int fn_828E9DA8(void *r);
extern unsigned int fn_828E9FF8(void *r, int n);
extern void fn_8223C478(void *w, int n, int v);
extern void fn_828E9DB8(void *w, unsigned char v, int n);
extern void fn_828E9D40(void *w);

static unsigned int ReadBits(void *r, int n)
{
    if (fn_828E9DA8(r) - fn_828E9D90(r) >= n)
        return fn_828E9FF8(r, n);
    return 0;
}

void fn_82891CF8(char *self, void *r)
{
    unsigned int i;

    *(unsigned int *)(self + 0x4bc) = ReadBits(r, 0xb);
    for (i = 0; i < *(unsigned int *)(self + 0x4bc); i++) {
        unsigned int v = ReadBits(r, 8);
        fn_8223C478(self + 0x494, 8, 0);
        fn_828E9DB8(self + 0x494, (unsigned char)v, 8);
    }
    fn_828E9D40(self + 0x494);
}
