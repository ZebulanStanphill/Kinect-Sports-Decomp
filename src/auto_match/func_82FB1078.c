typedef struct Pair_82FB1078 {
    unsigned int key;
    void *value;
} Pair_82FB1078;

typedef struct Map_82FB1078 {
    Pair_82FB1078 *begin;
    Pair_82FB1078 *end;
} Map_82FB1078;

typedef struct {
    char pad0[0x88];
    Map_82FB1078 map;
    char pad90[0x14];
    int value;
} Owner_82FB1078;

typedef struct V20_82FB1078 { int v[5]; } V20_82FB1078;

typedef struct {
    void *vtable;
    char pad4[0x24];
    int value;
} Item_82FB1078;

extern char lbl_8216D2CC[];
extern void *lbl_831BC768;
extern Item_82FB1078 **fn_83029968(Map_82FB1078 *map, unsigned int key);
extern void fn_82FAF408(Map_82FB1078 *map, unsigned int key);
extern void *fn_82FA5060(void *heap, unsigned int size);
extern void fn_83008600(Item_82FB1078 *self);
extern void fn_83008748(Item_82FB1078 *self, int a, V20_82FB1078 s, unsigned __int64 q);

static __forceinline void **find_82FB1078(Map_82FB1078 *map, unsigned int key)
{
    Pair_82FB1078 *it;
    Pair_82FB1078 *end = map->end;
    int found;

    for (it = map->begin; it != end; it++) {
        if (it->key == key) {
            break;
        }
    }
    found = it != end;
    return found ? &it->value : 0;
}

int fn_82FB1078(Owner_82FB1078 *self, unsigned int key, int a, V20_82FB1078 s, unsigned __int64 q)
{
    Item_82FB1078 **slot;
    Item_82FB1078 *item;
    Item_82FB1078 *mem;

    if (find_82FB1078(&self->map, key) != 0) {
        return 1;
    }
    slot = fn_83029968(&self->map, key);
    if (slot != 0) {
        mem = (Item_82FB1078 *)fn_82FA5060(lbl_831BC768, 0x2c);
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
            fn_83008748(item, a, s, q);
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
