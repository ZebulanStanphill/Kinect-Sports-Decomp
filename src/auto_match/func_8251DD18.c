typedef struct Link_8251DD18 {
    struct Link_8251DD18 *prev;
    struct Link_8251DD18 *next;
} Link_8251DD18;

typedef struct Object_8251DD18 Object_8251DD18;

typedef struct Event_8251DD18 {
    int type;
    int size;
    Object_8251DD18 *object;
    void *manager;
} Event_8251DD18;

struct Object_8251DD18 {
    struct {
        void *slots[3];
        void (*notify)(Object_8251DD18 *, Event_8251DD18 *);
    } *vt;

    char pad4[4];
    int state;
    char padc[4];
    void *parent;
    char pad14[0x1c];
    Link_8251DD18 pending;
    char pad38[0x8b8 - 0x38];
    unsigned short local;
    char pad8ba[0xb18 - 0x8ba];
    unsigned int flags;
    char padb1c[9];
    unsigned char phase;
};

typedef struct Entry_8251DD18 {
    Object_8251DD18 *object;
    int state;
} Entry_8251DD18;

typedef struct Manager_8251DD18 {
    char pad0[0x78];
    char listeners[0x40];
    void *dispatch;
    char padbc[0x254];
    Entry_8251DD18 *begin;
    Entry_8251DD18 *end;
} Manager_8251DD18;

typedef struct Queue_8251DD18 {
    Manager_8251DD18 *manager;
    char first[0x8c];
    char second[0x50];
    Link_8251DD18 *pending;
} Queue_8251DD18;

extern void *XMemSet(void *dest, int value, unsigned int count);
extern int fn_825597C0(void);
extern void fn_82558B08(void);
extern Entry_8251DD18 *fn_8251E4D0(void *pool);
extern void fn_8257CB40(void *listeners, Event_8251DD18 *event, int flags);
extern void fn_8257E0B8(void *dispatch, Event_8251DD18 *event);

void fn_8251DD18(Queue_8251DD18 *self)
{
    struct {
        int type;
        int size;
        Manager_8251DD18 *manager;
    } before;

    Event_8251DD18 after;
    Manager_8251DD18 *manager;
    Link_8251DD18 *link;
    int debugging;

    if ((int)self->pending == 0)
        return;
    manager = self->manager;
    XMemSet(&after.object, 0, 8);
    after.manager = manager;
    after.type = 0x42;
    after.size = 0x10;
    XMemSet(&before.manager, 0, 4);
    before.manager = manager;
    before.type = 0x33;
    before.size = 0xc;
    debugging = fn_825597C0();

    while ((link = self->pending) != 0) {
        Object_8251DD18 *object = (Object_8251DD18 *)((char *)link - 0x30);
        Entry_8251DD18 *entry;
        if (debugging)
            fn_82558B08();
        object->phase = 1;
        object->vt->notify(object, (Event_8251DD18 *)&before);
        object->phase = 2;
        if (link->prev)
            link->prev->next = link->next;
        if (link->next)
            link->next->prev = link->prev;
        link->prev = 0;
        link->next = 0;

        entry = fn_8251E4D0(self->first);
        entry->object = object;
        entry->state = object->state;
        entry = fn_8251E4D0(self->second);
        entry->object = object;
        after.object = object;
        object->vt->notify(object, &after);
        if (object->local != 0)
            goto local;
        if (object->flags & 8) {
        local:
            if (object->parent)
                goto notify;
            goto dispatch;
        } else {
            Entry_8251DD18 *iterator = manager->begin;
            Entry_8251DD18 *end = manager->end;
            for (; iterator < end; ++iterator) {
                Object_8251DD18 *other = iterator->object;
                if (other != object)
                    other->vt->notify(other, &after);
            }
        }
    notify:
        fn_8257CB40(manager->listeners, &after, 1);
    dispatch:
        if (object->flags & 1)
            fn_8257E0B8(manager->dispatch, &after);
    }
}
