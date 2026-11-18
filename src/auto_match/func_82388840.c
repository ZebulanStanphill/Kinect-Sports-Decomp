typedef struct Settings_82388840 {
    char pad0[0x1a8];
    float chance; /* 0x1a8 */
} Settings_82388840;

typedef struct Game_82388840 {
    char pad0[0x260];
    Settings_82388840 *settings; /* 0x260 */
} Game_82388840;

typedef struct Ai_82388840 {
    char pad0[0x8];
    Game_82388840 *game; /* 0x08 */
    char pad0c[0x44 - 0xc];
    unsigned int seed; /* 0x44 */
} Ai_82388840;

extern float lbl_821CA45C[2];
extern float lbl_821954B0[];

static __forceinline float RandomFloat_82388840(unsigned int *seed)
{
    union {
        unsigned int u;
        float f;
    } random;

    float one = lbl_821CA45C[1];

    *seed = *seed * 0x19660d + 0x3c6ef35f;
    random.u = (*seed & 0x7fffff) | 0x3f800000;
    return random.f - one;
}

void fn_82388840(Ai_82388840 *self, int *action, int *hit, int *extra)
{
    int success;

    success = RandomFloat_82388840(&self->seed) * lbl_821954B0[0x50] < self->game->settings->chance;
    *hit = success;
    *action = ((success == 0) ^ 1) + 0x13;
    *extra = 0;
}
