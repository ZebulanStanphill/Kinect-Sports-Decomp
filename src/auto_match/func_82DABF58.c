typedef struct Callback_82DABF58 Callback_82DABF58;
typedef struct Owner_82DABF58 Owner_82DABF58;

typedef struct Listener_82DABF58 {
    char unknown000[0x204];
    unsigned short count; /* 0x204 */
} Listener_82DABF58;

typedef struct Event_82DABF58 {
    unsigned short id;           /* 0x00 */
    void *entry;                 /* 0x04 */
    Listener_82DABF58 *first;    /* 0x08 */
    Listener_82DABF58 *second;   /* 0x0c */
    void *current;               /* 0x10 */
    Owner_82DABF58 *owner;       /* 0x14 */
    Callback_82DABF58 *callback; /* 0x18 */
    unsigned int reserved;       /* 0x1c */
} Event_82DABF58;

typedef struct Table_82DABF58 {
    char unknown00[6];
    unsigned short headerCount; /* 0x06 */
    char unknown08[2];
    unsigned char entrySize; /* 0x0a */
} Table_82DABF58;

typedef struct Registry_82DABF58 {
    char unknown00[0xc];
    unsigned char *indexOfId; /* 0x0c */
    char unknown10[0x18];
    Table_82DABF58 *table; /* 0x28 */
    char unknown2C[4];
} Registry_82DABF58;

struct Owner_82DABF58 {
    char unknown00[0xc];
    void *dispatcher; /* 0x0c */
    char unknown10[4];
    Registry_82DABF58 registry; /* 0x14 */
    int context;                /* 0x44 */
    char unknown48[0x10];
    Listener_82DABF58 *first;  /* 0x58 */
    Listener_82DABF58 *second; /* 0x5c */
};

typedef struct CallbackVtable_82DABF58 {
    void *slots[4];
    void (*remove)(Callback_82DABF58 *self, void *context); /* 0x10 */
} CallbackVtable_82DABF58;

struct Callback_82DABF58 {
    CallbackVtable_82DABF58 *vtable;
};

extern void fn_82DAF0B0(void *dispatcher, Event_82DABF58 *event);
extern void fn_82DAD368(Listener_82DABF58 *listener, Event_82DABF58 *event);
extern int fn_82DABDE8(Registry_82DABF58 *registry, Callback_82DABF58 *callback, unsigned short id);

void fn_82DABF58(Owner_82DABF58 *self, unsigned short id, Callback_82DABF58 *callback)
{
    Listener_82DABF58 *first = self->first;
    Listener_82DABF58 *second = self->second;
    Registry_82DABF58 *registry = &self->registry;
    int index = registry->indexOfId[id];
    Event_82DABF58 event;
    void *entry;

    if (index == 0xff) {
        entry = 0;
    } else {
        Table_82DABF58 *table = registry->table;
        entry = (char *)table + 0x30 + table->headerCount * 0x20 + table->entrySize * (short)index;
    }
    event.id = id;
    event.entry = entry;
    event.first = first;
    event.second = second;
    event.owner = self;
    event.callback = callback;
    fn_82DAF0B0(self->dispatcher, &event);
    if (first->count != 0) {
        fn_82DAD368(first, &event);
    }
    if (second->count != 0) {
        fn_82DAD368(second, &event);
    }
    if (fn_82DABDE8(registry, callback, id) == 0) {
        callback->vtable->remove(callback, &self->context);
    }
}
