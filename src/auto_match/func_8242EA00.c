extern void fn_823BC1B8(void *p, int a);
extern void *fn_8265C9E0(unsigned int size);
extern char lbl_821B9008[];

typedef struct Sub {
    int a, b, c, d;
} Sub;

typedef struct Obj {
    void *vtbl;
    char pad[0x2c];
    Sub s;
} Obj;

Obj *fn_8242EA00(int param_1)
{
    Obj *p = (Obj *)fn_8265C9E0(0x40);
    if (p != 0) {
        Sub *s;
        fn_823BC1B8(p, param_1);
        p->vtbl = lbl_821B9008;
        s = &p->s;
        s->a = 0;
        s->b = 0;
        s->c = 0;
        s->d = 0;
        return p;
    }
    return 0;
}
