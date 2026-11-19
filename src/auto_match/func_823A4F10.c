typedef struct Player_823A4F10 {
    char pad0[0x168];
    void *controller; /* 0x168 */
    int active;       /* 0x16c */
} Player_823A4F10;

typedef struct PlayerList_823A4F10 {
    int *ids; /* 0x00 */
} PlayerList_823A4F10;

typedef struct Selector_823A4F10 Selector_823A4F10;

typedef struct SelectorVtbl_823A4F10 {
    void *slots[13];
    int (*current)(Selector_823A4F10 *self); /* 0x34 */
} SelectorVtbl_823A4F10;

struct Selector_823A4F10 {
    SelectorVtbl_823A4F10 *vt;
};

typedef struct Mode_823A4F10 {
    char pad0[0x40];
    unsigned int kind; /* 0x40 */
} Mode_823A4F10;

typedef struct Game_823A4F10 {
    char pad0[0x8];
    PlayerList_823A4F10 *players; /* 0x008 */
    char padC[0x54 - 0xc];
    void *f54; /* 0x054 */
    void *f58; /* 0x058 */
    char pad5c[0xa0 - 0x5c];
    int mode; /* 0x0a0 */
    char padA4[0x178 - 0xa4];
    int state; /* 0x178 */
    char pad17c[0x208 - 0x17c];
    float time; /* 0x208 */
    char pad20c[0x2dc - 0x20c];
    void *sound;                 /* 0x2dc */
    Selector_823A4F10 *selector; /* 0x2e0 */
} Game_823A4F10;

typedef struct Self_823A4F10 {
    char pad0[0x8];
    Game_823A4F10 *game; /* 0x08 */
    char timer[0x14];    /* 0x0c */
    unsigned int phase;  /* 0x20 */
} Self_823A4F10;

extern Player_823A4F10 *fn_822AA770(int id);
extern void fn_82359698(Game_823A4F10 *game, int state);
extern void fn_82359C70(void *timer, float dt);
extern int fn_82399BA0(Game_823A4F10 *game);
extern void fn_8239FF60(void *sound, unsigned int id);
extern void fn_823A52F0(Self_823A4F10 *self);
extern void fn_823A53F0(Self_823A4F10 *self);
extern unsigned char fn_8288B760(void *controller);

static int IsActive(Player_823A4F10 *player)
{
    int active;

    if (player != 0) {
        if (player->controller != 0) {
            active = fn_8288B760(player->controller);
        } else {
            active = player->active;
        }
        if (active != 0) {
            return 1;
        }
    }
    return 0;
}

static void PlaySound(Game_823A4F10 *game, unsigned int id)
{
    if (id <= 0x1c) {
        fn_8239FF60(game->sound, id);
    }
}

void fn_823A4F10(Self_823A4F10 *self, float dt)
{
    Game_823A4F10 *game = self->game;
    int index;

    if (game->f58 != game->f54 && game->f58 != 0) {
        return;
    }
    game->time += dt;
    fn_82359C70(self->timer, dt);
    switch (self->phase) {
    case 3:
        if (game->state == 1) {
            fn_823A53F0(self);
        }
        break;
    case 4:
        fn_82359698(game, 4);
        break;
    case 5:
        if (fn_82399BA0(game) != 0) {
            if (game->state != 0) {
                fn_823A52F0(self);
            } else if (game->mode == 0 || ((Mode_823A4F10 *)game->mode)->kind != 1) {
                index = game->selector->vt->current(game->selector);
                PlaySound(self->game, !IsActive(fn_822AA770(game->players->ids[index])) + 7);
            }
        }
        fn_82359698(game, 9);
        break;
    }
}
