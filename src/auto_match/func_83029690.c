typedef struct Item_83029690 Item_83029690;
typedef struct ItemVtbl_83029690 {
    void (*dtor)(Item_83029690 *self, int flags);
} ItemVtbl_83029690;
struct Item_83029690 {
    ItemVtbl_83029690 *vt;
};

typedef struct Pair_83029690 {
    unsigned int key;
    Item_83029690 *value;
} Pair_83029690;

typedef struct Map_83029690 {
    Pair_83029690 *begin;
    Pair_83029690 *end;
} Map_83029690;

typedef struct Obj_83029690 {
    char pad[0x88];
    Map_83029690 map;
} Obj_83029690;

extern void *lbl_831BC768;
extern void fn_82FA5190(void *heap, void *p);
extern void fn_82FAF408(Map_83029690 *m, unsigned int key);

static __forceinline Item_83029690 **Find_83029690(Map_83029690 *m, unsigned int key)
{
    Pair_83029690 *p;
    unsigned char found;

    for (p = m->begin; p != m->end; p++) {
        if (p->key == key) {
            break;
        }
    }
    found = p != m->end;
    return found ? &p->value : 0;
}

void fn_83029690(Obj_83029690 *o, unsigned int key)
{
    Item_83029690 **pv = Find_83029690(&o->map, key);
    Item_83029690 *item;
    void *heap;

    if (pv != 0) {
        item = *pv;
        heap = lbl_831BC768;
        if (item != 0) {
            item->vt->dtor(item, 0);
            fn_82FA5190(heap, item);
        }
        fn_82FAF408(&o->map, key);
    }
}
