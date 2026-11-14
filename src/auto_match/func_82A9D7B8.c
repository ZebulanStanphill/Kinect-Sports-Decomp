typedef struct Desc_82A9D7B8 {
    unsigned int f0;
    int pad4[3];
    unsigned int f10;
    int pad14[3];
    unsigned int f20;
    unsigned int f24;
    unsigned int f28;
    unsigned int f2c;
    unsigned int f30;
    unsigned int f34;
} Desc_82A9D7B8;

extern void fn_82A9D590(void *a, void *b, unsigned int f0, unsigned int f10, unsigned int f20,
                        unsigned int f24, unsigned int f28, unsigned int f2c, unsigned int f34,
                        unsigned int f30);

void fn_82A9D7B8(void *a, void *b, Desc_82A9D7B8 *d)
{
    fn_82A9D590(a, b,
                d ? d->f0 : 0,
                d ? d->f10 : 0,
                d ? d->f20 : 0,
                d ? d->f24 : 0,
                d ? d->f28 : 0,
                d ? d->f2c : 0,
                d ? d->f34 : 0,
                d ? d->f30 : 0);
}
