typedef struct Item_8253D4E8 Item_8253D4E8;

typedef struct Receiver_8253D4E8 {
    void (**vtable)();
} Receiver_8253D4E8;

struct Item_8253D4E8 {
    char pad00[12];
    Receiver_8253D4E8 *receiver; /* 0x0c */
};

typedef struct List_8253D4E8 {
    Item_8253D4E8 **begin;
    Item_8253D4E8 **end;
} List_8253D4E8;

typedef struct Owner_8253D4E8 {
    char pad00[0x64];
    List_8253D4E8 items; /* 0x64 */
} Owner_8253D4E8;

typedef struct Context_8253D4E8 {
    char pad00[0x1f8];
    void *manager; /* 0x1f8 */
} Context_8253D4E8;

typedef struct Event_8253D4E8 {
    int type;
    int size;
    Item_8253D4E8 *item;
} Event_8253D4E8;

extern void fn_8251E530(List_8253D4E8 *list, Item_8253D4E8 **position);
extern void fn_82D81078(void *manager, Item_8253D4E8 *item, int enabled);
extern void *XMemSet(void *, int, unsigned int);

void fn_8253D4E8(Owner_8253D4E8 *self, Context_8253D4E8 *context, Item_8253D4E8 *item, int flag)
{
    Item_8253D4E8 **end = self->items.end;
    Item_8253D4E8 **position = self->items.begin;
    while (position < end) {
        if (*position == item) {
            fn_8251E530(&self->items, position);
            return;
        }
        ++position;
    }
    {
        Event_8253D4E8 event;
        Receiver_8253D4E8 *receiver;
        fn_82D81078(context->manager, item, flag == 0);
        XMemSet(&event.item, 0, 4);
        event.item = item;
        event.type = 0x34;
        event.size = 0xc;
        receiver = item->receiver;
        if (receiver != 0) {
            receiver->vtable[3](receiver, &event);
        }
    }
}
