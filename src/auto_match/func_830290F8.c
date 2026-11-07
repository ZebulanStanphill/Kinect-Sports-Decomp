typedef struct Pair_830290F8 {
    unsigned int key;
    void *value;
} Pair_830290F8;

typedef struct Map_830290F8 {
    Pair_830290F8 *begin;
    Pair_830290F8 *end;
} Map_830290F8;

typedef struct Owner_830290F8 {
    char pad0[0x88];
    Map_830290F8 map;
} Owner_830290F8;

typedef struct Arg_830290F8 {
    int a;
    int b;
} Arg_830290F8;

typedef struct Item_830290F8 {
    void *vtable;
    char pad4[0x24];
    short x;
    short y;
    float time;
} Item_830290F8;

extern char lbl_8217C61C[];
extern void *lbl_831BC768;
extern Item_830290F8 **fn_83029968(Map_830290F8 *map, unsigned int key);
extern void fn_82FAF408(Map_830290F8 *map, unsigned int key);
extern void *fn_82FA5060(void *heap, unsigned int size);
extern void fn_83008600(Item_830290F8 *self);
extern void fn_830086A0(Item_830290F8 *self, unsigned int key, int b, int a, Arg_830290F8 arg);

static __forceinline void **find_830290F8(Map_830290F8 *map, unsigned int key)
{
    Pair_830290F8 *it;
    Pair_830290F8 *end = map->end;
    int found;

    for (it = map->begin; it != end; it++) {
        if (it->key == key) {
            break;
        }
    }
    found = it != end;
    return found ? &it->value : 0;
}

int fn_830290F8(Owner_830290F8 *self, unsigned int key, int a, int b, Arg_830290F8 *arg, short x, short y)
{
    Item_830290F8 **slot;
    Item_830290F8 *item;
    Item_830290F8 *mem;

    if (find_830290F8(&self->map, key) != 0) {
        return 1;
    }
    slot = fn_83029968(&self->map, key);
    if (slot != 0) {
        mem = (Item_830290F8 *)fn_82FA5060(lbl_831BC768, 0x30);
        if (mem != 0) {
            fn_83008600(mem);
            mem->vtable = lbl_8217C61C;
            item = mem;
        } else {
            item = 0;
        }
        *slot = item;
        if (item != 0) {
            fn_830086A0(item, key, b, a, *arg);
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
