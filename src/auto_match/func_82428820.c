typedef struct Player_82428820 {
    char reserved[0x30];
    unsigned int score; /* 0x30 */
    char reserved34[0x168];
    unsigned int timeBonuses; /* 0x19c */
    unsigned int ballsLeft;   /* 0x1a0 */
    unsigned int ballsRight;  /* 0x1a4 */
    char reserved1a8[0x4];
} Player_82428820;

typedef struct Match_82428820 {
    char reserved[8];
    Player_82428820 *begin; /* 0x08 */
    Player_82428820 *end;   /* 0x0c */
    char reserved10[0x3f8];
    unsigned int id; /* 0x408 */
} Match_82428820;

typedef struct Mode_82428820 {
    char reserved[0x40];
    unsigned int type; /* 0x40 */
} Mode_82428820;

typedef struct Game_82428820 {
    char reserved[0xa0];
    int mode; /* 0xa0: Mode_82428820 * */
} Game_82428820;

typedef struct Self_82428820 {
    int reserved;
    Match_82428820 *match; /* 0x04 */
    Game_82428820 *game;   /* 0x08 */
} Self_82428820;

extern void fn_82262440(unsigned int matchId, int partyMode, unsigned int score, unsigned int timeBonuses,
                        unsigned int balls, unsigned int ballsLeft, unsigned int ballsRight,
                        unsigned int score2, unsigned int timeBonuses2, unsigned int balls2,
                        unsigned int ballsLeft2, unsigned int ballsRight2, unsigned int score3,
                        unsigned int timeBonuses3, unsigned int balls3, unsigned int ballsLeft3,
                        unsigned int ballsRight3, unsigned int score4, unsigned int timeBonuses4,
                        unsigned int balls4, unsigned int ballsLeft4, unsigned int ballsRight4);

static __forceinline unsigned int IsPartyMode(Game_82428820 *game)
{
    int mode = game->mode;

    if (mode != 0 && ((Mode_82428820 *)mode)->type == 1)
        return 1;
    return 0;
}

void fn_82428820(Self_82428820 *self)
{
    Match_82428820 *match = self->match;
    Player_82428820 *players = match->begin;
    unsigned int count = match->end - players;
    fn_82262440(match->id, IsPartyMode(self->game) != 0, players[0].score, players[0].timeBonuses,
                players[0].ballsLeft + players[0].ballsRight, players[0].ballsLeft, players[0].ballsRight,
                count > 1 ? players[1].score : 0, count > 1 ? players[1].timeBonuses : 0,
                count > 1 ? players[1].ballsLeft + players[1].ballsRight : 0,
                count > 1 ? players[1].ballsLeft : 0, count > 1 ? players[1].ballsRight : 0,
                count > 2 ? players[2].score : 0, count > 2 ? players[2].timeBonuses : 0,
                count > 2 ? players[2].ballsLeft + players[2].ballsRight : 0,
                count > 2 ? players[2].ballsLeft : 0, count > 2 ? players[2].ballsRight : 0,
                count > 3 ? players[3].score : 0, count > 3 ? players[3].timeBonuses : 0,
                count > 3 ? players[3].ballsLeft + players[3].ballsRight : 0,
                count > 3 ? players[3].ballsLeft : 0, count > 3 ? players[3].ballsRight : 0);
}
