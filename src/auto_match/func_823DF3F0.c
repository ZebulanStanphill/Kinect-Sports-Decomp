typedef struct Tuning_823DF3F0 {
    char pad0[0x1ac];
    float timeLimit;                /* 0x1ac */
} Tuning_823DF3F0;

typedef struct Info_823DF3F0 {
    char pad0[0xd4];
    int count;                      /* 0xd4 */
} Info_823DF3F0;

typedef struct Game_823DF3F0 {
    char pad0[0x4b0];
    Info_823DF3F0 *info;            /* 0x4b0 */
    char pad4b4[0xef0 - 0x4b4];
    float timer;                    /* 0xef0 */
    char padef4[0x134c - 0xef4];
    unsigned char flag;             /* 0x134c */
} Game_823DF3F0;

typedef struct State_823DF3F0 {
    char pad0[0x8];
    Game_823DF3F0 *game;            /* 0x08 */
} State_823DF3F0;

extern Tuning_823DF3F0 lbl_831D18A8;
extern const float lbl_821CA45C[2];
extern void fn_82359698(Game_823DF3F0 *game, int state);
extern void fn_8236B4F0(Game_823DF3F0 *game, float value);

void fn_823DF3F0(State_823DF3F0 *self, float dt)
{
    Game_823DF3F0 *game = self->game;
    game->timer += dt;
    if (game->timer > lbl_831D18A8.timeLimit) {
        if (game->flag) {
            game->flag = 0;
        }
        fn_82359698(game, 7);
        if (game->info->count == 0) {
            fn_8236B4F0(game, lbl_821CA45C[1]);
        }
    }
}
