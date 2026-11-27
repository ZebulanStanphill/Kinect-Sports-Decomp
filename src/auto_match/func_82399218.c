#include <math.h>

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Player_82399218 {
    char pad0[0x20];
    float score; /* 0x20 */
} Player_82399218;

typedef struct Team_82399218 {
    Player_82399218 **players; /* 0x0 */
    int pad4[3];
    int current; /* 0x10 */
} Team_82399218;

typedef struct PlayerInfo_82399218 {
    char pad000[0x24];
    int eventId;  /* 0x24 */
    int playerId; /* 0x28 */
    int teamId;   /* 0x2c */
    char pad030[0x50];
    __vector4 position; /* 0x80 */
    char pad090[0x184];
    int leftHanded; /* 0x214 */
    char pad218[0x2c];
    int backHand; /* 0x244 */
} PlayerInfo_82399218;

typedef struct Rules_82399218 Rules_82399218;

typedef struct RulesVtbl_82399218 {
    void *slots00[0x3c / 4];
    int (*GetShotCounter)(Rules_82399218 *self); /* 0x3c */
    void *slots40[(0x7c - 0x40) / 4];
    int (*GetHittingTeam)(Rules_82399218 *self);            /* 0x7c */
    unsigned int (*GetHittingPlayer)(Rules_82399218 *self); /* 0x80 */
} RulesVtbl_82399218;

struct Rules_82399218 {
    RulesVtbl_82399218 *vt;
};

typedef struct Game_82399218 {
    char pad000[0x8];
    Team_82399218 ***teams; /* 0x8 */
    char pad00c[0x2d4];
    Rules_82399218 *rules; /* 0x2e0 */
} Game_82399218;

typedef struct Shot_82399218 {
    char pad000[0x10];
    __vector4 ballEndPos; /* 0x10 */
    char pad020[0x248];
    float spin;     /* 0x268 */
    float strength; /* 0x26c */
    char pad270[0x10];
    __vector4 ballVelocity; /* 0x280 */
    __vector4 ballStartPos; /* 0x290 */
} Shot_82399218;

extern int lbl_831C996C;
extern PlayerInfo_82399218 *fn_822ABA88(void *map, unsigned int key);
extern void fn_822602C0(int matchCounter, int playerScore, int aiScore, int shotCounter,
                        __vector4 ballStartPos, const char *shotType, int leftHanded, int backHand,
                        float shotStrength, __vector4 ballVelocity, float ballSpin, __vector4 ballEndPos,
                        int eventId, int teamId, int playerId, __vector4 playerPos);

void fn_82399218(Game_82399218 *self, Shot_82399218 *shot)
{
    Team_82399218 *team;
    PlayerInfo_82399218 *info;
    const char *shotType;
    Team_82399218 **teams;
    float playerScore;
    float aiScore;
    int matchCounter;
    float strength;
    int playerId;
    int teamId;
    int leftHanded;
    int backHand;

    team = (*self->teams)[self->rules->vt->GetHittingTeam(self->rules)];
    info = fn_822ABA88(team->players[team->current], self->rules->vt->GetHittingPlayer(self->rules));
    shotType = "Normal";
    if (shot->spin > 0.0f) {
        shotType = "TopSpin";
    } else if (shot->spin < 0.0f) {
        shotType = "BackSpin";
    }
    teams = *self->teams;
    playerId = info->playerId;
    teamId = info->teamId;
    leftHanded = info->leftHanded;
    backHand = info->backHand;
    strength = fabsf(shot->strength);
    aiScore = teams[1]->players[teams[1]->current]->score;
    playerScore = teams[0]->players[teams[0]->current]->score;
    matchCounter = lbl_831C996C;
    fn_822602C0(matchCounter, (int)playerScore, (int)aiScore, self->rules->vt->GetShotCounter(self->rules),
                shot->ballStartPos, shotType, leftHanded, backHand, strength, shot->ballVelocity, shot->spin,
                shot->ballEndPos, info->eventId != 0, teamId, playerId, info->position);
}
