void fn_826FDED0(void *p);
extern unsigned int lbl_82010C6C;

typedef struct Obj {
    void *vt;
    int x4;
    int x8;
    unsigned short h[6];
} Obj;

typedef struct S {
    char sub[0x2c];
    Obj o;
} S;

S *fn_827A70E0(S *s)
{
    fn_826FDED0(s->sub);
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
