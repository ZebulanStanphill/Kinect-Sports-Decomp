#include <math.h>

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Shot_823990F0 {
    char pad0[0x10];
    __vector4 ballPos;      /* 0x10 */
    __vector4 ballVelocity; /* 0x20 */
    char pad30[0x234];
    float incomingSpin; /* 0x264 */
    float topSpin;      /* 0x268 */
    float strength;     /* 0x26C */
} Shot_823990F0;

typedef struct Player_823990F0 {
    char pad0[0x24];
    int event;    /* 0x24 */
    int playerId; /* 0x28 */
    int teamId;   /* 0x2C */
    char pad30[0x50];
    __vector4 position; /* 0x80 */
    char pad90[0x17C];
    void *primary;   /* 0x20C */
    void *secondary; /* 0x210 */
    int leftHanded;  /* 0x214 */
    char pad218[0x18];
    __vector4 target; /* 0x230 */
    char pad240[4];
    int backHand; /* 0x244 */
} Player_823990F0;

typedef struct Part_823990F0 {
    char pad0[0x40];
    unsigned short index; /* 0x40 */
    char pad42[2];
    void *source; /* 0x44 */
} Part_823990F0;

extern "C" int lbl_831C996C;

extern "C" __vector4 *fn_822B6A58(__vector4 *out, void *source, int index);
extern "C" void fn_82260130(int match, int leftHanded, const char *shotType, int backHand,
                            __vector4 inVelocity, float inSpin, float strength, __vector4 outVelocity,
                            float outSpin, __vector4 ball, __vector4 target, __vector4 pos, int team,
                            int player, int event);

extern "C" void fn_823990F0(Shot_823990F0 *shot, Player_823990F0 *player, __vector4 incomingVelocity)
{
    float topSpin = shot->topSpin;
    const char *spin = "Normal";
    __vector4 ballPos;
    __vector4 handPos;
    Part_823990F0 *part;

    if (topSpin > 0.0f) {
        spin = "TopSpin";
    } else if (topSpin < 0.0f) {
        spin = "BackSpin";
    }
    ballPos = shot->ballPos;
    if (player->primary != 0 || player->secondary != 0) {
        part = (Part_823990F0 *)player->secondary;
        if (part == 0) {
            part = (Part_823990F0 *)player->primary;
        }
        fn_822B6A58(&handPos, part->source, part->index);
    }
    fn_82260130(lbl_831C996C, player->leftHanded, spin, player->backHand, incomingVelocity,
                shot->incomingSpin, fabs(shot->strength), shot->ballVelocity, topSpin, ballPos,
                player->target, player->position, player->teamId, player->playerId, player->event != 0);
}
