typedef struct Options_8236BB40 {
    int pad0;
    unsigned char enabled; /* 0x04 */
} Options_8236BB40;

typedef struct Ball_8236BB40 {
    char pad0[0x24];
    int inPlay; /* 0x24 */
    char pad28[4];
    int holder; /* 0x2c */
    char pad30[0x138];
    void *owner; /* 0x168 */
    int caught;  /* 0x16c */
} Ball_8236BB40;

typedef struct Team_8236BB40 {
    float distance; /* 0x00 */
    char pad4[0x128];
} Team_8236BB40;

typedef struct Tuning_8236BB40 {
    char pad0[0x240];
    float maxLead; /* 0x240 */
} Tuning_8236BB40;

typedef struct Game_8236BB40 {
    char pad0[0x54];
    unsigned int homeState; /* 0x54 */
    unsigned int awayState; /* 0x58 */
    char pad5C[0x4B8 - 0x5C];
    void *crowd; /* 0x4b8 */
    char pad4BC[0x58C - 0x4BC];
    Team_8236BB40 teams[2]; /* 0x58c */
    char pad7E4[0x9A0 - 0x7E4];
    Ball_8236BB40 *ball; /* 0x9a0 */
    char pad9A4[0xAE8 - 0x9A4];
    char referee[0x40C]; /* 0xae8 */
    float position;      /* 0xef4 */
} Game_8236BB40;

extern Options_8236BB40 *lbl_832975B0;
extern Tuning_8236BB40 lbl_831D18A8;

extern unsigned char fn_82308E08(void *referee);
extern unsigned char fn_8288B760(void *owner);
extern int fn_82369160(Game_8236BB40 *game, int holder);
extern Options_8236BB40 *fn_82250A18(void);
extern int fn_823CC7A0(void);
extern void *fn_8287FD98(void);
extern float fn_8287CB50(void *timer);
extern void fn_823CC298(void *crowd, int event);

int fn_8236BB40(Game_8236BB40 *game)
{
    Ball_8236BB40 *ball;
    int held;
    int side;
    unsigned char attacking;
    Options_8236BB40 *options;
    Team_8236BB40 *team;
    float position;
    float line;

    if (game->awayState != 0x11 && game->homeState != 0x11 && fn_82308E08(game->referee))
        return 0;
    ball = game->ball;
    if (ball == 0 || ball->inPlay == 0)
        return 0;
    if (ball->owner != 0)
        held = fn_8288B760(ball->owner);
    else
        held = ball->caught;
    if (held == 0)
        return 0;
    side = fn_82369160(game, ball->holder);
    attacking = side == 2 || side == 1;
    if (!attacking) {
        options = lbl_832975B0 ? lbl_832975B0 : fn_82250A18();
        if (options->enabled == 0)
            return 0;
    }
    team = &game->teams[fn_823CC7A0()];
    position = game->position;
    line = team->distance;
    if (position >= fn_8287CB50(fn_8287FD98()) * 0.001f + line) {
        fn_823CC298(game->crowd, 0x20);
        return 1;
    }
    if (position >= line - (lbl_831D18A8.maxLead - line >= 0.0f ? line : lbl_831D18A8.maxLead))
        fn_823CC298(game->crowd, 0x1f);
    return 0;
}
