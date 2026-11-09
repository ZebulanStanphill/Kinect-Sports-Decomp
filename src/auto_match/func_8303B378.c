extern char lbl_8216C628[];
extern char lbl_8217D3B0[];
extern char lbl_8217D3C4[];
typedef struct Base_8303B378 { void *vt; } Base_8303B378;
typedef struct Obj_8303B378 { void *vt; Base_8303B378 b; int f8; int fc; } Obj_8303B378;
void fn_8303B378(Obj_8303B378 *o, int a, int b)
{
    Base_8303B378 *s = &o->b;
    s->vt = lbl_8216C628;
    o->vt = lbl_8217D3C4;
    o->b.vt = lbl_8217D3B0;
    o->f8 = a;
    o->fc = b;
}
