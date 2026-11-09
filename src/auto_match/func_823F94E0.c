/* Reads one record (a vector, an int, a bool, a float and an int) from five typed sources
   through their slot 5 Get method and, for a non-zero offset, stores each value at that
   byte offset into the matching column array. */
typedef __declspec(passinreg) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;

typedef struct Src_823F94E0 Src_823F94E0;
typedef struct SrcVtbl_823F94E0 {
    void *f[5];
    void (*Get)(Src_823F94E0 *self, int key, void *out);
} SrcVtbl_823F94E0;
struct Src_823F94E0 {
    SrcVtbl_823F94E0 *vt;
};

typedef struct Obj_823F94E0 {
    char pad0[8];
    char *vecs;
    char *a;
    char *b;
    char *c;
    char *d;
    Src_823F94E0 *s0;
    int pad20;
    Src_823F94E0 *s1;
    int pad28;
    Src_823F94E0 *s2;
    int pad30;
    Src_823F94E0 *s3;
    int pad38;
    Src_823F94E0 *s4;
} Obj_823F94E0;

void fn_823F94E0(Obj_823F94E0 *o, int key, unsigned int off)
{
    __vector4 v;
    int a;
    unsigned char b;
    float c;
    int d;

    o->s0->vt->Get(o->s0, key, &v);
    o->s1->vt->Get(o->s1, key, &a);
    o->s2->vt->Get(o->s2, key, &b);
    o->s3->vt->Get(o->s3, key, &c);
    o->s4->vt->Get(o->s4, key, &d);
    if (off != 0) {
        *(__vector4 *)(o->vecs + off) = v;
        *(int *)(o->a + off) = a;
        *(unsigned char *)(o->b + off) = b;
        *(float *)(o->c + off) = c;
        *(int *)(o->d + off) = d;
    }
}
