void fn_826FDED0(void *p, int arg);
extern unsigned int lbl_82010C6C;

typedef struct Obj {
    void *vt;
    int x4;
    int x8;
    unsigned short h[6];
} Obj;

typedef struct S {
    int a, b, c, d;
    char sub[0x2c];
    Obj o;
} S;

S *fn_82793350(S *s, int arg, int a, int b, int c, int d)
{
    s->a = a;
    s->b = b;
    s->c = c;
    s->d = d;
    fn_826FDED0(s->sub, arg);
    s->o.vt = &lbl_82010C6C;
    s->o.x4 = 1;
    s->o.x8 = 0;
    s->o.h[0] = 0;
    s->o.h[1] = 0;
    s->o.h[2] = 0;
    s->o.h[3] = 0;
    s->o.h[4] = 0;
    s->o.h[5] = 0;
    return s;
}
