typedef struct Desc_82A9DBD0 {
    unsigned int f0;
    char pad4[0x38 - 0x4];
    unsigned short f38;
    unsigned short f3a;
    unsigned short f3c;
    unsigned short f3e;
    unsigned short f40;
} Desc_82A9DBD0;

extern void fn_82A9D7B8(void *a, void *b, Desc_82A9DBD0 *d);
extern void fn_82A9D888(void *a, void *b, unsigned int f0, unsigned int f38, unsigned int f3a,
                        unsigned int f3c, unsigned int f3e, unsigned int f40);

void fn_82A9DBD0(void *a, void *b, Desc_82A9DBD0 *d)
{
    fn_82A9D7B8(a, b, d);
    fn_82A9D888(a, b,
                d ? d->f0 : 0,
                d ? d->f38 : 0,
                d ? d->f3a : 0,
                d ? d->f3c : 0,
                d ? d->f3e : 0,
                d ? d->f40 : 0);
}
