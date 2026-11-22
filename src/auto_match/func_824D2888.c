typedef struct Config_824D2888 {
    char pad0[0x240];
    float defaultTime;  /* 0x240 */
    float extendedTime; /* 0x244 */
    char pad248[0x250 - 0x248];
    int clampEnabled; /* 0x250 */
    char pad254[0x2a8 - 0x254];
    int ignoreClamp; /* 0x2a8 */
} Config_824D2888;

typedef struct Override_824D2888 {
    char pad0[0x98];
    int hasTime; /* 0x98 */
    float time;  /* 0x9c */
    char padA0[0xb8 - 0xa0];
    int clampEnabled; /* 0xb8 */
} Override_824D2888;

typedef struct Player_824D2888 {
    char pad0[0x344];
    float progress; /* 0x344 */
    char pad348[0x3a8 - 0x348];
    int hasMinimum; /* 0x3a8 */
    float minimum;  /* 0x3ac */
    char pad3B0[0x1c10 - 0x3b0];
} Player_824D2888;

typedef struct Self_824D2888 {
    Player_824D2888 players[2]; /* 0x0 */
    char pad3820[0x3a00 - 0x3820];
    Config_824D2888 *config; /* 0x3a00 */
    int pad3A04;
    Override_824D2888 *override; /* 0x3a08 */
} Self_824D2888;

extern int fn_824D2980(Self_824D2888 *self, int index);
extern float fn_82809868(float t);

static __forceinline float Max(float a, float b)
{
    return a - b >= 0.0f ? a : b;
}

int fn_824D2888(Self_824D2888 *self, int index)
{
    float time;
    float limit;
    int extended;
    Player_824D2888 *player;

    time = self->config->defaultTime;
    extended = fn_824D2980(self, index);
    if (extended != 0) {
        time = self->config->extendedTime;
    } else if (self->override->hasTime != 0) {
        time = self->override->time;
    }
    limit = 1.0f - fn_82809868(time);
    player = &self->players[index];
    if (player->hasMinimum != 0 && self->config->clampEnabled != 0 &&
        (extended == 0 || self->config->ignoreClamp == 0) && self->override->clampEnabled != 0) {
        limit = Max(limit, player->minimum);
    }
    return player->progress > limit;
}
