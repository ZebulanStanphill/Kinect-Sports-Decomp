typedef struct { int f8; int fc; int f10; } Sub;
typedef struct { void *vt; int f4; Sub s; } Obj;
extern void fn_82240DB8(Obj *o);
extern char lbl_82197144[];

Obj *fn_8223AC40(Obj *o)
{
    Sub *s;
    fn_82240DB8(o);
    s = &o->s;
    o->vt = lbl_82197144;
    s->f8 = 7;
    s->f10 = 1;
    s->fc = 0;
    return o;
}
