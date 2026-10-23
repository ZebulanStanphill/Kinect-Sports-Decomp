typedef struct Src Src;
typedef struct SrcVtbl {
    void *f0;
    unsigned char (*isOpen)(Src *self);
    void *f8;
    void *fC;
    unsigned char (*read)(Src *self, void *buf, int size, void *out);
} SrcVtbl;
struct Src {
    SrcVtbl *vtbl;
};

extern void fn_82A86E00(void *a, void *b, int n);
extern void fn_82A87148(void *a, int off, int n, void *out);
extern void fn_82A8C620(void *a, int off, int n, void *out);

unsigned char fn_82A87790(void *self, Src *src, char *out)
{
    char *q;
    unsigned char a[8];
    unsigned char b[8];

    if (!src->vtbl->isOpen(src) || !src->vtbl->read(src, b, 8, a))
        return 0;
    fn_82A86E00(a, b, 8);
    fn_82A8C620(a, 0, 0x20, out);
    q = out + 4;
    fn_82A87148(a, 0x20, 0x10, q + 2);
    fn_82A87148(a, 0x30, 0x10, q);
    return 1;
}
