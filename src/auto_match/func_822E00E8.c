typedef struct SharedPtr_822E00E8 {
    void *px; /* 0x0 */
    int *rep; /* 0x4 */
} SharedPtr_822E00E8;

typedef struct Player_822E00E8 {
    char pad000[0x2184];
    int locked; /* 0x2184 */
} Player_822E00E8;

typedef struct State_822E00E8 {
    char pad000[0x274];
    int busy; /* 0x274 */
    char pad278[0x340 - 0x278];
    int pending; /* 0x340 */
    char pad344[0x350 - 0x344];
    int mode; /* 0x350 */
} State_822E00E8;

typedef struct Self_822E00E8 {
    char pad00[0x14];
    State_822E00E8 *state; /* 0x14 */
} Self_822E00E8;

extern SharedPtr_822E00E8 *fn_82365BD8(SharedPtr_822E00E8 *out, SharedPtr_822E00E8 *source);
extern void fn_822315A0(int *rep);
extern int fn_822CF260(State_822E00E8 *state, int flag);
extern unsigned int fn_822E09B8(Self_822E00E8 *self, SharedPtr_822E00E8 *player);
extern unsigned int fn_822E0880(Self_822E00E8 *self, SharedPtr_822E00E8 *player);
extern unsigned int fn_822E0550(Self_822E00E8 *self, SharedPtr_822E00E8 *player);
extern unsigned int fn_822E03F8(Self_822E00E8 *self, SharedPtr_822E00E8 *player);
extern unsigned int fn_822E0200(Self_822E00E8 *self, SharedPtr_822E00E8 *player, int mode);

unsigned int fn_822E00E8(Self_822E00E8 *self, SharedPtr_822E00E8 *player)
{
    SharedPtr_822E00E8 copy;
    int mode = self->state->mode;
    unsigned int result;

    if (((Player_822E00E8 *)player->px)->locked != 0) {
        result = fn_822E09B8(self, fn_82365BD8(&copy, player));
    } else if (self->state->pending != 0) {
        result = fn_822E0880(self, fn_82365BD8(&copy, player));
    } else if (mode != 0) {
        result = fn_822E0200(self, fn_82365BD8(&copy, player), mode);
    } else {
        State_822E00E8 *state;

        result = fn_822E0550(self, fn_82365BD8(&copy, player));
        state = self->state;

        if (fn_822CF260(state, 1) == 0 && self->state->busy == 0 && result == 0) {
            result = fn_822E03F8(self, fn_82365BD8(&copy, player));
            if (result == 0) {
                result = fn_822E0200(self, fn_82365BD8(&copy, player), 0);
            }
        }
    }
    if (player->rep != 0) {
        fn_822315A0(player->rep);
    }
    return result;
}
