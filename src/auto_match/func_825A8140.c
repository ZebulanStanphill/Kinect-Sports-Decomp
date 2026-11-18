typedef struct Clip_825A8140 {
    char pad0[0x40];
    unsigned int flags; /* 0x40 */
    char pad44[0x114 - 0x44];
    float duration; /* 0x114 */
    float weight;   /* 0x118 */
    char pad11C[0x124 - 0x11c];
    float position; /* 0x124 */
} Clip_825A8140;

typedef struct Player_825A8140 {
    char pad0[0x1c];
    Clip_825A8140 *clip; /* 0x1c */
} Player_825A8140;

typedef struct State_825A8140 {
    char pad0[0x10];
    Player_825A8140 *player; /* 0x10 */
    char pad14[4];
    float weight;          /* 0x18 */
    float position;        /* 0x1c */
    float progress;        /* 0x20 */
    unsigned int looping;  /* 0x24 */
    unsigned int mirrored; /* 0x28 */
} State_825A8140;

static __forceinline float GetWeight(Player_825A8140 *player)
{
    return player->clip != 0 ? player->clip->weight : 0.0f;
}

static __forceinline unsigned int GetFlags(Player_825A8140 *player)
{
    return player->clip != 0 ? player->clip->flags : 0;
}

static __forceinline float GetPosition(Player_825A8140 *player, float *progress)
{
    Clip_825A8140 *clip = player->clip;
    float ratio;

    if (clip == 0) {
        return 0.0f;
    }
    if (progress != 0) {
        ratio = 0.0f;
        if (clip->duration > 0.0f) {
            ratio = clip->position / clip->duration;
        }
        *progress = ratio;
    }
    return clip->position;
}

void fn_825A8140(State_825A8140 *self)
{
    Player_825A8140 *player = self->player;

    if (player == 0) {
        return;
    }
    self->weight = GetWeight(player);
    self->looping = GetFlags(player) & 1;
    self->mirrored = (GetFlags(player) >> 1) & 1;
    self->position = GetPosition(player, &self->progress);
}
