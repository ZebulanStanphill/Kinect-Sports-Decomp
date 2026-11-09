/* Reads one record (three vectors, a float and an int) from five typed sources through
   their slot 5 Get method and, for a non-zero offset, stores each value at that byte
   offset into the matching column array. */
typedef __declspec(passinreg) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;

typedef struct Src_823928F0 Src_823928F0;
typedef struct SrcVtbl_823928F0 {
    void *f[5];
    void (*Get)(Src_823928F0 *self, int key, void *out);
} SrcVtbl_823928F0;
struct Src_823928F0 {
    SrcVtbl_823928F0 *vt;
};

typedef struct Obj_823928F0 {
    char pad0[8];
    char *v0;
    char *v1;
    char *v2;
    char *f;
    char *i;
    Src_823928F0 *s0;
    int pad20;
    Src_823928F0 *s1;
    int pad28;
    Src_823928F0 *s2;
    int pad30;
    Src_823928F0 *s3;
    int pad38;
    Src_823928F0 *s4;
} Obj_823928F0;

void fn_823928F0(Obj_823928F0 *o, int key, unsigned int off)
{
    __vector4 v0;
    __vector4 v1;
    __vector4 v2;
    float f;
    int i;

    o->s0->vt->Get(o->s0, key, &v0);
    o->s1->vt->Get(o->s1, key, &v1);
    o->s2->vt->Get(o->s2, key, &v2);
    o->s3->vt->Get(o->s3, key, &f);
    o->s4->vt->Get(o->s4, key, &i);
    if (off != 0) {
        *(__vector4 *)(o->v0 + off) = v0;
        *(__vector4 *)(o->v1 + off) = v1;
        *(__vector4 *)(o->v2 + off) = v2;
        *(float *)(o->f + off) = f;
        *(int *)(o->i + off) = i;
    }
}
