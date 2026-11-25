typedef struct Value_8241B1C8 {
    int w0;   /* 0x0 */
    int type; /* 0x4 */

    union {
        void *p;
        double d;
    } u; /* 0x8 */
} Value_8241B1C8;

typedef struct Ref_8241B1C8 {
    void *p;  /* 0x0 */
    void *rc; /* 0x4 */
} Ref_8241B1C8;

typedef struct Panel_8241B1C8 {
    char pad00[0xc];
    int open; /* 0x0C */
} Panel_8241B1C8;

typedef struct Hud_8241B1C8 {
    char pad0000[0xc];
    void *popup; /* 0x000C */
    char pad0010[0x8];
    Panel_8241B1C8 *panel; /* 0x0018 */
    char pad001C[0x1820];
    int busy; /* 0x183C */
} Hud_8241B1C8;

typedef struct Game_8241B1C8 {
    char pad0000[0xd4];
    Hud_8241B1C8 *hud; /* 0x00D4 */
    char pad00D8[0xac];
    int crowd; /* 0x0184 */
    char pad0188[0x4c8];
    float showTime; /* 0x0650 */
    float hideTime; /* 0x0654 */
    char pad0658[0x24c8];
    void *focus; /* 0x2B20 */
    char pad2B24[0x1c];
    int paused; /* 0x2B40 */
} Game_8241B1C8;

typedef struct Player_8241B1C8 {
    char pad000[0xc];
    int slot; /* 0x00C */
    char pad010[0x30];
    int score; /* 0x040 */
    char pad044[0x168];
} Player_8241B1C8;

typedef struct Scorecard_8241B1C8 {
    Game_8241B1C8 *game; /* 0x000 */
    char pad004[0x4];
    Player_8241B1C8 *players; /* 0x008 */
    char pad00C[0xc];
    int current; /* 0x018 */
    char pad01C[0x198];
    unsigned int state; /* 0x1B4 */
    int previous;       /* 0x1B8 */
    float timer;        /* 0x1BC */
    char pad1C0[0xdc];
    int locked; /* 0x29C */
    char pad2A0[0x10];
    int hidden; /* 0x2B0 */
} Scorecard_8241B1C8;

extern int fn_82360BB0(Game_8241B1C8 *game);
extern void fn_8227B548(int crowd);
extern void fn_823605C0(Game_8241B1C8 *game, int slot);
extern void fn_82273CD8(Value_8241B1C8 *value, int type);
extern void fn_82273C88(Value_8241B1C8 *value);
extern Ref_8241B1C8 *fn_8229AE10(Ref_8241B1C8 *out, Hud_8241B1C8 *hud);
extern void fn_82672C20(void *movie, const char *path, Value_8241B1C8 *args, int count);
extern void fn_822315A0(void *rc);
extern void fn_8229F618(void *popup);

static __forceinline int IsMenuOpen(Game_8241B1C8 *game, Scorecard_8241B1C8 *self)
{
    if (self == game->focus) {
        return game->hud->panel->open;
    }
    return 0;
}

void fn_8241B1C8(Scorecard_8241B1C8 *self, float dt)
{
    Ref_8241B1C8 frameRef;
    Ref_8241B1C8 collapseRef;
    Ref_8241B1C8 hideRef;
    Ref_8241B1C8 throwRef;
    Value_8241B1C8 arg;
    Game_8241B1C8 *game;
    Hud_8241B1C8 *hud;
    float timer;
    int slot;
    int score;

    switch (self->state) {
    case 5:
        game = self->game;
        if (fn_82360BB0(game) != 0) {
            self->state = 6;
            if (game->crowd != 0) {
                fn_8227B548(game->crowd);
            }
        }
        break;
    case 3:
        timer = self->timer - dt;
        timer = timer >= 0.0f ? timer : 0.0f;
        self->timer = timer;
        if (timer == 0.0f) {
            game = self->game;
            if (fn_82360BB0(game) != 0 && game->paused == 0 && IsMenuOpen(game, self) == 0 &&
                self->locked == 0 && self->hidden == 0) {
                self->state = 4;
                fn_823605C0(game, self->players[self->current].slot);
                slot = self->players[self->current].slot;
                score = self->players[self->current].score;
                if (slot >= 0) {
                    hud = self->game->hud;
                    arg.w0 = 0;
                    arg.type = 0;
                    fn_82273CD8(&arg, 3);
                    arg.u.d = score;
                    fn_82672C20(fn_8229AE10(&frameRef, hud)->p, "_root.scorecardCtrl.setActiveFrame", &arg,
                                1);
                    if (frameRef.rc != 0) {
                        fn_822315A0(frameRef.rc);
                    }
                    fn_82273C88(&arg);
                }
                if (self->players[self->current].slot >= 0) {
                    fn_82672C20(fn_8229AE10(&collapseRef, self->game->hud)->p, "_root.scorecardCtrl.collapse",
                                0, 0);
                    if (collapseRef.rc != 0) {
                        fn_822315A0(collapseRef.rc);
                    }
                }
            }
        }
        break;
    case 0:
    case 1:
        if (self->players[self->current].slot >= 0) {
            hud = self->game->hud;
            if (hud->busy == 0) {
                fn_82672C20(fn_8229AE10(&hideRef, hud)->p, "_root.scorecardCtrl.hide", 0, 0);
                if (hideRef.rc != 0) {
                    fn_822315A0(hideRef.rc);
                }
            } else {
                fn_8229F618(hud->popup);
            }
        }
        if (self->players[self->current].slot >= 0) {
            fn_82672C20(fn_8229AE10(&throwRef, self->game->hud)->p, "_root.mainCtrl.throwOffScreen", 0, 0);
            if (throwRef.rc != 0) {
                fn_822315A0(throwRef.rc);
            }
        }
        if (self->previous == 6) {
            self->timer = self->game->showTime;
        } else {
            self->timer = self->game->hideTime;
        }
        self->state = self->state != 0 ? 3 : 2;
        break;
    }
    self->previous = self->state;
}
