#include "xdk/vectorintrinsics.h"

typedef struct Ref_82387EE8 {
    struct Ball_82387EE8 *p;
    void *rc;
} Ref_82387EE8;

typedef struct Ball_82387EE8 {
    char pad0[0x20];
    __vector4 position; /* 0x20 */
} Ball_82387EE8;

typedef struct Player_82387EE8 {
    char pad0[0x20];
    float score; /* 0x20 */
} Player_82387EE8;

typedef struct Team_82387EE8 {
    Player_82387EE8 **players; /* 0x0 */
    int pad4[3];
    int current; /* 0x10 */
} Team_82387EE8;

typedef struct Teams_82387EE8 {
    Team_82387EE8 *team0; /* 0x0 */
    Team_82387EE8 *team1; /* 0x4 */
} Teams_82387EE8;

typedef struct Shot_82387EE8 {
    int type; /* 0x0 */
    int pad4[3];
    __vector4 ball;     /* 0x10 */
    __vector4 velocity; /* 0x20 */
    __vector4 target;   /* 0x30 */
    __vector4 player;   /* 0x40 */
    int dive;           /* 0x50 */
    float power;        /* 0x54 */
    int teamId;         /* 0x58 */
    int playerId;       /* 0x5c */
    int event;          /* 0x60 */
    int pad64[3];
    int matchCounter; /* 0x70 */
    int rallyCounter; /* 0x74 */
} Shot_82387EE8;

typedef struct Game_82387EE8 {
    char pad0[0x8];
    Teams_82387EE8 **teams; /* 0x8 */
    char pad1[0x1f0];
    int touches; /* 0x1fc */
    char pad2[0x370];
    Shot_82387EE8 shot; /* 0x570 */
} Game_82387EE8;

typedef struct Self_82387EE8 {
    void *vt;
    Game_82387EE8 *game; /* 0x4 */
} Self_82387EE8;

extern const char *lbl_831DCCF0[];

extern void fn_82263430(int match, int rally, int scoringTeam, int touches, int score0, int score1,
                        __vector4 ballPos, const char *shot, __vector4 ball, __vector4 velocity,
                        __vector4 target, __vector4 pos, const char *dive, float power, int team, int player,
                        int event);
extern void fn_822315A0(void *);

void fn_82387EE8(Self_82387EE8 *self, int scoringTeam, Ref_82387EE8 *ball)
{
    Shot_82387EE8 *shot;
    const char *dive;
    Teams_82387EE8 *teams;

    shot = &self->game->shot;
    dive = "None";
    switch (shot->dive) {
    case 1:
        dive = "Forward";
        break;
    case 2:
        dive = "Left";
        break;
    case 4:
        dive = "Right";
        break;
    }
    teams = *self->game->teams;
    fn_82263430(shot->matchCounter, shot->rallyCounter, scoringTeam, self->game->touches,
                (int)teams->team0->players[teams->team0->current]->score,
                (int)teams->team1->players[teams->team1->current]->score, ball->p->position,
                lbl_831DCCF0[shot->type], shot->ball, shot->velocity, shot->target, shot->player, dive,
                shot->power, shot->teamId, shot->playerId, shot->event);
    if (ball->rc != 0) {
        fn_822315A0(ball->rc);
    }
}
