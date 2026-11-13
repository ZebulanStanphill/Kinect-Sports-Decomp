typedef struct Entry_825A2A88 {
    char pad[0x30];
    int busy;               /* 0x30 */
    int handle;             /* 0x34 */
    int pad38;
    unsigned int id;        /* 0x3c */
    char pad40[0x20];
} Entry_825A2A88;

typedef struct Bank_825A2A88 {
    int pad0;
    void **items;           /* 0x04 */
} Bank_825A2A88;

typedef struct Store_825A2A88 {
    char pad[0x7fc];
    Bank_825A2A88 *banks[1];  /* 0x7fc */
} Store_825A2A88;

typedef struct Self_825A2A88 {
    char pad[0x4c];
    Store_825A2A88 *store;  /* 0x4c */
    char pad50[0x230 - 0x50];
    Entry_825A2A88 *first;  /* 0x230 */
    Entry_825A2A88 *last;   /* 0x234 */
} Self_825A2A88;

static __forceinline Entry_825A2A88 *Find_825A2A88(Self_825A2A88 *self, unsigned int id)
{
    Entry_825A2A88 *e;

    for (e = self->first; e < self->last; e++) {
        if (e->id == id)
            return e;
    }
    return 0;
}

void *fn_825A2A88(Self_825A2A88 *self, unsigned int id)
{
    Bank_825A2A88 **banks = self->store->banks;
    Entry_825A2A88 *e = Find_825A2A88(self, id);

    if (e != 0 && e->busy == 0)
        return banks[(e->handle >> 8) & 0xff]->items[e->handle & 0xff];
    return 0;
}
