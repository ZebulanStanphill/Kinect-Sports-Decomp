typedef struct Entry_827899E0 {
    unsigned int a;
    unsigned int b;
    int value;
} Entry_827899E0;

typedef struct Key_827899E0 {
    unsigned int b;
    unsigned int a;
} Key_827899E0;

typedef struct Obj_827899E0 Obj_827899E0;

typedef struct Cmp_827899E0 {
    Obj_827899E0 *owner;
    void *ctx;
} Cmp_827899E0;

typedef struct Vec_827899E0 {
    unsigned int *data;
    unsigned int count;
} Vec_827899E0;

struct Obj_827899E0 {
    char pad0[0x10];
    char f10[0xc];
    Entry_827899E0 **pages;
    char pad20[0x30 - 0x20];
    Vec_827899E0 sorted;
};

extern unsigned int fn_82789468(Vec_827899E0 *v, unsigned int lo, unsigned int hi, Key_827899E0 *key,
                                Cmp_827899E0 cmp);

static __forceinline Entry_827899E0 *Lookup_827899E0(Obj_827899E0 *o, unsigned int h)
{
    return &o->pages[h >> 10][h & 0x3ff];
}

int fn_827899E0(Obj_827899E0 *o, unsigned int handle)
{
    Entry_827899E0 *e = Lookup_827899E0(o, handle);
    Cmp_827899E0 cmp;
    Key_827899E0 key;
    unsigned int b;
    unsigned int a;
    unsigned int i;

    cmp.owner = o;
    cmp.ctx = o->f10;
    b = e->b;
    a = e->a;
    key.b = b;
    key.a = a;
    i = fn_82789468(&o->sorted, 0, o->sorted.count, &key, cmp);
    if (i < o->sorted.count) {
        e = Lookup_827899E0(o, o->sorted.data[i]);
        if (e->a == b && e->b == a) {
            return e->value;
        }
    }
    return -1;
}
