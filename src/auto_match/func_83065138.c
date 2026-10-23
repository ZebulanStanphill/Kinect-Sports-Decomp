extern void *fn_8265C9E0(unsigned int size);
extern char lbl_8217E8A8[];

typedef struct {
    void *vtbl;
    int a;
    int b;
    int c;
    int d;
    unsigned char e;
    int f;
    int g;
} Obj;

Obj *fn_83065138(void)
{
    Obj *p;

    p = fn_8265C9E0(0x20);
    if (p != 0) {
        p->c = 0;
        p->vtbl = lbl_8217E8A8;
        p->a = 0;
        p->b = 0;
        p->d = 0;
        p->e = 0;
        p->g = 0;
        return p;
    }
    return 0;
}
