typedef __declspec(passinreg) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;

typedef struct Rec_823F9EF0 {
    unsigned char b[0x4c];
} Rec_823F9EF0;

typedef struct Src_823F9EF0 Src_823F9EF0;
typedef struct SrcVtbl_823F9EF0 {
    void *f[5];
    void (*Get)(Src_823F9EF0 *self, int key, void *out);
} SrcVtbl_823F9EF0;
struct Src_823F9EF0 {
    SrcVtbl_823F9EF0 *vt;
};

typedef struct Obj_823F9EF0 {
    char pad0[8];
    char *r;
    char *v0;
    char *v1;
    char *v2;
    char *i;
    Src_823F9EF0 *s0;
    int pad20;
    Src_823F9EF0 *s1;
    int pad28;
    Src_823F9EF0 *s2;
    int pad30;
    Src_823F9EF0 *s3;
    int pad38;
    Src_823F9EF0 *s4;
} Obj_823F9EF0;

extern void fn_82250D10(Rec_823F9EF0 *r);

void fn_823F9EF0(Obj_823F9EF0 *o, int key, unsigned int off)
{
    Rec_823F9EF0 r;
    __vector4 v0;
    __vector4 v1;
    __vector4 v2;
    int i;

    fn_82250D10(&r);
    o->s0->vt->Get(o->s0, key, &r);
    o->s1->vt->Get(o->s1, key, &v0);
    o->s2->vt->Get(o->s2, key, &v1);
    o->s3->vt->Get(o->s3, key, &v2);
    o->s4->vt->Get(o->s4, key, &i);
    if (off != 0) {
        *(Rec_823F9EF0 *)(o->r + off) = r;
        *(__vector4 *)(o->v0 + off) = v0;
        *(__vector4 *)(o->v1 + off) = v1;
        *(__vector4 *)(o->v2 + off) = v2;
        *(int *)(o->i + off) = i;
    }
}
