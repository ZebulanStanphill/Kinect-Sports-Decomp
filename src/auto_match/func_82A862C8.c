typedef struct Desc_82A862C8 {
    unsigned int magic;
    int f04;
    int f08;
    int a;
    int f10;
    int f14;
    int f18;
    int f1c;
    int f20;
    int b;
    int f28;
} Desc_82A862C8;

extern void *memset(void *, int, unsigned int);

Desc_82A862C8 *fn_82A862C8(Desc_82A862C8 *d, int a, int b)
{
    memset(d, 0, sizeof(*d));
    d->a = a;
    d->b = b;
    d->f04 = 0;
    d->magic = 0x1a200154;
    d->f08 = 0;
    d->f10 = 0;
    d->f14 = 0;
    d->f18 = 0;
    d->f1c = 1;
    d->f20 = 0;
    d->f28 = 0;
    return d;
}
