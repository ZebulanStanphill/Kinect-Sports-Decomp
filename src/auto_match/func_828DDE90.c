typedef struct {
    char pad0[0x18];
    int key;
    char pad1c[0x6c - 0x1c];
    void *target;
    char pad70[0x80 - 0x70];
    int a;
    int b;
    float f;
    char d[0xb0 - 0x8c];
    char e[8];
    char g[8];
} Obj_828DDE90;

extern void *fn_8289F2E0(void *target, int key);
extern int fn_82A4AAA8(void *p);
extern int fn_823AA970(void *p);
extern int fn_828D4578(void *o, int a, int b, int c, float f, void *d, void *e, void *g);

int fn_828DDE90(Obj_828DDE90 *self)
{
    void *p = fn_8289F2E0(self->target, self->key);
    if (p != 0 && fn_82A4AAA8(p) == 1) {
        void *t = self->target;
        return fn_828D4578(t, fn_823AA970(p), self->a, self->b, self->f, self->d, self->e, self->g);
    }
    return 1;
}
