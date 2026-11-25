typedef struct Query_825C1B48 {
    int command;
    int size;
    int mode;
    int first;
    int last;
    int forwardValid; /* 0x14 */
    int forward;      /* 0x18 */
    int reverseValid; /* 0x1c */
    int reverse;      /* 0x20 */
} Query_825C1B48;

typedef struct Entry_825C1B48 {
    int tick;
    char pad04[0x14];
} Entry_825C1B48;

typedef struct Timeline_825C1B48 {
    char pad00[0x220];
    Entry_825C1B48 *entries; /* 0x220 */
} Timeline_825C1B48;

typedef struct Player_825C1B48 Player_825C1B48;

typedef struct Vtable_825C1B48 {
    void *slots[3];
    void (*query)(Player_825C1B48 *, Query_825C1B48 *);
} Vtable_825C1B48;

struct Player_825C1B48 {
    Vtable_825C1B48 *vtable;
    char pad04[0x48];
    Timeline_825C1B48 *timeline; /* 0x4c */
};

extern void XMemSet(void *, int, unsigned int);

void fn_825C1B48(Player_825C1B48 *self, int first, int last, int *forward, int *reverse, int mode, int start,
                 int end)
{
    Query_825C1B48 query;
    Entry_825C1B48 *entries = 0;
    int firstTick = 0;
    int lastTick = 0;

    XMemSet(&query.mode, 0, sizeof(query) - 8);
    query.mode = mode;
    query.first = start;
    query.command = 0x26;
    query.size = sizeof(query);
    query.last = end;
    self->vtable->query(self, &query);
    if (query.forwardValid != 0) {
        *forward = query.forward;
    } else {
        entries = self->timeline->entries;
        lastTick = entries[(unsigned char)last].tick;
        firstTick = entries[(unsigned char)first].tick;
        *forward = lastTick >= firstTick;
    }

    if (*reverse != 0) {
        if (query.reverseValid != 0) {
            *reverse = query.reverse;
        } else {
            if (entries == 0) {
                Entry_825C1B48 *table = self->timeline->entries;
                firstTick = table[(unsigned char)first].tick;
                lastTick = table[(unsigned char)last].tick;
            }
            *reverse = firstTick >= lastTick;
        }
    }
}
