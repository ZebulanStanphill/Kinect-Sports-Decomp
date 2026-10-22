typedef struct Iface Iface;
typedef struct {
    int unk0;
    int (*fn4)(Iface *self, int a, int b, int c, unsigned int *d, int e);
} IfaceVtbl;
struct Iface {
    IfaceVtbl *vtbl;
};

extern void fn_829E1E10(unsigned int a, unsigned char *b);
extern unsigned int *lbl_83217B88;
extern Iface *lbl_83217BA8;

int fn_829E2DE8(int a, int b, int c, unsigned char *out, int e)
{
    int hr;

    hr = lbl_83217BA8->vtbl->fn4(lbl_83217BA8, a, b, c, lbl_83217B88, e);
    if (hr >= 0) {
        fn_829E1E10(lbl_83217B88[0xe], out);
        hr = 0;
        *(int *)(out + 2000) = lbl_83217B88[2] - lbl_83217B88[0];
    }
    return hr;
}
