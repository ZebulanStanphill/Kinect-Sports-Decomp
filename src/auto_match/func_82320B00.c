typedef struct Visitor_82320B00 Visitor_82320B00;

typedef struct Vtable_82320B00 {
    void *unused;                                      /* 0x0 */
    void (*visit)(Visitor_82320B00 *, void *);         /* 0x4 */
    void *unused2;                                     /* 0x8 */
    void (*destroy)(Visitor_82320B00 *, unsigned int); /* 0xc */
} Vtable_82320B00;

struct Visitor_82320B00 {
    Vtable_82320B00 *vtable; /* 0x0 */
    void *owner;             /* 0x4 */
    char unused[8];          /* 0x8 */
};

typedef struct Callback_82320B00 {
    Visitor_82320B00 storage;  /* 0x0 */
    Visitor_82320B00 *visitor; /* 0x10 */
} Callback_82320B00;

typedef struct Collection_82320B00 {
    char pad[0x130];       /* 0x0 */
    void **items;          /* 0x130 */
    unsigned int capacity; /* 0x134 */
    unsigned int count;    /* 0x138 */
} Collection_82320B00;

typedef struct State_82320B00 {
    char pad[0x1d0];                 /* 0x0 */
    int enabled;                     /* 0x1d0 */
    char pad1[0x6ec];                /* 0x1d4 */
    Collection_82320B00 *collection; /* 0x8c0 */
} State_82320B00;

typedef struct Object_82320B00 {
    char pad[0x20];        /* 0x0 */
    State_82320B00 *state; /* 0x20 */
    int unused;            /* 0x24 */
    int mode;              /* 0x28 */
    int enabled;           /* 0x2c */
} Object_82320B00;

extern Vtable_82320B00 lbl_821AFAF0;
extern __declspec(noreturn) void fn_82F63108(void);

static __forceinline void VisitItems(Callback_82320B00 *callback, void **items, unsigned int count)
{
    unsigned int index;
    for (index = 0; index < count; index++) {
        if (!callback->visitor) {
            fn_82F63108();
        }
        callback->visitor->vtable->visit(callback->visitor, items[index]);
    }
}

void fn_82320B00(Object_82320B00 *self, int enabled)
{
    self->enabled = enabled != 0 || self->state->enabled != 0;
    if (self->mode != 2) {
        Callback_82320B00 callback;
        Collection_82320B00 *collection;
        unsigned int count;
        callback.storage.vtable = &lbl_821AFAF0;
        callback.storage.owner = self;
        callback.visitor = &callback.storage;
        collection = self->state->collection;
        count = collection->count;
        if (count != 0) {
            VisitItems(&callback, collection->items, count);
            if (!callback.visitor) {
                return;
            }
        }
        callback.visitor->vtable->destroy(callback.visitor, callback.visitor != &callback.storage);
    }
}
