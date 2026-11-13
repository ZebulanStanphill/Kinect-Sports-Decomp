typedef __declspec(passinreg) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;

typedef struct Rec_823FA0C0 {
    unsigned char b[0x4c];
} Rec_823FA0C0;

typedef struct Src_823FA0C0 Src_823FA0C0;
typedef struct SrcVtbl_823FA0C0 {
    void *f[5];
    void (*Get)(Src_823FA0C0 *self, int key, void *out);
} SrcVtbl_823FA0C0;
struct Src_823FA0C0 {
    SrcVtbl_823FA0C0 *vt;
};

typedef struct Obj_823FA0C0 {
    char pad0[8];
    char *r;
    char *v0;
    char *v1;
    char *i;
    char *b;
    Src_823FA0C0 *s0;
    int pad20;
    Src_823FA0C0 *s1;
    int pad28;
    Src_823FA0C0 *s2;
    int pad30;
    Src_823FA0C0 *s3;
    int pad38;
    Src_823FA0C0 *s4;
} Obj_823FA0C0;

extern void fn_82250D10(Rec_823FA0C0 *r);

void fn_823FA0C0(Obj_823FA0C0 *o, int key, unsigned int off)
{
    Rec_823FA0C0 r;
    __vector4 v0;
    __vector4 v1;
    int i;
    unsigned char b;

    fn_82250D10(&r);
    o->s0->vt->Get(o->s0, key, &r);
    o->s1->vt->Get(o->s1, key, &v0);
    o->s2->vt->Get(o->s2, key, &v1);
    o->s3->vt->Get(o->s3, key, &i);
    o->s4->vt->Get(o->s4, key, &b);
    if (off != 0) {
        *(Rec_823FA0C0 *)(o->r + off) = r;
        *(__vector4 *)(o->v0 + off) = v0;
        *(__vector4 *)(o->v1 + off) = v1;
        *(int *)(o->i + off) = i;
        *(unsigned char *)(o->b + off) = b;
    }
}
