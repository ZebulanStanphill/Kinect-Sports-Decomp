typedef struct Logger_8236B638 {
    char pad0[0x14];
    void *channel; /* 0x14 */
} Logger_8236B638;

typedef struct Game_8236B638 {
    char pad0[0xd4];
    Logger_8236B638 *logger; /* 0xd4 */
} Game_8236B638;

typedef struct Player_8236B638 {
    Game_8236B638 *game; /* 0x0 */
    char pad4[0xd8];
    float energy; /* 0xdc */
} Player_8236B638;

typedef struct Self_8236B638 {
    char pad0[0x4b0];
    Player_8236B638 *player; /* 0x4b0 */
} Self_8236B638;

extern char lbl_820E975C[]; /* "" */
extern void fn_8229D418(void *channel, const char *text, void *arg);

static __forceinline float Select(float test, float a, float b)
{
    return test >= 0.0f ? a : b;
}

void fn_8236B638(Self_8236B638 *self, void *arg, const char *text)
{
    Player_8236B638 *player = self->player;

    if (player->energy <= 0.0f) {
        if (text == 0) {
            fn_8229D418(player->game->logger->channel, lbl_820E975C, arg);
        } else {
            fn_8229D418(player->game->logger->channel, text, arg);
        }
    }
    player->energy = Select(player->energy - 2.0f, player->energy, 2.0f);
}
