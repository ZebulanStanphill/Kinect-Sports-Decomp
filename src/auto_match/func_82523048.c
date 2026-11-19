typedef struct Event_82523048 {
    int type;     /* 0x0 */
    int size;     /* 0x4 */
    void *object; /* 0x8 */
} Event_82523048;

typedef struct Array_82523048 {
    char *data; /* 0x0 */
    char *end;  /* 0x4 */
    char pad8[0xc];
} Array_82523048;

typedef struct Handle_82523048 {
    struct Handle_82523048 *prev; /* 0x0 */
    struct Handle_82523048 *next; /* 0x4 */
    unsigned int id;              /* 0x8 */
    Array_82523048 entries;       /* 0xc */
} Handle_82523048;

typedef struct Listener_82523048 Listener_82523048;

typedef struct ListenerVtbl_82523048 {
    void *slots[3];
    void (*notify)(Listener_82523048 *self, Event_82523048 *event); /* 0xc */
} ListenerVtbl_82523048;

struct Listener_82523048 {
    ListenerVtbl_82523048 *vt; /* 0x0 */
    char pad4[0xb25 - 4];
    unsigned char state; /* 0xb25 */
};

typedef struct ListenerEntry_82523048 {
    Listener_82523048 *listener;
    int data;
} ListenerEntry_82523048;

typedef struct Listeners_82523048 {
    ListenerEntry_82523048 *begin; /* 0x0 */
    ListenerEntry_82523048 *end;   /* 0x4 */
} Listeners_82523048;

typedef struct Owner_82523048 {
    unsigned int id; /* 0x0 */
    char pad4[0x310 - 4];
    Listeners_82523048 listeners; /* 0x310 */
} Owner_82523048;

extern Handle_82523048 lbl_83266100;
extern void *fn_82522DF8(unsigned int size);
extern void fn_8251E370(Array_82523048 *array, int stride, int flags);
extern void *XMemSet(void *dst, int value, unsigned int size);
extern void fn_82558B08(void);
extern void fn_82523148(Handle_82523048 *handle);

static __forceinline int IsEmpty_82523048(Array_82523048 *array)
{
    return array->end == array->data;
}

void fn_82523048(Owner_82523048 **owner)
{
    Handle_82523048 *handle;
    Handle_82523048 *node;
    Handle_82523048 *next;
    Event_82523048 event;
    ListenerEntry_82523048 *entry;
    ListenerEntry_82523048 *end;
    Listeners_82523048 *listeners;

    handle = (Handle_82523048 *)fn_82522DF8(0x20);
    handle->id = (*owner)->id;
    fn_8251E370(&handle->entries, 0x20, 0);
    node = &lbl_83266100;
    while ((int)node->prev != 0) {
        node = node->prev;
    }
    next = node->next;
    node->next = handle;
    handle->prev = node;
    handle->next = next;
    if (next != 0) {
        next->prev = handle;
    }
    XMemSet(&event.object, 0, sizeof(event.object));
    listeners = &(*owner)->listeners;
    event.object = handle;
    event.type = 0x35;
    event.size = 0xc;
    for (entry = listeners->begin, end = listeners->end; entry < end; entry++) {
        fn_82558B08();
        if (entry->listener->state == 3) {
            entry->listener->vt->notify(entry->listener, &event);
        }
    }
    if (IsEmpty_82523048(&handle->entries)) {
        fn_82523148(handle);
    }
}
