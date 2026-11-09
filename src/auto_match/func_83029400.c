typedef struct Pair_83029400 {
    unsigned int key;
    void *value;
} Pair_83029400;

typedef struct Map_83029400 {
    Pair_83029400 *begin;
    Pair_83029400 *end;
} Map_83029400;

typedef struct Owner_83029400 {
    char pad0[0x88];
    Map_83029400 map;
} Owner_83029400;

typedef struct Arg_83029400 {
    int a;
    int b;
} Arg_83029400;

typedef struct Item_83029400 {
    void *vtable;
    char pad4[0x24];
    short x;
    short y;
    float time;
} Item_83029400;

extern char lbl_8217C61C[];
extern void *lbl_831BC768;
extern Item_83029400 **fn_83029968(Map_83029400 *map, unsigned int key);
extern void fn_82FAF408(Map_83029400 *map, unsigned int key);
extern void *fn_82FA5060(void *heap, unsigned int size);
extern void fn_83008600(Item_83029400 *self);
extern void fn_830087C8(Item_83029400 *self, unsigned int key, int a, int b, Arg_83029400 *arg);

static __forceinline void **find_83029400(Map_83029400 *map, unsigned int key)
{
    Pair_83029400 *it;
    Pair_83029400 *end = map->end;
    int found;

    for (it = map->begin; it != end; it++) {
        if (it->key == key) {
            break;
        }
    }
    found = it != end;
    return found ? &it->value : 0;
}

int fn_83029400(Owner_83029400 *self, unsigned int key, int a, int b, Arg_83029400 *arg, short x, short y)
{
    Item_83029400 **slot;
    Item_83029400 *item;
    Item_83029400 *mem;

    if (find_83029400(&self->map, key) != 0) {
        return 1;
    }
    slot = fn_83029968(&self->map, key);
    if (slot != 0) {
        mem = (Item_83029400 *)fn_82FA5060(lbl_831BC768, 0x30);
        if (mem != 0) {
            fn_83008600(mem);
            mem->vtable = lbl_8217C61C;
            item = mem;
        } else {
            item = 0;
        }
        *slot = item;
        if (item != 0) {
            fn_830087C8(item, key, a, b, arg);
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

