long _InterlockedCompareExchange(long volatile *dest, long exchange, long comparand);

typedef struct Item_82BD6990 Item_82BD6990;

typedef struct ItemVtbl_82BD6990 {
    void *slots0[3];
    void (*Release)(Item_82BD6990 *self); /* 0xc */
} ItemVtbl_82BD6990;

struct Item_82BD6990 {
    ItemVtbl_82BD6990 *vt;
};

typedef struct Chat_82BD6990 {
    char pad0[4];
    int closed;              /* 0x4 */
    void *engine;            /* 0x8 */
    void *voice;             /* 0xc */
    Item_82BD6990 *items[4]; /* 0x10 */
    char pad20[4];
    int active[2];          /* 0x24 */
    unsigned int itemCount; /* 0x2c */
    char pad30[0x24];
    volatile long state; /* 0x54 */
    char pad58[0x44];
    void *manager;         /* 0x9c */
    char overlapped[0x1c]; /* 0xa0 */
    char padbc[8];
    float level; /* 0xc4 */
} Chat_82BD6990;

extern unsigned int XMsgCancelIORequest(void *overlapped, int wait);
extern unsigned int XamVoiceClose(void *voice);
extern void fn_82BDC130(void *engine);
extern void fn_82BD51F0(void *manager, Chat_82BD6990 *chat);
extern void fn_82BD6260(void *manager);

void fn_82BD6990(Chat_82BD6990 *self)
{
    volatile long *state = &self->state;
    unsigned int i;

    XMsgCancelIORequest(self->overlapped, 1);
    while (*state != 0) {
        if ((unsigned long)_InterlockedCompareExchange(state, 3, 2) == 2) {
            while (*state != 0) {
            }
            break;
        }
        _InterlockedCompareExchange(state, 0, 1);
    }
    if (self->voice != 0) {
        XamVoiceClose(self->voice);
        self->voice = 0;
    }
    fn_82BDC130(self->engine);
    self->level = 0.0f;
    fn_82BD51F0(self->manager, self);
    self->closed = 1;
    fn_82BD6260(self->manager);
    for (i = 0; i < self->itemCount; i++) {
        self->items[i]->vt->Release(self->items[i]);
        self->active[i] = 0;
    }
}
