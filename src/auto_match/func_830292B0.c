typedef struct Pair_830292B0 {
    unsigned int key;
    void *value;
} Pair_830292B0;

typedef struct Map_830292B0 {
    Pair_830292B0 *begin;
    Pair_830292B0 *end;
} Map_830292B0;

typedef struct Owner_830292B0 {
    char pad0[0x88];
    Map_830292B0 map;
} Owner_830292B0;

typedef struct V20_830292B0 { int v[5]; } V20_830292B0;

typedef struct Item_830292B0 {
    void *vtable;
    char pad4[0x24];
    short x;
    short y;
    float time;
} Item_830292B0;

extern char lbl_8217C61C[];
extern void *lbl_831BC768;
extern Item_830292B0 **fn_83029968(Map_830292B0 *map, unsigned int key);
extern void fn_82FAF408(Map_830292B0 *map, unsigned int key);
extern void *fn_82FA5060(void *heap, unsigned int size);
extern void fn_83008600(Item_830292B0 *self);
extern void fn_83008748(Item_830292B0 *self, int a, V20_830292B0 s, unsigned __int64 q);

static __forceinline void **find_830292B0(Map_830292B0 *map, unsigned int key)
{
    Pair_830292B0 *it;
    Pair_830292B0 *end = map->end;
    int found;

    for (it = map->begin; it != end; it++) {
        if (it->key == key) {
            break;
        }
    }
    found = it != end;
    return found ? &it->value : 0;
}

int fn_830292B0(Owner_830292B0 *self, unsigned int key, int a, V20_830292B0 s, unsigned __int64 q,
                short x, short y)
{
    Item_830292B0 **slot;
    Item_830292B0 *item;
    Item_830292B0 *mem;

    if (find_830292B0(&self->map, key) != 0) {
        return 1;
    }
    slot = fn_83029968(&self->map, key);
    if (slot != 0) {
        mem = (Item_830292B0 *)fn_82FA5060(lbl_831BC768, 0x30);
        if (mem != 0) {
            fn_83008600(mem);
            mem->vtable = lbl_8217C61C;
            item = mem;
        } else {
            item = 0;
        }
        *slot = item;
        if (item != 0) {
            fn_83008748(item, a, s, q);
            (*slot)->x = x;
            (*slot)->y = y;
            (*slot)->time = 0.0f;
        } else {
            fn_82FAF408(&self->map, key);
        }
        if (*slot != 0) {
            return 1;
        }
    }
    return 2;
}
