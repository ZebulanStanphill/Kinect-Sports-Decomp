typedef struct D {
    char pad0[0x20];
    unsigned int x20;
    char pad24[0xc];
    unsigned int x30;
} D;
typedef struct S {
    D *d;
    char pad4[0x24];
    int rows;
} S;
extern void fn_8263BDD8(D *d, int a, int b, int c, void **data, int *pitch, int *e, int *f);
extern void fn_8262FBD8(D *d, unsigned int a, unsigned int b);
extern void *memset(void *p, int c, unsigned int n);

void fn_82278950(S *p)
{
    void *data;
    int pitch;
    int e;
    int f;
    fn_8263BDD8(p->d, 0, 0, 0, &data, &pitch, &f, &e);
    memset(data, 0, p->rows * pitch);
    fn_8262FBD8(p->d, p->d->x20 & ~0xfff, p->d->x30 & ~0xfff);
}
