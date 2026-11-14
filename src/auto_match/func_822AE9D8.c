extern int fn_82526C70(char *buf, int size, const char *fmt, ...);
extern const char *fn_822ABF20(void *item);
extern void fn_822ABAF8(void *item, const char *state);
extern char lbl_821AC494[];

typedef struct Item_822AE9D8 {
    char pad0[0x18];
    int current;
    char pad1C[0x28 - 0x1c];
    char name[0x20];
} Item_822AE9D8;

typedef struct Slot_822AE9D8 {
    Item_822AE9D8 **items;
    int pad4[3];
    int index;
} Slot_822AE9D8;

typedef struct SlotList_822AE9D8 {
    Slot_822AE9D8 **begin;
    Slot_822AE9D8 **end;
} SlotList_822AE9D8;

void fn_822AE9D8(SlotList_822AE9D8 *self)
{
    Slot_822AE9D8 **it;
    for (it = self->begin; it < self->end; it++) {
        Item_822AE9D8 *item = (*it)->items[(*it)->index];
        fn_82526C70(item->name, 0x20, lbl_821AC494);
        if (item->current != 0)
            fn_822ABAF8(item, fn_822ABF20(item));
        else
            fn_822ABAF8(item, "start");
    }
}
