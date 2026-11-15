typedef struct Player_82423728 {
    char reserved[0x30];
    unsigned int score; /* 0x30 */
    char reserved34[0x174];
    unsigned int rounds; /* 0x1a8 */
} Player_82423728;

typedef struct Match_82423728 {
    char reserved[8];
    Player_82423728 *begin; /* 8 */
    Player_82423728 *end;   /* 0xc */
    char reserved10[0x3f8];
    unsigned int id; /* 0x408 */
} Match_82423728;

extern unsigned char *fn_8225F670(void);
extern void fn_8225F6D0(void);
extern int fn_8225FDE0(int event, int enabled);
extern unsigned char fn_82E1CAD0(int event);
extern void fn_82E1CD30(void);
extern void fn_82E1CB88(const char *name, unsigned int value);
extern void fn_82E1CB40(const char *name, unsigned int value);
extern void fn_82E1CCA8(void);
extern void fn_82E1CA30(void);

void fn_82423728(char *self)
{
    Match_82423728 *match = *(Match_82423728 **)(self + 4);
    Player_82423728 *players = match->begin;
    unsigned int count = match->end - players;
    unsigned int rounds4 = count > 3 ? players[3].rounds : 0;
    unsigned int score4 = count > 3 ? players[3].score : 0;
    unsigned int rounds3 = count > 2 ? players[2].rounds : 0;
    unsigned int score3 = count > 2 ? players[2].score : 0;
    unsigned int rounds2 = count > 1 ? players[1].rounds : 0;
    unsigned int score2 = count > 1 ? players[1].score : 0;
    int mode = *(int *)(*(int *)(self + 8) + 0xa0);
    unsigned int party;
    unsigned int id;
    unsigned int rounds;
    unsigned int score;
    if (mode != 0 && *(unsigned int *)(mode + 0x40) == 1) {
        party = 1;
    } else {
        party = 0;
    }
    id = match->id;
    rounds = players[0].rounds;
    score = players[0].score;
    if (*fn_8225F670() != 0 && fn_8225FDE0(0x4b, 1) == 0 && fn_82E1CAD0(0x4b) != 0) {
        fn_82E1CD30();
        fn_82E1CB88("MatchId", id);
        fn_82E1CB40("IsPartyMode", party != 0);
        fn_82E1CB88("PlayerScore", score);
        fn_82E1CB88("NumberOfRoundsPlayed", rounds);
        fn_82E1CB88("Player2Score", score2);
        fn_82E1CB88("Player2NumberOfRoundsPlayed", rounds2);
        fn_82E1CB88("Player3Score", score3);
        fn_82E1CB88("Player3NumberOfRoundsPlayed", rounds3);
        fn_82E1CB88("Player4Score", score4);
        fn_82E1CB88("Player4NumberOfRoundsPlayed", rounds4);
        fn_82E1CCA8();
        fn_82E1CA30();
    }
    fn_8225F6D0();
}
