typedef struct Ptr_82700248 {
    void *object;
} Ptr_82700248;

typedef struct Action_82700248 {
    int type;                 /* 0x00 */
    Ptr_82700248 target;      /* 0x04 */
    int unknown08;            /* 0x08 */
    int unknown0C;            /* 0x0c */
    unsigned short unknown10; /* 0x10 */
    unsigned char unknown12;  /* 0x12 */
    signed char unknown13;    /* 0x13 */
    unsigned char unknown14;  /* 0x14 */
    unsigned char unknown15;  /* 0x15 */
    int unknown18;            /* 0x18 */
    int unknown1C;            /* 0x1c */
    unsigned char unknown20;  /* 0x20 */
    int unknown24;            /* 0x24 */
    int unknown28;            /* 0x28 */
    int unknown2C;            /* 0x2c */
    int unknown30;            /* 0x30 */
} Action_82700248;

typedef struct Entry_82700248 {
    struct Entry_82700248 *next; /* 0x00 */
    int unknown04;               /* 0x04 */
    Action_82700248 action;      /* 0x08 */
    int session;                 /* 0x3c */
} Entry_82700248;

typedef struct List_82700248 {
    Entry_82700248 *head;   /* 0x0 */
    Entry_82700248 *insert; /* 0x4 */
    Entry_82700248 *last;   /* 0x8 */
} List_82700248;

typedef struct Queue_82700248 {
    List_82700248 lists[6]; /* 0x00 */
    int count;              /* 0x48 */
    Entry_82700248 *free;   /* 0x4c */
    int session;            /* 0x50 */
    int freeCount;          /* 0x54 */
    int unknown58;          /* 0x58 */
    void *heap;             /* 0x5c */
} Queue_82700248;

extern void *fn_8267B890(void *heap, unsigned int size, void *info);
extern void fn_8267C498(void *object);

static __forceinline void InitAction_82700248(Action_82700248 *action)
{
    action->type = 0;
    action->target.object = 0;
    action->unknown08 = 0;
    action->unknown0C = 0;
    action->unknown10 = 0;
    action->unknown12 = 0;
    action->unknown13 = -1;
    action->unknown14 = 0;
    action->unknown15 = 0;
    action->unknown20 = 0;
    action->unknown18 = 0;
    action->unknown1C = 0;
    action->unknown28 = 0;
    action->unknown2C = 0;
    action->unknown30 = 0;
}

static __forceinline void ClearPtr_82700248(Ptr_82700248 *pointer)
{
    if (pointer->object != 0) {
        fn_8267C498(pointer->object);
    }
    pointer->object = 0;
}

static __forceinline Entry_82700248 *Construct_82700248(Entry_82700248 *entry)
{
    InitAction_82700248(&entry->action);
    entry->next = 0;
    entry->unknown04 = 0;
    ClearPtr_82700248(&entry->action.target);
    entry->session = 0;
    return entry;
}

static __forceinline Entry_82700248 *NewEntry_82700248(Queue_82700248 *self)
{
    Entry_82700248 *memory = (Entry_82700248 *)fn_8267B890(self->heap, sizeof(Entry_82700248), 0);

    if (memory != 0) {
        return Construct_82700248(memory);
    }
    return 0;
}

Entry_82700248 *fn_82700248(Queue_82700248 *self, int priority)
{
    Entry_82700248 *entry = self->free;
    List_82700248 *list;

    if (entry != 0) {
        self->free = entry->next;
        entry->next = 0;
        self->freeCount--;
    } else {
        entry = NewEntry_82700248(self);
        if (entry == 0) {
            return 0;
        }
    }
    list = &self->lists[priority];
    if (list->insert == 0) {
        entry->next = list->head;
        list->head = entry;
    } else {
        entry->next = list->insert->next;
        list->insert->next = entry;
    }
    list->insert = entry;
    if (entry->next == 0) {
        list->last = entry;
    }
    entry->session = self->session;
    self->count++;
    return entry;
}
