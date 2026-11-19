typedef struct Players_823A2B18 Players_823A2B18;

typedef struct PlayersVtbl_823A2B18 {
    void *slots[13];
    int (*GetActiveIndex)(Players_823A2B18 *self);    /* 0x34 */
    unsigned int (*GetCount)(Players_823A2B18 *self); /* 0x38 */
} PlayersVtbl_823A2B18;

struct Players_823A2B18 {
    PlayersVtbl_823A2B18 *vtbl;
};

typedef struct Profile_823A2B18 {
    char pad000[0x168];
    unsigned int signIn; /* 0x168 */
    int ready;           /* 0x16c */
} Profile_823A2B18;

typedef struct Game_823A2B18 {
    char pad000[0x8];
    int **profiles; /* 0x008 */
    char pad00c[0x16c];
    int skipCheck; /* 0x178 */
    char pad17c[0x160];
    int screen;                /* 0x2dc */
    Players_823A2B18 *players; /* 0x2e0 */
} Game_823A2B18;

typedef struct Starter_823A2B18 {
    char pad00[0x8];
    Game_823A2B18 *game; /* 0x08 */
    int started;         /* 0x0c */
} Starter_823A2B18;

extern Profile_823A2B18 *fn_822AA770(int profile);
extern unsigned char fn_8288B760(unsigned int signIn);
extern int fn_82399BA0(Game_823A2B18 *game);
extern int fn_8239CE98(Game_823A2B18 *game);
extern void fn_8239D2B0(Game_823A2B18 *game);
extern void fn_823985A8(Game_823A2B18 *game);
extern void fn_8239FF60(int screen, unsigned int state);
extern void fn_8239C118(Game_823A2B18 *game, unsigned int state);

void fn_823A2B18(Starter_823A2B18 *self)
{
    Game_823A2B18 *game;
    Profile_823A2B18 *profile;
    int ready;
    unsigned int state;
    int hasPlayer;
    int pending;
    int fresh;

    if (self->started != 0) {
        return;
    }
    game = self->game;
    self->started = 1;
    if (game->skipCheck == 0) {
        int index = game->players->vtbl->GetActiveIndex(game->players);
        profile = fn_822AA770((*game->profiles)[index]);
        if (profile != 0) {
            if (profile->signIn != 0) {
                ready = fn_8288B760(profile->signIn);
            } else {
                ready = profile->ready;
            }
            if (ready != 0) {
                goto has_player;
            }
        }
        hasPlayer = 0;
    } else {
    has_player:
        hasPlayer = 1;
    }
    pending = fn_82399BA0(self->game);
    fresh = 1;
    game = self->game;
    if (fn_8239CE98(game) != 0) {
        fresh = 0;
    }
    if (!hasPlayer) {
        if (pending != 0) {
            fresh = 0;
        }
    }
    if (fresh) {
        fn_8239D2B0(self->game);
    } else {
        fn_823985A8(self->game);
    }
    if (pending == 0) {
        state = hasPlayer ? 0x15 : 0x16;
        if (state <= 0x1c) {
            fn_8239FF60(self->game->screen, state);
        }
        if (self->game->players->vtbl->GetCount(self->game->players) > 2) {
            fn_8239C118(self->game, hasPlayer ? 10 : 11);
        }
    }
}
