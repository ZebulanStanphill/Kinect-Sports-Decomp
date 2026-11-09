typedef struct Sub_828BD230 Sub_828BD230;
typedef struct SubVtbl_828BD230 {
    void *s0, *s1, *s2, *s3;
    unsigned int (*m10)(Sub_828BD230 *self);
    unsigned int (*m14)(Sub_828BD230 *self);
} SubVtbl_828BD230;
struct Sub_828BD230 { SubVtbl_828BD230 *vt; };

typedef struct Obj_828BD230 Obj_828BD230;
typedef struct ObjVtbl_828BD230 {
    void *s[14];
    float (*m38)(Obj_828BD230 *self, unsigned int v);
} ObjVtbl_828BD230;
struct Obj_828BD230 {
    ObjVtbl_828BD230 *vt;
    int f4, f8;
    float fC;
    int f10, f14, f18, f1c;
    Sub_828BD230 *sub;
    int f24;
    int f28;
};
extern unsigned int fn_8289D8D0(int v);
static __forceinline unsigned int A(Obj_828BD230 *o) { return o->sub != 0 && o->sub->vt->m10(o->sub) != 0; }
static __forceinline unsigned int B(Obj_828BD230 *o) { return o->sub != 0 && o->sub->vt->m14(o->sub) != 0; }
float fn_828BD230(Obj_828BD230 *o)
{
    if (A(o) || B(o)) {
        return o->vt->m38(o, fn_8289D8D0(o->f28));
    }
    return o->fC;
}
