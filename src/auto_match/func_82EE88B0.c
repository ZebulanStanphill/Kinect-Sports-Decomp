long _InterlockedIncrement(long volatile *addend);

typedef struct Link_82EE88B0 {
    struct Link_82EE88B0 *next; /* 0x00 */
    struct Link_82EE88B0 *prev; /* 0x04 */
} Link_82EE88B0;

typedef struct List_82EE88B0 {
    int count;          /* 0x00 */
    Link_82EE88B0 head; /* 0x04 */
} List_82EE88B0;

typedef struct Entry_82EE88B0 Entry_82EE88B0;

typedef struct EntryVtbl_82EE88B0 {
    void (*Destroy)(Entry_82EE88B0 *self, int flags); /* 0x00 */
} EntryVtbl_82EE88B0;

struct Entry_82EE88B0 {
    EntryVtbl_82EE88B0 *vt; /* 0x00 */
    Link_82EE88B0 link;     /* 0x04 */
    char pad0c[0x4];
    void *stream; /* 0x10 */
};

typedef struct Device_82EE88B0 {
    char pad00[0x44];
    void *event; /* 0x44 */
} Device_82EE88B0;

typedef struct Player_82EE88B0 {
    char pad00[0x50];
    List_82EE88B0 entries; /* 0x50 */
    char lock[0x3c];       /* 0x5c */
    long pending;          /* 0x98 */
    char pad9c[0x4];
    Device_82EE88B0 *device; /* 0xa0 */
    int looping;             /* 0xa4 */
    char pada8[0x4];
    unsigned int format; /* 0xac */
    int autoStart;       /* 0xb0 */
} Player_82EE88B0;

extern void fn_82E50CB8(void *lock);
extern void fn_82E50F10(void *lock);
extern void *fn_82E50BE8(unsigned int size, int a, int b, int c, int d);
extern void fn_82E4FE40(void *memory);
extern Entry_82EE88B0 *fn_82EE8160(void *memory, Player_82EE88B0 *player);
extern long fn_82EE8230(Entry_82EE88B0 *entry, Device_82EE88B0 *device);
extern long fn_82E665B0(void *stream, unsigned int format);
extern void fn_82EE82A0(Entry_82EE88B0 *entry, int looping);
extern unsigned int fn_82A1E650(void *event, unsigned int timeout);
extern long fn_82EE8420(Entry_82EE88B0 *entry, int start, int flags);

long fn_82EE88B0(Player_82EE88B0 *self)
{
    long hr;
    void *memory;
    Entry_82EE88B0 *entry;
    List_82EE88B0 *list;
    Link_82EE88B0 *tail;

    fn_82E50CB8(self->lock);
    memory = fn_82E50BE8(0x6c, 0, 0, 0, 0);
    if (memory == 0) {
        hr = 0x8007000e;
    } else {
        entry = fn_82EE8160(memory, self);
        hr = fn_82EE8230(entry, self->device);
        if (hr < 0) {
            entry->vt->Destroy(entry, 0);
            fn_82E4FE40(entry);
        } else if (self->format == 0 || (hr = fn_82E665B0(entry->stream, self->format)) >= 0) {
            if (self->looping != 0) {
                fn_82EE82A0(entry, self->looping);
            }
            list = &self->entries;
            tail = list->head.prev;
            entry->link.next = &list->head;
            entry->link.prev = tail;
            tail->next = &entry->link;
            self->entries.head.prev = &entry->link;
            list->count++;
            _InterlockedIncrement(&self->pending);
            if (fn_82A1E650(self->device->event, 0xffffffff) != 0) {
                hr = 0x80004005;
            } else if (self->autoStart == 1) {
                hr = fn_82EE8420(entry, 1, 0);
            }
        }
    }
    fn_82E50F10(self->lock);
    return hr;
}
