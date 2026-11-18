typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct SharedPtr_822E0BE8 {
    void *px; /* 0x0 */
    int *rep; /* 0x4 */
} SharedPtr_822E0BE8;

typedef struct Player_822E0BE8 {
    char pad000[0x20];
    __vector4 position; /* 0x20 */
    char pad030[0xa8];
    int fd8; /* 0xd8 */
} Player_822E0BE8;

typedef struct State_822E0BE8 {
    char pad000[0x24];
    int id; /* 0x24 */
    char pad028[0x24c];
    int busy; /* 0x274 */
    char pad278[0xc8];
    int pending; /* 0x340 */
} State_822E0BE8;

typedef struct Self_822E0BE8 {
    char pad00[0x14];
    State_822E0BE8 *state; /* 0x14 */
} Self_822E0BE8;

extern float lbl_831CD598[51];

extern SharedPtr_822E0BE8 *fn_82365BD8(SharedPtr_822E0BE8 *out, SharedPtr_822E0BE8 *source);
extern void fn_822315A0(int *rep);
extern int fn_822CF260(State_822E0BE8 *state, int flag);
extern float fn_822E0E38(SharedPtr_822E0BE8 *player);
extern unsigned int fn_824D6498(int id, int a, float scale, float *params, int b, int c, int d, int *out,
                                __vector4 position, int e);

unsigned int fn_822E0BE8(Self_822E0BE8 *self, SharedPtr_822E0BE8 *player, int a, int b, int c, int d,
                         int forced, int e)
{
    SharedPtr_822E0BE8 copy;
    int out;
    State_822E0BE8 *state = self->state;
    int id = state->id;
    float *params;
    unsigned int result;

    if (forced != 0) {
        params = &lbl_831CD598[16];
    } else if (state->pending != 0) {
        if (state->busy != 0) {
            params = &lbl_831CD598[12];
        } else {
            params = &lbl_831CD598[8];
        }
    } else if (fn_822CF260(state, 0) != 0 && self->state->busy != 0) {
        params = &lbl_831CD598[4];
    } else if (((Player_822E0BE8 *)player->px)->fd8 != 0) {
        params = &lbl_831CD598[20];
    } else {
        params = &lbl_831CD598[0];
    }
    result = fn_824D6498(id, a, fn_822E0E38(fn_82365BD8(&copy, player)), params, b, c, d, &out,
                         ((Player_822E0BE8 *)player->px)->position, e);
    if (player->rep != 0) {
        fn_822315A0(player->rep);
    }
    return result;
}
