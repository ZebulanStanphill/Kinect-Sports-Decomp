typedef struct Pair_82FB0EE0 {
    unsigned int key;
    void *value;
} Pair_82FB0EE0;

typedef struct Map_82FB0EE0 {
    Pair_82FB0EE0 *begin;
    Pair_82FB0EE0 *end;
} Map_82FB0EE0;

typedef struct {
    char pad0[0x88];
    Map_82FB0EE0 map;
    char pad90[0x14];
    int value;
} Owner_82FB0EE0;

typedef struct {
    int a;
    int b;
} Arg_82FB0EE0;

typedef struct {
    void *vtable;
    char pad4[0x24];
    int value;
} Item_82FB0EE0;

extern char lbl_8216D2CC[];
extern void *lbl_831BC768;
extern Item_82FB0EE0 **fn_83029968(Map_82FB0EE0 *map, unsigned int key);
extern void fn_82FAF408(Map_82FB0EE0 *map, unsigned int key);
extern void *fn_82FA5060(void *heap, unsigned int size);
extern void fn_83008600(Item_82FB0EE0 *self);
extern void fn_830086A0(Item_82FB0EE0 *self, unsigned int key, int b, int a, Arg_82FB0EE0 arg);

static __forceinline void **find_82FB0EE0(Map_82FB0EE0 *map, unsigned int key)
{
    Pair_82FB0EE0 *it;
    Pair_82FB0EE0 *end = map->end;
    int found;

    for (it = map->begin; it != end; it++) {
        if (it->key == key) {
            break;
        }
    }
    found = it != end;
    return found ? &it->value : 0;
}

int fn_82FB0EE0(Owner_82FB0EE0 *self, unsigned int key, int a, int b, Arg_82FB0EE0 *arg)
{
    Item_82FB0EE0 **slot;
    Item_82FB0EE0 *item;
    Item_82FB0EE0 *mem;

    if (find_82FB0EE0(&self->map, key) != 0) {
        return 1;
    }
    slot = fn_83029968(&self->map, key);
    if (slot != 0) {
        mem = (Item_82FB0EE0 *)fn_82FA5060(lbl_831BC768, 0x2c);
        if (mem != 0) {
            fn_83008600(mem);
            mem->value = 0;
            mem->vtable = lbl_8216D2CC;
            item = mem;
        } else {
            item = 0;
        }
        *slot = item;
        if (item != 0) {
            fn_830086A0(item, key, b, a, *arg);
            (*slot)->value = self->value;
        } else {
            fn_82FAF408(&self->map, key);
        }
        if (*slot != 0) {
            return 1;
        }
    }
    return 2;
}
