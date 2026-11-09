typedef struct Sub_828AADB8 Sub_828AADB8;
typedef struct SubVtbl_828AADB8 {
    void *s0, *s1, *s2, *s3;
    unsigned int (*m10)(Sub_828AADB8 *self);
    unsigned int (*m14)(Sub_828AADB8 *self);
} SubVtbl_828AADB8;
struct Sub_828AADB8 { SubVtbl_828AADB8 *vt; };

typedef struct Obj_828AADB8 Obj_828AADB8;
typedef struct ObjVtbl_828AADB8 {
    void *s[14];
    unsigned char (*m38)(Obj_828AADB8 *self, unsigned int v);
} ObjVtbl_828AADB8;
struct Obj_828AADB8 {
    ObjVtbl_828AADB8 *vt;
    int f4, f8;
    unsigned char fC;
    int f10, f14, f18, f1c;
    Sub_828AADB8 *sub;
    int f24;
    int f28;
};
extern unsigned int fn_8289D8D0(int v);
static __forceinline unsigned int A(Obj_828AADB8 *o) { return o->sub != 0 && o->sub->vt->m10(o->sub) != 0; }
static __forceinline unsigned int B(Obj_828AADB8 *o) { return o->sub != 0 && o->sub->vt->m14(o->sub) != 0; }
unsigned char fn_828AADB8(Obj_828AADB8 *o)
{
    if (A(o) || B(o)) {
        return o->vt->m38(o, fn_8289D8D0(o->f28));
    }
    return o->fC;
}

