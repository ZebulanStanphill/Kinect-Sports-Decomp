typedef struct Player_82287AF0 {
    int state; /* 0x0 */
    char pad4[0x420 - 4];
} Player_82287AF0;

typedef struct Game_82287AF0 {
    char pad0[0x838];
    Player_82287AF0 players[4]; /* 0x838 */
    int side;                   /* 0x18b8 */
    unsigned int mode;          /* 0x18bc */
} Game_82287AF0;

typedef struct Self_82287AF0 {
    char pad0[0x11f0];
    Game_82287AF0 *game; /* 0x11f0 */
} Self_82287AF0;

typedef struct Item_82287AF0 {
    char pad0[0xd8];
    unsigned char attached; /* 0xd8 */
} Item_82287AF0;

typedef struct ItemArray_82287AF0 {
    Item_82287AF0 **begin; /* 0x0 */
    Item_82287AF0 **end;   /* 0x4 */
} ItemArray_82287AF0;

typedef struct Manager_82287AF0 {
    char pad0[0x10];
    ItemArray_82287AF0 items; /* 0x10 */
} Manager_82287AF0;

extern void fn_82288228(Self_82287AF0 *self, int player, unsigned int side);
extern void fn_82287DA8(Self_82287AF0 *self, unsigned int side);
extern void fn_82288040(Self_82287AF0 *self, int side);
extern void fn_82287D08(Self_82287AF0 *self, unsigned int count);
extern Manager_82287AF0 *fn_8225C590(void);
extern void fn_8225D8B8(Manager_82287AF0 *manager, Item_82287AF0 *item);
extern void fn_8225D388(Manager_82287AF0 *manager, unsigned int handle);
extern unsigned int fn_823AB478(Item_82287AF0 *item);

static __forceinline int FindWaitingPlayer_82287AF0(Self_82287AF0 *self)
{
    int i;

    for (i = 1; i < 4; i++) {
        if (self->game->players[i].state == 0 || self->game->players[i].state == 1) {
            return i;
        }
    }
    return -1;
}

static __forceinline int Size_82287AF0(ItemArray_82287AF0 *items)
{
    return items->end - items->begin;
}

void fn_82287AF0(Self_82287AF0 *self)
{
    unsigned int mode = self->game->mode;
    int keep;
    int player;
    unsigned int side;
    Manager_82287AF0 *manager;
    int count;

    fn_82288228(self, 0, 0);
    keep = 1;
    switch (mode) {
    case 0:
        keep = 1;
        fn_82288040(self, self->game->side == 1 ? 2 : 1);
        break;
    case 1:
        keep = 2;
        player = FindWaitingPlayer_82287AF0(self);
        if (player != -1) {
            fn_82288228(self, player, 1);
        } else {
            fn_82287DA8(self, 1);
        }
        fn_82288040(self, 2);
        fn_82288040(self, 3);
        break;
    case 2:
        keep = 2;
        side = self->game->side == 1 ? 2 : 1;
        player = FindWaitingPlayer_82287AF0(self);
        if (player != -1) {
            fn_82288228(self, player, side);
        } else {
            fn_82287DA8(self, side);
        }
        break;
    case 3:
        keep = 1;
        break;
    case 4:
        keep = 2;
        fn_82287D08(self, 1);
        break;
    case 5:
        keep = 3;
        fn_82287D08(self, 2);
        break;
    case 6:
        keep = 4;
        fn_82287D08(self, 3);
        break;
    }
    manager = fn_8225C590();
    for (count = Size_82287AF0(&manager->items); count > keep; count = Size_82287AF0(&manager->items)) {
        /* The bounds check uses the count the loop already holds, then reads the array again. */
        Item_82287AF0 *item = (unsigned int)keep < (unsigned int)count ? manager->items.begin[keep] : 0;

        fn_8225D8B8(manager, item);
        if (item->attached) {
            fn_8225D388(manager, fn_823AB478(item));
        }
    }
}
