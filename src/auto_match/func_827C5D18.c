extern void fn_827C5390(void *p, int code);
extern void fn_827C5428(void *p, int i);
extern void fn_827C5538(void *p, int i, int which);

typedef struct {
    char pad0[0x48];
    void *a[4];
    void *b[4];
    void *c[4];
    char pad78[0x39];
    unsigned char flagB1;
} Obj;

void fn_827C5D18(Obj *p)
{
    int i;

    fn_827C5390(p, 0xd8);
    for (i = 0; i < 4; i++) {
        if (p->a[i] != 0) {
            fn_827C5428(p, i);
        }
    }
    if (!p->flagB1) {
        for (i = 0; i < 4; i++) {
            if (p->b[i] != 0) {
                fn_827C5538(p, i, 0);
            }
            if (p->c[i] != 0) {
                fn_827C5538(p, i, 1);
            }
        }
    }
    fn_827C5390(p, 0xd9);
}
