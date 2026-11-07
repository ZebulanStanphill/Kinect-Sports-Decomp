typedef struct Vt_82487008 Vt_82487008;

typedef struct Obj_82487008 {
    Vt_82487008 *vt;
    int unk4;
    unsigned int value;
    float time;
} Obj_82487008;

struct Vt_82487008 {
    void (*f0)(Obj_82487008 *self);
    void (*f4)(Obj_82487008 *self);
    void (*f8)(Obj_82487008 *self);
    void (*fC)(Obj_82487008 *self);
};

typedef struct Handle_82487008 {
    Obj_82487008 *obj;
    void *ref;
} Handle_82487008;

extern Handle_82487008 *fn_8247B210(Handle_82487008 *out, void *ctx, unsigned int id);
extern void fn_82486BC0(Obj_82487008 *obj, unsigned int other);
extern void fn_822315A0(void *ref);
extern float fn_82522FF0(void);

void fn_82487008(void *ctx, unsigned int a, unsigned int b)
{
    Handle_82487008 h1;
    Handle_82487008 h2;
    Obj_82487008 *o;

    if (a != 0) {
        fn_82486BC0(fn_8247B210(&h1, ctx, a)->obj, b);
        if (h1.ref != 0) {
            fn_822315A0(h1.ref);
        }
    }
    if (b != 0) {
        o = fn_8247B210(&h2, ctx, b)->obj;
        o->value = a;
        o->time = fn_82522FF0();
        o->vt->fC(o);
        if (h2.ref != 0) {
            fn_822315A0(h2.ref);
        }
    }
}
