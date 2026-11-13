typedef struct Cnt_8273E680 { int a; int b; int rc; } Cnt_8273E680;
typedef struct Ref_8273E680 { Cnt_8273E680 *p; } Ref_8273E680;
typedef struct Sub_8273E680 { int x; Ref_8273E680 y; } Sub_8273E680;
typedef struct Src_8273E680 { Cnt_8273E680 *a; Sub_8273E680 b; } Src_8273E680;
typedef struct Obj_8273E680 { void *vt; Ref_8273E680 y; } Obj_8273E680;
typedef struct Dst_8273E680 { Cnt_8273E680 *a; Obj_8273E680 b; } Dst_8273E680;
extern char lbl_820121E0[];
void fn_8273E680(Dst_8273E680 *d, Src_8273E680 *s)
{
    Sub_8273E680 *sb;
    Ref_8273E680 *r, *ty;
    Obj_8273E680 *o;
    Cnt_8273E680 *c;
    d->a = s->a;
    d->a->rc = d->a->rc + 1;
    o = &d->b;
    sb = &s->b;
    r = sb ? &sb->y : 0;
    ty = &o->y;
    c = r->p;
    if (c != 0) c->rc = (c->rc + 1) & 0x8fffffff;
    ty->p = r->p;
    o->vt = lbl_820121E0;
}
