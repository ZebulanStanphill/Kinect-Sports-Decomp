typedef struct Obj_82FBCAE0 {
    char pad0[0x18];
    float a;
    float b;
} Obj_82FBCAE0;

typedef struct Elem_82FBCAE0 {
    int v[4];
} Elem_82FBCAE0;

typedef struct Self_82FBCAE0 Self_82FBCAE0;
struct Self_82FBCAE0 {
    int vt;
    Obj_82FBCAE0 *obj;
    void *h8;
    void *hc;
    Elem_82FBCAE0 *arr;
    char pad14[0x60 - 0x14];
    float f60;
    float f64;
    void (*cb)(Self_82FBCAE0 *, int);
    char pad6c[0x104 - 0x6c];
    unsigned int count;
};

extern void fn_82FC8FD0(Elem_82FBCAE0 *e, float v);
extern void fn_82FC9D50(void *h, float v);
extern void fn_82FCA2D8(void *h, float v);

void fn_82FBCAE0(Self_82FBCAE0 *p, int a)
{
    float v;
    unsigned int i;

    v = p->obj->a;
    if (v != p->f60) {
        if (p->h8 != 0) {
            fn_82FC9D50(p->h8, v);
        } else {
            fn_82FCA2D8(p->hc, v);
        }
        p->f60 = v;
    }
    v = p->obj->b;
    if (v != p->f64) {
        for (i = 0; i < p->count; i++) {
            fn_82FC8FD0(&p->arr[i], v);
        }
        p->f64 = v;
    }
    p->cb(p, a);
}
