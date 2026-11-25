typedef struct Self_82402DF8 Self_82402DF8;

typedef struct Function_82402DF8 {
    void **vtbl;          /* 0x00 */
    Self_82402DF8 *owner; /* 0x04 */
    int pad08[2];
    void *impl; /* 0x10 */
    int pad14;
} Function_82402DF8;

typedef struct Player_82402DF8 {
    char pad0[0x7A0];
    int busy; /* 0x7A0 */
} Player_82402DF8;

typedef struct Game_82402DF8 {
    char pad0[0x7F0];
    char events[4]; /* 0x7F0 */
} Game_82402DF8;

struct Self_82402DF8 {
    char pad0[0x10];
    int playerId; /* 0x010 */
    char pad14[0x240 - 0x14];
    Game_82402DF8 *game; /* 0x240 */
    char pad244[0x27C - 0x244];
    unsigned int state; /* 0x27C */
    float time;         /* 0x280 */
    int pad284;
    int f288; /* 0x288 */
    int f28c; /* 0x28C */
    int pad290;
    int f294;       /* 0x294 */
    int f298;       /* 0x298 */
    int f29c;       /* 0x29C */
    int f2a0;       /* 0x2A0 */
    int registered; /* 0x2A4 */
};

extern void *lbl_821B7B74[];
extern void fn_82402CF8(Self_82402DF8 *self, int state, int flag);
extern Player_82402DF8 *fn_82359558(Game_82402DF8 *game, int id);
extern void fn_82455740(void *events, Function_82402DF8 *callback);
extern void fn_82359C18(Function_82402DF8 *callback);

void fn_82402DF8(Self_82402DF8 *self, float dt)
{
    self->time = dt + self->time;
    if (self->f294 != 0) {
        fn_82402CF8(self, 4, 1);
    } else if (self->f298 != 0) {
        fn_82402CF8(self, 1, 1);
    } else if (self->f29c != 0) {
        fn_82402CF8(self, 5, 1);
    } else if (self->f2a0 != 0) {
        if (self->registered == 0) {
            Function_82402DF8 callback;

            callback.vtbl = lbl_821B7B74;
            callback.owner = self;
            callback.impl = &callback;
            fn_82455740(self->game->events, &callback);
            fn_82359C18(&callback);
            self->registered = 1;
        }
        if (self->f288 != 0) {
            fn_82402CF8(self, 3, 0);
        }
    } else {
        switch (self->state) {
        case 0:
            if (self->f288 != 0) {
                fn_82402CF8(self, 3, 0);
            } else if (self->f28c != 0) {
                if (fn_82359558(self->game, self->playerId)->busy == 0) {
                    fn_82402CF8(self, 2, 1);
                }
            }
            break;
        case 2:
            if (self->f288 != 0) {
                fn_82402CF8(self, 3, 1);
            } else if (self->f28c == 0) {
                fn_82402CF8(self, 0, 1);
            }
            break;
        case 3:
            if (self->f288 == 0) {
                if (self->f28c != 0 && fn_82359558(self->game, self->playerId)->busy == 0) {
                    fn_82402CF8(self, 2, 1);
                } else {
                    fn_82402CF8(self, 0, 0);
                }
            }
            break;
        case 1:
        case 4:
        case 5:
        case 6:
            fn_82402CF8(self, 0, 1);
            break;
        }
    }
}
