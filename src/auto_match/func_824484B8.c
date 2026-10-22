typedef unsigned char bool;
extern void fn_82448E88();
extern void fn_8244D118();

typedef struct Data {
    char pad0[0x148];
    unsigned int a;
    unsigned int b;
    char pad150[4];
    unsigned int a_max;
    unsigned int b_max;
    char pad15c[0x198 - 0x15c];
    int active;
} Data;

typedef struct Other {
    char pad0[0x40];
    int busy;
} Other;

typedef struct Obj {
    char pad0[0x40];
    Data *data;
    char pad44[4];
    Other *other;
} Obj;

void fn_824484B8(Obj *o)
{
    bool more;

    fn_8244D118();
    if (o->data->b + 1 < o->data->b_max) {
        more = 1;
    } else {
        more = o->data->a + 1 < o->data->a_max;
    }
    if (!more && o->data->active != 0 && o->other->busy == 0) {
        fn_82448E88(o);
    }
}
