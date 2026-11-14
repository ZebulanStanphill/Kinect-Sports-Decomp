typedef struct Obj_8286D8D0 Obj_8286D8D0;
typedef struct ObjVt_8286D8D0 {
    void *slots[12];
    void (*destroy)(Obj_8286D8D0 *self, int flags);
} ObjVt_8286D8D0;
struct Obj_8286D8D0 { ObjVt_8286D8D0 *vt; };

typedef struct Vec_8286D8D0 {
    Obj_8286D8D0 **begin;
    Obj_8286D8D0 **end;
} Vec_8286D8D0;

typedef struct List_8286D8D0 {
    int pad0;
    Vec_8286D8D0 items;
} List_8286D8D0;

extern void *memmove(void *, const void *, unsigned int);

static __forceinline Obj_8286D8D0 **Find(Obj_8286D8D0 **first, Obj_8286D8D0 **last, Obj_8286D8D0 *const *val)
{
    for (; first != last; first++) {
        if (*first == *val)
            break;
    }
    return first;
}

static __forceinline Obj_8286D8D0 **Move(Obj_8286D8D0 **first, Obj_8286D8D0 **last, Obj_8286D8D0 **dest)
{
    unsigned int count = last - first;
    memmove(dest, first, count * sizeof(*first));
    return dest + count;
}

static __forceinline void Erase(Vec_8286D8D0 *v, Obj_8286D8D0 **where)
{
    Move(where + 1, v->end, where);
    v->end--;
}

int fn_8286D8D0(List_8286D8D0 *self, Obj_8286D8D0 **item)
{
    Obj_8286D8D0 **p = Find(self->items.begin, self->items.end, item);
    if (p != self->items.end) {
        Erase(&self->items, p);
        if (*item != 0)
            (*item)->vt->destroy(*item, 1);
        *item = 0;
        return 0x20370000;
    }
    return 0xA0370000;
}
