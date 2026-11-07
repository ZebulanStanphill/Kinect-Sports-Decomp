typedef struct Sub_828AB6B8 Sub_828AB6B8;
typedef struct SubVtbl_828AB6B8 {
    void *s0, *s1, *s2, *s3;
    unsigned int (*m10)(Sub_828AB6B8 *self);
    unsigned int (*m14)(Sub_828AB6B8 *self);
} SubVtbl_828AB6B8;
struct Sub_828AB6B8 { SubVtbl_828AB6B8 *vt; };

typedef struct Obj_828AB6B8 Obj_828AB6B8;
typedef struct ObjVtbl_828AB6B8 {
    void *s[14];
    unsigned int (*m38)(Obj_828AB6B8 *self, unsigned int v);
} ObjVtbl_828AB6B8;
struct Obj_828AB6B8 {
    ObjVtbl_828AB6B8 *vt;
    int f4, f8;
    unsigned int fC;
    int f10, f14, f18, f1c;
    Sub_828AB6B8 *sub;
    int f24;
    int f28;
};
extern unsigned int fn_8289D8D0(int v);
static __forceinline unsigned int A(Obj_828AB6B8 *o) { return o->sub != 0 && o->sub->vt->m10(o->sub) != 0; }
static __forceinline unsigned int B(Obj_828AB6B8 *o) { return o->sub != 0 && o->sub->vt->m14(o->sub) != 0; }
unsigned int fn_828AB6B8(Obj_828AB6B8 *o)
{
    if (A(o) || B(o)) {
        return o->vt->m38(o, fn_8289D8D0(o->f28));
    }
    return o->fC;
}
