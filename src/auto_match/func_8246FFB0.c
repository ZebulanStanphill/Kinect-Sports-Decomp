typedef struct Settings_8246FFB0 {
    char pad0[0x10];
    int secondTicker; /* 0x10 */
    char pad14[0xe4 - 0x14];
    float delay; /* 0xe4 */
} Settings_8246FFB0;

typedef struct Game_8246FFB0 {
    char pad0[0x2c];
    int team; /* 0x2c */
    char pad30[0x54 - 0x30];
    int state; /* 0x54 */
} Game_8246FFB0;

typedef struct Party_8246FFB0 {
    char pad0[0x8];
    Game_8246FFB0 *game; /* 0x08 */
    char padc[0x10 - 0xc];
    int phase; /* 0x10 */
    char pad14[0x18 - 0x14];
    float timer; /* 0x18 */
    char pad1c[0x20 - 0x1c];
    float speedA[2]; /* 0x20 */
    char pad28[0x48 - 0x28];
    float speedB[2]; /* 0x48 */
    char pad50[0x70 - 0x50];
    int busy; /* 0x70 */
    char pad74[0x100 - 0x74];
    unsigned int animA; /* 0x100 */
    unsigned int animB; /* 0x104 */
    unsigned int animC; /* 0x108 */
    char pad10c[0x310 - 0x10c];
    void *meter; /* 0x310 */
    char pad314[0x33c - 0x314];
    char ticker[0x3fc - 0x33c]; /* 0x33c */
    void *board;                /* 0x3fc */
    char pad400[0x418 - 0x400];
    void *owner; /* 0x418 */
    char pad41c[0x440 - 0x41c];
    void *player; /* 0x440 */
} Party_8246FFB0;

extern Settings_8246FFB0 lbl_831C6B70;

extern void fn_82469958(void *board, int state);
extern void fn_8246EC90(Party_8246FFB0 *self, void *ticker, int a, int b, const char *name,
                        const char *secondName);
extern void fn_824651F0(void *player, unsigned int *anim);
extern void fn_82469EB0(void *meter, float value);
extern void fn_82469038(void *owner, int state);
extern void fn_82460610(Game_8246FFB0 *game, int state);

static __forceinline float Max(float a, float b)
{
    return a - b >= 0.0f ? a : b;
}

void fn_8246FFB0(Party_8246FFB0 *self)
{
    int moving;
    unsigned int *anim;
    int state;

    moving = self->speedA[1] < -0.01f || self->speedA[1] > 0.01f || self->speedB[1] < -0.01f ||
             self->speedB[1] > 0.01f;
    if (self->busy == 0 && moving) {
        fn_82469958(self->board, 1);
        fn_8246EC90(self, self->ticker, 1, 1, "tickerpartybonusscore", "secondtickerpartybonusscore");
        if (self->speedA[0] < -0.01f || self->speedA[0] > 0.01f || self->speedB[0] < -0.01f ||
            self->speedB[0] > 0.01f) {
            anim = &self->animA;
            if (lbl_831C6B70.secondTicker == 0) {
                anim = &self->animB;
            }
        } else {
            anim = &self->animC;
        }
        fn_824651F0(self->player, anim);
        fn_82469EB0(self->meter, Max(self->speedA[1], self->speedB[1]));
        self->phase = 4;
        self->timer = lbl_831C6B70.delay;
        fn_82469038(self->owner, 3);
    } else if (self->game->state == 6) {
        state = 9;
        if (self->game->team == 0) {
            state = 4;
        }
        fn_82460610(self->game, state);
    }
}
