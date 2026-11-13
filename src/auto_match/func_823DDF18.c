typedef struct Pair_823DDF18 {
    void *a;
    void *b;
} Pair_823DDF18;

typedef struct Inner_823DDF18 {
    int pad[3];
    Pair_823DDF18 *pair;
} Inner_823DDF18;

typedef struct Obj_823DDF18 {
    int pad0;
    unsigned int type;
    Inner_823DDF18 *inner;
    int fc;
} Obj_823DDF18;

extern void fn_822AF138(void *p, int v);

void fn_823DDF18(Obj_823DDF18 *o)
{
    if (o->type == 8 || o->type == 4) {
        fn_822AF138(o->inner->pair->a, 5);
        fn_822AF138(o->inner->pair->b, 5);
    }
    o->fc = 0;
}
