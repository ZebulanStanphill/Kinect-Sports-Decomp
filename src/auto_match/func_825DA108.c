typedef struct Slot_825DA108 {
    int words[6];
} Slot_825DA108;

typedef struct Slots_825DA108 {
    Slot_825DA108 slots[9]; /* 0x0 */
    float weight;           /* 0xd8 */
} Slots_825DA108;

typedef struct Player_825DA108 Player_825DA108;

typedef struct Link_825DA108 {
    Player_825DA108 *owner; /* 0x0 */
    int pad4;
    int pending; /* 0x8 */
    int padc;
    float x10; /* 0x10 */
    float x14; /* 0x14 */
    float x18; /* 0x18 */
    float x1c; /* 0x1c */
    int x20;   /* 0x20 */
} Link_825DA108;

struct Player_825DA108 {
    char pad0[0x38];
    int locked; /* 0x38 */
    char pad3c[0xa30 - 0x3c];
    Slots_825DA108 slots; /* 0xa30 */
    char padb0c[0xb60 - 0xb0c];
    Link_825DA108 link; /* 0xb60 */
    int xb84;           /* 0xb84 */
};

typedef struct Setup_825DA108 {
    char pad0[0x5bc];
    Player_825DA108 *source; /* 0x5bc */
    int x5c0;                /* 0x5c0 */
    float x5c4;              /* 0x5c4 */
    float x5c8;              /* 0x5c8 */
    int x5cc;                /* 0x5cc */
    char pad5d0[0x8];
    float x5d8; /* 0x5d8 */
} Setup_825DA108;

extern void fn_8261D538(Player_825DA108 *self, Player_825DA108 *source);
extern int fn_825529B0(Slot_825DA108 *slot);
extern void fn_82552B50(Slot_825DA108 *slot, int value);
extern void fn_82552890(Slot_825DA108 *slot, Slot_825DA108 *source, Player_825DA108 *owner);

static __forceinline void InitLink(Link_825DA108 *link, Player_825DA108 *owner, float y, float x, int z,
                                   float w)
{
    link->owner = owner;
    link->x18 = y;
    link->x1c = y;
    link->x14 = x;
    link->x20 = z;
    link->x10 = w;
    if (link->pending != 0) {
        link->pending = 0;
    }
}

int fn_825DA108(Player_825DA108 *self, Setup_825DA108 *setup)
{
    Link_825DA108 *link = &self->link;
    Player_825DA108 *source;
    Slots_825DA108 *slots;
    Slots_825DA108 *sourceSlots;
    int i;
    if (setup->source != 0) {
        fn_8261D538(self, setup->source);
    }
    InitLink(link, self, setup->x5c8, setup->x5c4, setup->x5cc, setup->x5d8);
    self->xb84 = setup->x5c0;
    source = setup->source;
    if (source != 0) {
        slots = &self->slots;
        sourceSlots = &source->slots;
        for (i = 0; i < 9; i++) {
            if (i != 4 && i != 7) {
                if (fn_825529B0(&sourceSlots->slots[i]) != 0) {
                    if (fn_825529B0(&slots->slots[i]) != 0) {
                        fn_82552B50(&slots->slots[i], 1);
                    }
                    if (self->locked == 0) {
                        fn_82552890(&slots->slots[i], &sourceSlots->slots[i], self);
                    }
                }
            }
        }
        slots->weight = sourceSlots->weight;
    }
    return 1;
}
