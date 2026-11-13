typedef struct Item_823ABB08 {
    unsigned int key;
    unsigned int f4;
    unsigned char value;
} Item_823ABB08;

typedef struct Ref_823ABB08 {
    Item_823ABB08 *ptr;
    void *ctrl;
} Ref_823ABB08;

typedef struct Vec_823ABB08 {
    Ref_823ABB08 *first;
    Ref_823ABB08 *last;
} Vec_823ABB08;

typedef struct Self_823ABB08 {
    char pad0[0x6c];
    Vec_823ABB08 a;
    char pad74[0x7c - 0x74];
    Vec_823ABB08 b;
} Self_823ABB08;

extern void fn_82365BD8(Ref_823ABB08 *out, Ref_823ABB08 *src);
extern void fn_822315A0(void *ctrl);

static __forceinline Ref_823ABB08 *find_823ABB08(Vec_823ABB08 *v, unsigned int key)
{
    Ref_823ABB08 *last = v->last;
    Ref_823ABB08 *e;
    for (e = v->first; e != last; e++) {
        if (e->ptr->key == key) break;
    }
    return e;
}

static __forceinline unsigned char get_823ABB08(Ref_823ABB08 *e)
{
    Ref_823ABB08 ref;
    unsigned char value;

    fn_82365BD8(&ref, e);
    value = ref.ptr->value;
    if (ref.ctrl != 0) {
        fn_822315A0(ref.ctrl);
    }
    return value;
}

unsigned char fn_823ABB08(Self_823ABB08 *self, unsigned int key)
{
    Ref_823ABB08 *e;

    e = find_823ABB08(&self->a, key);
    if (e != self->a.last) {
        return get_823ABB08(e);
    }
    e = find_823ABB08(&self->b, key);
    if (e != self->b.last) {
        return get_823ABB08(e);
    }
    return 0;
}
