/* Searches every item's current element map for the element whose info has the given id.
   Exact only when compiled together with fn_822ABA88 (link-time code generation): r4-r8 stay live
   across the call. */
typedef struct ElemMap_8236C288 {
    void *allocator;   /* 0x00 */
    void *head;        /* 0x04 */
    unsigned int size; /* 0x08 */
} ElemMap_8236C288;

typedef struct Item_8236C288 {
    ElemMap_8236C288 **maps; /* 0x00 */
    int unknown04[3];
    int current; /* 0x10 */
} Item_8236C288;

typedef struct ItemVector_8236C288 {
    Item_8236C288 **begin; /* 0x00 */
    Item_8236C288 **end;   /* 0x04 */
} ItemVector_8236C288;

typedef struct Obj_8236C288 {
    int unknown00;
    int unknown04;
    ItemVector_8236C288 *items; /* 0x08 */
} Obj_8236C288;

typedef struct Info_8236C288 {
    char padding00[0x18];
    unsigned int id; /* 0x18 */
} Info_8236C288;

typedef struct Elem_8236C288 {
    char padding000[0x110];
    Info_8236C288 *info; /* 0x110 */
} Elem_8236C288;

extern Elem_8236C288 *fn_822ABA88(ElemMap_8236C288 *map, unsigned int key);

Elem_8236C288 *fn_8236C288(Obj_8236C288 *self, unsigned int id)
{
    if (self->items != 0) {
        ItemVector_8236C288 *items = self->items;
        int itemCount = items->end - items->begin;
        int i;

        for (i = 0; i < itemCount; i++) {
            Item_8236C288 *item = self->items->begin[i];
            ElemMap_8236C288 *map = item->maps[item->current];
            unsigned int key;

            for (key = 0; key < map->size; key++) {
                Elem_8236C288 *elem = fn_822ABA88(map, key);

                if (elem->info->id == id) {
                    return elem;
                }
            }
        }
    }
    return 0;
}
