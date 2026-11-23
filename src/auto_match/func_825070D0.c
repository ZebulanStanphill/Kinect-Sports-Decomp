typedef struct Audio_825070D0 {
    unsigned char pad0[0xd0];
    unsigned char queue[4]; /* 0xd0 */
} Audio_825070D0;

typedef struct Player_825070D0 {
    unsigned char pad0[0x8c0];
    Audio_825070D0 *audio; /* 0x8c0 */
    unsigned char pad8c4[0x488];
    int nextState;    /* 0xd4c */
    int state;        /* 0xd50 */
    float stateTimer; /* 0xd54 */
    float idleTimer;  /* 0xd58 */
    float holdTimer;  /* 0xd5c */
} Player_825070D0;

extern void fn_82547C80(void *queue, unsigned char sound, unsigned char play);
extern unsigned int lbl_83265A28;

static __forceinline float RandomUnit(void)
{
    union {
        unsigned int bits;
        float value;
    } u;

    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    u.bits = (lbl_83265A28 & 0x7fffff) | 0x3f800000;
    return u.value - 1.0f;
}

void fn_825070D0(Player_825070D0 *player, float dt)
{
    if (player->holdTimer > 0.0f) {
        player->holdTimer -= dt;
        if (player->holdTimer < 0.0f) {
            player->nextState = 0;
        }
    }
    if (player->state == 3) {
        player->stateTimer -= dt;
        if (player->stateTimer < 0.0f) {
            player->state = player->nextState;
        }
    } else {
        player->idleTimer -= dt;
        if (player->idleTimer < 0.0f) {
            player->idleTimer = RandomUnit() * 3.5f + 1.5f;
            player->state = 3;
            player->stateTimer = 0.1f;
        }
    }
    fn_82547C80(player->audio->queue, 2, (unsigned char)player->state);
}
