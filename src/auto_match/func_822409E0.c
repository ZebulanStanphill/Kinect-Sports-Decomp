extern void fn_8289D7E8(void *param_1, unsigned int param_2);
extern unsigned int lbl_821B4200;
extern unsigned int lbl_821971F8;
extern unsigned int lbl_82197240;
typedef struct { void *vt; int a; void *owner; } Sub;
typedef struct { void *vt; int pad[0x14]; Sub s; } Obj;
static void Sub_ctor(Sub *s, void *o) { s->owner = o; s->vt = &lbl_821B4200; s->a = 0; }
Obj *fn_822409E0(Obj *p)
{
    fn_8289D7E8(p, 1);
    Sub_ctor(&p->s, p);
    p->vt = &lbl_821971F8;
    p->s.vt = &lbl_82197240;
    return p;
}
