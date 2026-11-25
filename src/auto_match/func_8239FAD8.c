typedef struct Game_8239FAD8 {
    char pad0[0x8];
    void ***players; /* 0x08 */
    char padC[0x48];
    int state; /* 0x54 */
    char pad58[0x808];
    int started; /* 0x860 */
} Game_8239FAD8;

typedef struct Self_8239FAD8 {
    char pad0[0x240];
    Game_8239FAD8 *game; /* 0x240 */
    char pad244[0x3c];
    float *animation; /* 0x280 */
    char pad284[0x4];
    int level;   /* 0x288 */
    int mode;    /* 0x28c */
    float timer; /* 0x290 */
    char pad294[0x4];
    unsigned int side; /* 0x298 */
} Self_8239FAD8;

extern float lbl_831D2980[];

extern int fn_82399BA0(Game_8239FAD8 *game);
extern int fn_82399CB8(Game_8239FAD8 *game);
extern void *fn_822AA770(void *player);
extern void fn_8239FC88(Self_8239FAD8 *self, int mode, int flag);

void fn_8239FAD8(Self_8239FAD8 *self, float dt)
{
    int minimum;
    int index;

    self->timer += dt;
    switch (self->game->state) {
    case 3:
        if (self->mode == 4) {
            return;
        }
        self->mode = 4;
        self->timer = 0.0f;
        self->level = self->level < 0 ? 0 : self->level;
        break;
    case 6:
        if (self->game->started == 0) {
            return;
        }
        if (self->mode == 3) {
            return;
        }
        switch (self->side) {
        case 0:
            self->animation = &lbl_831D2980[0x6e];
            break;
        case 1:
            self->animation = &lbl_831D2980[0x80];
            break;
        }
        self->side = 1 - self->side;
        self->mode = 3;
        self->timer = 0.0f;
        self->level = self->level < 1 ? 1 : self->level;
        break;
    case 7:
        if (self->mode == 1 || self->mode == 2) {
            return;
        }
        index = fn_82399CB8(self->game);
        if (fn_822AA770((*self->game->players)[index]) != 0) {
            fn_8239FC88(self, 1, 1);
        } else {
            fn_8239FC88(self, 2, 1);
        }
        break;
    case 0x10:
        break;
    default:
        if (fn_82399BA0(self->game) != 0) {
            return;
        }
        if (self->mode == 0) {
            return;
        }
        minimum = 1;
        if (self->mode == 4) {
            minimum = 0;
        }
        self->timer = 0.0f;
        self->mode = 0;
        self->level = self->level < minimum ? minimum : self->level;
        break;
    }
}
