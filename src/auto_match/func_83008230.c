typedef struct Vec_83008230 { void *first; void *last; void *end; } Vec_83008230;
typedef struct Obj_83008230 { void *vt; char pad[0x20]; Vec_83008230 v; } Obj_83008230;
extern void fn_8265CA20(void *p);
extern void fn_82FA5190(void *heap, void *p);
extern unsigned int lbl_8217C054;
extern unsigned int lbl_8217D040;
extern void *lbl_831BC768;

Obj_83008230 *fn_83008230(Obj_83008230 *o, unsigned int flags)
{
    Vec_83008230 *v = &o->v;
o->vt = &lbl_8217C054;
if (v->first != 0) { v->last = v->first; fn_82FA5190(lbl_831BC768, v->first); v->first = 0; v->last = 0; v->end = 0; }

    o->vt = &lbl_8217D040;
    if ((flags & 1) != 0)
        fn_8265CA20(o);
    return o;
}
