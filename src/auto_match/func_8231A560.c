typedef struct Player_8231A560 {
    char pad0[0x474];
    float duration;  /* 0x474 */
    float scale;     /* 0x478 */
    float remaining; /* 0x47C */
    char pad480[0x4b8 - 0x480];
    void *animator; /* 0x4B8 */
} Player_8231A560;

typedef struct Context_8231A560 {
    char pad0[0x2c];
    int side; /* 0x2C */
} Context_8231A560;

typedef struct State_8231A560 State_8231A560;

typedef struct StateVtbl_8231A560 {
    void *slots[7];
    void (*Enter)(State_8231A560 *self); /* 0x1C */
} StateVtbl_8231A560;

struct State_8231A560 {
    StateVtbl_8231A560 *vt; /* 0x000 */
    char pad4[0xc - 0x4];
    Context_8231A560 *context; /* 0x00C */
    Player_8231A560 *player;   /* 0x010 */
    char pad14[0x2d8 - 0x14];
    int success; /* 0x2D8 */
    char pad2dc[0x324 - 0x2dc];
    float timer; /* 0x324 */
};

extern int fn_82369160(Player_8231A560 *player, int side);
extern void fn_823CC298(void *animator, int animation);

void fn_8231A560(State_8231A560 *self)
{
    Player_8231A560 *player;
    int success;

    self->vt->Enter(self);
    player = self->player;
    if ((1.0f - player->remaining / player->duration) * player->scale < 30.0f &&
        fn_82369160(player, self->context->side) == 1) {
        fn_823CC298(player->animator, 0x1a);
        success = 1;
    } else {
        fn_823CC298(player->animator, 4);
        success = 0;
    }
    self->success = success;
    self->timer = 0.5f;
}
