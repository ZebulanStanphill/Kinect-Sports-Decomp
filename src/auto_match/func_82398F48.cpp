#include <math.h>

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Shot_82398F48 {
    char pad0[0x10];
    __vector4 ballPos;      /* 0x10 */
    __vector4 ballVelocity; /* 0x20 */
    char pad30[0x238];
    float topSpin;  /* 0x268 */
    float strength; /* 0x26C */
} Shot_82398F48;

typedef struct Player_82398F48 {
    char pad0[0x28];
    int playerId; /* 0x28 */
    int teamId;   /* 0x2C */
    char pad30[0x50];
    __vector4 position; /* 0x80 */
    char pad90[0x17C];
    void *primary;   /* 0x20C */
    void *secondary; /* 0x210 */
    int leftHanded;  /* 0x214 */
    char pad218[0x18];
    __vector4 nearSideBounce; /* 0x230 */
} Player_82398F48;

typedef struct Part_82398F48 {
    char pad0[0x40];
    unsigned short index; /* 0x40 */
    char pad42[2];
    void *source; /* 0x44 */
} Part_82398F48;

extern "C" int lbl_831C996C;

extern "C" __vector4 *fn_822B6A58(__vector4 *out, void *source, int index);
extern "C" void fn_8225FFE0(int matchCounter, __vector4 playerPos, int leftHanded, const char *shotType,
                            float shotStrength, __vector4 ballPos, __vector4 ballVelocity, float topSpin,
                            __vector4 nearSideBouncePos, int teamId, int playerId);

extern "C" void fn_82398F48(Shot_82398F48 *shot, Player_82398F48 *player)
{
    float topSpin = shot->topSpin;
    const char *spin = "Normal";
    __vector4 ballPos;
    __vector4 handPos;
    Part_82398F48 *part;

    if (topSpin > 0.0f) {
        spin = "TopSpin";
    } else if (topSpin < 0.0f) {
        spin = "BackSpin";
    }
    ballPos = shot->ballPos;
    if (player->primary != 0 || player->secondary != 0) {
        part = (Part_82398F48 *)player->secondary;
        if (part == 0) {
            part = (Part_82398F48 *)player->primary;
        }
        fn_822B6A58(&handPos, part->source, part->index);
    }
    fn_8225FFE0(lbl_831C996C, player->position, player->leftHanded, spin, fabs(shot->strength), ballPos,
                shot->ballVelocity, topSpin, player->nearSideBounce, player->teamId, player->playerId);
}
