struct Resource_83011CF8;

typedef struct ResourceVtbl_83011CF8 {
    void *slots00[2];
    void (*Release)(struct Resource_83011CF8 *self); /* 0x08 */
    void *slots0c[7];
    void (*Stop)(struct Resource_83011CF8 *self, void *params); /* 0x28 */
} ResourceVtbl_83011CF8;

typedef struct Resource_83011CF8 {
    ResourceVtbl_83011CF8 *vt;
    char pad04[0x10];
    unsigned int type; /* 0x14 */
} Resource_83011CF8;

struct Entry_83011CF8;

typedef struct EntryVtbl_83011CF8 {
    void (*Destroy)(struct Entry_83011CF8 *self, int flags); /* 0x00 */
} EntryVtbl_83011CF8;

typedef struct Entry_83011CF8 {
    EntryVtbl_83011CF8 *vt;
    int pad04;
    Resource_83011CF8 *resource; /* 0x08 */
    int time;                    /* 0x0c */
    int pad10;
    int startTime; /* 0x14 */
    char pad18[0x10];
    int key; /* 0x28 */
    int pad2c;
    unsigned int skipCount; /* 0x30 */
    unsigned int owner;     /* 0x34 */
} Entry_83011CF8;

typedef struct Node_83011CF8 {
    struct Node_83011CF8 *next; /* 0x0 */
    int group;                  /* 0x4 */
    Entry_83011CF8 *entry;      /* 0x8 */
} Node_83011CF8;

typedef struct Iterator_83011CF8 {
    Node_83011CF8 *node;
    Node_83011CF8 *previous;
} Iterator_83011CF8;

typedef struct List_83011CF8 {
    Node_83011CF8 *first; /* 0x00 */
    Node_83011CF8 *last;  /* 0x04 */
    Node_83011CF8 *free;  /* 0x08 */
    int padc[2];
    int count; /* 0x14 */
} List_83011CF8;

typedef struct Manager_83011CF8 {
    char pad00[0x50];
    char pending[0x20];  /* 0x50 */
    List_83011CF8 items; /* 0x70 */
    char pad88[8];
    int now; /* 0x90 */
} Manager_83011CF8;

extern void *lbl_831BC768;
extern unsigned int lbl_83264304;
extern unsigned char fn_83010770(Manager_83011CF8 *self, unsigned int filter, int group);
extern int fn_83019E38(void *map, int key, Entry_83011CF8 **item);
extern void fn_83032FE8(void *resource);
extern void fn_82FF5198(unsigned int registry, int key);
extern void fn_82FA5190(void *heap, void *p);
extern void fn_83011828(Manager_83011CF8 *self, unsigned int group, unsigned int owner, unsigned char force);

static __forceinline Iterator_83011CF8 List_Erase(List_83011CF8 *list, Iterator_83011CF8 it)
{
    Iterator_83011CF8 result;

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
static __forceinline int Manager_Defer(Manager_83011CF8 *self, Entry_83011CF8 *entry)
{
    Entry_83011CF8 *item = entry;

    entry->time = self->now - entry->startTime + entry->time;
    return fn_83019E38(self->pending, entry->time, &item);
}

static __forceinline void Entry_Delete(void *heap, Entry_83011CF8 *entry)
{
    entry->vt->Destroy(entry, 0);
    fn_82FA5190(heap, entry);
}

void fn_83011CF8(Manager_83011CF8 *self, unsigned int group, unsigned int owner, unsigned char force)
{
    Iterator_83011CF8 it;
    int params[16];

    it.node = self->items.first;
    it.previous = 0;
    while (it.node != 0) {
        Entry_83011CF8 *entry = it.node->entry;

        if ((group == 0 || fn_83010770(self, group, it.node->group)) &&
            (owner == 0 || entry->owner == owner)) {
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
    fn_83011828(self, group, owner, force);
}
