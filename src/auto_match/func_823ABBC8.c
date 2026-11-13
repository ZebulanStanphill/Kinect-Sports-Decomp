typedef struct Item_823ABBC8 {
    unsigned int key;
    unsigned int value;
} Item_823ABBC8;

typedef struct Ref_823ABBC8 {
    Item_823ABBC8 *ptr;
    void *ctrl;
} Ref_823ABBC8;

typedef struct Vec_823ABBC8 {
    Ref_823ABBC8 *first;
    Ref_823ABBC8 *last;
} Vec_823ABBC8;

typedef struct Self_823ABBC8 {
    char pad0[0x6c];
    Vec_823ABBC8 a;
    char pad74[0x7c - 0x74];
    Vec_823ABBC8 b;
} Self_823ABBC8;

extern void fn_82365BD8(Ref_823ABBC8 *out, Ref_823ABBC8 *src);
extern void fn_822315A0(void *ctrl);

static __forceinline Ref_823ABBC8 *find_823ABBC8(Vec_823ABBC8 *v, unsigned int key)
{
    Ref_823ABBC8 *last = v->last;
    Ref_823ABBC8 *e;
    for (e = v->first; e != last; e++) {
        if (e->ptr->key == key) break;
    }
    return e;
}

static __forceinline unsigned int get_823ABBC8(Ref_823ABBC8 *e)
{
    Ref_823ABBC8 ref;
    unsigned int value;

    fn_82365BD8(&ref, e);
    value = ref.ptr->value;
    if (ref.ctrl != 0) {
        fn_822315A0(ref.ctrl);
    }
    return value;
}

unsigned int fn_823ABBC8(Self_823ABBC8 *self, unsigned int key)
{
    Ref_823ABBC8 *e;

    e = find_823ABBC8(&self->a, key);
    if (e != self->a.last) {
        return get_823ABBC8(e);
    }
    e = find_823ABBC8(&self->b, key);
    if (e != self->b.last) {
        return get_823ABBC8(e);
    }
    return 8;
}
