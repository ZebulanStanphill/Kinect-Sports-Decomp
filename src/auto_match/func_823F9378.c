typedef __declspec(passinreg) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;

typedef struct Src Src;
typedef struct SrcVtbl {
    void *f[5];
    void (*Get)(Src *self, int key, void *out);
} SrcVtbl;
struct Src {
    SrcVtbl *vt;
};

typedef struct Obj {
    char pad0[8];
    char *vecs;
    char *a;
    char *b;
    char *c;
    char *d;
    Src *s0;
    int pad20;
    Src *s1;
    int pad28;
    Src *s2;
    int pad30;
    Src *s3;
    int pad38;
    Src *s4;
} Obj;

void fn_823F9378(Obj *o, int key, unsigned int off)
{
    __vector4 v;
    int a, b, c, d;

    o->s0->vt->Get(o->s0, key, &v);
    o->s1->vt->Get(o->s1, key, &a);
    o->s2->vt->Get(o->s2, key, &b);
    o->s3->vt->Get(o->s3, key, &c);
    o->s4->vt->Get(o->s4, key, &d);
    if (off != 0) {
        *(__vector4 *)(o->vecs + off) = v;
        *(int *)(o->a + off) = a;
        *(int *)(o->b + off) = b;
        *(int *)(o->c + off) = c;
        *(int *)(o->d + off) = d;
    }
}
