
typedef struct Item_82292670 {
    char data[36];
} Item_82292670;

typedef struct Vector_82292670 {
    Item_82292670 *first, *last, *cap;
} Vector_82292670;

typedef struct Owner_82292670 {
    char pad[0x24];
    Vector_82292670 a;
    int pad30;
    Vector_82292670 b;
    int pad40;
    Vector_82292670 c;
} Owner_82292670;
typedef struct Obj_82292670 Obj_82292670;

typedef struct Vt_82292670 {
    void *pad[4];
    void (*submit)(Obj_82292670 *, Vector_82292670 *);
    void *pad14;
    Obj_82292670 *(*get)(Obj_82292670 *);
} Vt_82292670;

struct Obj_82292670 {
    Vt_82292670 *vt;
};

extern void fn_82292518(Owner_82292670 *);
extern Obj_82292670 *fn_82864E90(void);
extern void fn_822924C0(Item_82292670 *, Item_82292670 *);
extern void fn_822933E8(Item_82292670 *, Item_82292670 *);
extern void fn_8265CA20(void *);
extern void fn_82864898(Owner_82292670 *);

static __forceinline Item_82292670 *Move(Item_82292670 *src, Item_82292670 *end, Item_82292670 *dst)
{
    for (; src != end; ++src, ++dst)
        fn_822924C0(dst, src);
    return dst;
}

static __forceinline void Erase(Vector_82292670 *v, Item_82292670 *first, Item_82292670 *last)
{
    Item_82292670 *src = last, *dst = first;
    if (first != last) {
        dst = Move(src, v->last, dst);
        fn_822933E8(dst, v->last);
        v->last = dst;
    }
}

void fn_82292670(Owner_82292670 *self)
{
    Vector_82292670 *v;
    Obj_82292670 *obj;
    fn_82292518(self);
    v = &self->c;
    if (v->first != v->last) {
        obj = fn_82864E90();
        obj = ((Obj_82292670 * (*)(void)) obj->vt->get)();
        obj->vt->submit(obj, v);
    }
    Erase(v, v->first, v->last);
    if (v->first) {
        fn_822933E8(v->first, v->last);
        fn_8265CA20(v->first);
    }
    v->first = 0;
    v->last = 0;
    v->cap = 0;
    if (self->b.first)
        fn_8265CA20(self->b.first);
    {
        Vector_82292670 *b = &self->b;
        b->first = 0;
        b->last = 0;
        b->cap = 0;
    }
    if (self->a.first)
        fn_8265CA20(self->a.first);
    self->a.first = 0;
    self->a.last = 0;
    self->a.cap = 0;
    fn_82864898(self);
}
