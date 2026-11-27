struct Resource_83011EE0;

typedef struct ResourceVtbl_83011EE0 {
    void *slots00[2];
    void (*Release)(struct Resource_83011EE0 *self); /* 0x08 */
    void *slots0c[7];
    void (*Stop)(struct Resource_83011EE0 *self, void *params); /* 0x28 */
} ResourceVtbl_83011EE0;

typedef struct Resource_83011EE0 {
    ResourceVtbl_83011EE0 *vt;
    char pad04[0x10];
    unsigned int type; /* 0x14 */
} Resource_83011EE0;

struct Entry_83011EE0;

typedef struct EntryVtbl_83011EE0 {
    void (*Destroy)(struct Entry_83011EE0 *self, int flags); /* 0x00 */
} EntryVtbl_83011EE0;

typedef struct Entry_83011EE0 {
    EntryVtbl_83011EE0 *vt;
    int pad04;
    Resource_83011EE0 *resource; /* 0x08 */
    int time;                    /* 0x0c */
    int pad10;
    int startTime; /* 0x14 */
    char pad18[0x10];
    int key; /* 0x28 */
    int pad2c;
    unsigned int skipCount; /* 0x30 */
    unsigned int owner;     /* 0x34 */
} Entry_83011EE0;

typedef struct Node_83011EE0 {
    struct Node_83011EE0 *next; /* 0x0 */
    int group;                  /* 0x4 */
    Entry_83011EE0 *entry;      /* 0x8 */
} Node_83011EE0;

typedef struct Iterator_83011EE0 {
    Node_83011EE0 *node;
    Node_83011EE0 *previous;
} Iterator_83011EE0;

typedef struct List_83011EE0 {
    Node_83011EE0 *first; /* 0x00 */
    Node_83011EE0 *last;  /* 0x04 */
    Node_83011EE0 *free;  /* 0x08 */
    int padc[2];
    int count; /* 0x14 */
} List_83011EE0;

typedef struct Manager_83011EE0 {
    char pad00[0x50];
    char pending[0x20];  /* 0x50 */
    List_83011EE0 items; /* 0x70 */
    char pad88[8];
    int now; /* 0x90 */
} Manager_83011EE0;

extern void *lbl_831BC768;
extern int lbl_832642E4;
extern unsigned int lbl_83264304;
extern unsigned char fn_83010658(Manager_83011EE0 *self, Resource_83011EE0 *resource, void *target);
extern int fn_83019E38(void *map, int key, Entry_83011EE0 **item);
extern void fn_83032FE8(void *resource);
extern void fn_82FF5198(unsigned int registry, int key);
extern void fn_82FA5190(void *heap, void *p);
extern void fn_830118C0(int next, unsigned int owner, void *target, unsigned char force);

static __forceinline Iterator_83011EE0 List_Erase(List_83011EE0 *list, Iterator_83011EE0 it)
{
    Iterator_83011EE0 result;

    result.node = it.node->next;
    result.previous = it.previous;
    if (it.node == list->first) {
        list->first = result.node;
    } else {
        it.previous->next = result.node;
    }
    if (it.node == list->last) {
        list->last = it.previous;
    }
    it.node->next = list->free;
    list->free = it.node;
    list->count--;
    return result;
}

/* Moves the entry to the pending map under its new time; returns 1 when the map took it. */
static __forceinline int Manager_Defer(Manager_83011EE0 *self, Entry_83011EE0 *entry)
{
    Entry_83011EE0 *item = entry;

    entry->time = self->now - entry->startTime + entry->time;
    return fn_83019E38(self->pending, entry->time, &item);
}

static __forceinline void Entry_Delete(void *heap, Entry_83011EE0 *entry)
{
    entry->vt->Destroy(entry, 0);
    fn_82FA5190(heap, entry);
}

void fn_83011EE0(Manager_83011EE0 *self, unsigned int owner, void *target, unsigned char force)
{
    Iterator_83011EE0 it;
    int params[16];

    it.node = self->items.first;
    it.previous = 0;
    while (it.node != 0) {
        Entry_83011EE0 *entry = it.node->entry;

        if ((owner == 0 || entry->owner == owner) && !fn_83010658(self, entry->resource, target)) {
            if (force || entry->skipCount == 0) {
                if (Manager_Defer(self, entry) != 1) {
                    int type;

                    params[0] = 0;
                    type = entry->resource->type >> 8;
                    if (type == 0x4011 || type == 0x5011) {
                        if (type != 0x4011) {
                            fn_83032FE8(entry->resource);
                        }
                        entry->resource->vt->Stop(entry->resource, params);
                    }
                    fn_82FF5198(lbl_83264304, entry->key);
                    entry->resource->vt->Release(entry->resource);
                    Entry_Delete(lbl_831BC768, entry);
                }
                it = List_Erase(&self->items, it);
            } else {
                entry->skipCount--;
                it.previous = it.node;
                it.node = it.node->next;
            }
        } else {
            it.previous = it.node;
            it.node = it.node->next;
        }
    }
    fn_830118C0(lbl_832642E4, owner, target, force);
}
