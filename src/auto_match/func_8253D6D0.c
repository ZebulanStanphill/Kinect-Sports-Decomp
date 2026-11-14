typedef struct Item_8253D6D0 {
    int v[3];
} Item_8253D6D0;

typedef struct ItemArray_8253D6D0 {
    Item_8253D6D0 *data;
    int count;
} ItemArray_8253D6D0;

typedef struct Buffer_8253D6D0 {
    char pad0[0x1c];
    ItemArray_8253D6D0 items;
} Buffer_8253D6D0;

typedef struct Range_8253D6D0 {
    Item_8253D6D0 *begin;
    Item_8253D6D0 *end;
} Range_8253D6D0;

typedef struct Event_8253D6D0 {
    int type;
    int size;
    Range_8253D6D0 range;
} Event_8253D6D0;

typedef struct Listener_8253D6D0 Listener_8253D6D0;
typedef struct ListenerVtbl_8253D6D0 {
    void *pad[3];
    void (*handle)(Listener_8253D6D0 *self, Event_8253D6D0 *event);
} ListenerVtbl_8253D6D0;
struct Listener_8253D6D0 {
    ListenerVtbl_8253D6D0 *vt;
};

typedef struct Slot_8253D6D0 {
    Listener_8253D6D0 *listener;
    int pad;
} Slot_8253D6D0;

typedef struct Context_8253D6D0 {
    char pad0[0x310];
    Slot_8253D6D0 *begin;
    Slot_8253D6D0 *end;
} Context_8253D6D0;

typedef struct Self_8253D6D0 {
    char pad0[0x18];
    Buffer_8253D6D0 *buffer;
} Self_8253D6D0;

extern void XMemSet(void *dst, int value, unsigned int size);

static __forceinline void Clear(ItemArray_8253D6D0 *items)
{
    int i;
    for (i = 0; i < items->count; i++) {
    }
    items->count = 0;
}

static __forceinline void InitEvent(Event_8253D6D0 *event, ItemArray_8253D6D0 *items)
{
    event->type = 0x1d;
    event->size = 0x10;
    event->range.begin = items->data;
    event->range.end = items->data + items->count;
}

void fn_8253D6D0(Self_8253D6D0 *self, Context_8253D6D0 *ctx)
{
    Buffer_8253D6D0 *buffer = self->buffer;
    Slot_8253D6D0 *it;
    Slot_8253D6D0 *end;
    Event_8253D6D0 event;

    if (buffer->items.count > 0) {
        it = ctx->begin;
        end = ctx->end;
        XMemSet(&event.range, 0, 8);
        InitEvent(&event, &buffer->items);
        for (; it < end; it++)
            it->listener->vt->handle(it->listener, &event);
        Clear(&buffer->items);
    }
}
