#include <math.h>

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Shot_823D82F8 {
    float power; /* 0x00 */
    float angle; /* 0x04 */
    int level;   /* 0x08 */
    int kind;    /* 0x0c */
    unsigned char pad10[0x8];
    unsigned char flag; /* 0x18 */
    unsigned char pad19[0x7];
    __vector4 target;    /* 0x20 */
    __vector4 direction; /* 0x30 */
    float spin;          /* 0x40 */
    int team;            /* 0x44 */
    unsigned char sideA; /* 0x48 */
    unsigned char sideB; /* 0x49 */
} Shot_823D82F8;

typedef struct Request_823D82F8 {
    int player;          /* 0x00 */
    int target;          /* 0x04 */
    int mode;            /* 0x08 */
    int extra;           /* 0x0c */
    int level;           /* 0x10 */
    unsigned char sideA; /* 0x14 */
    unsigned char sideB; /* 0x15 */
    __vector4 direction; /* 0x20 */
} Request_823D82F8;

typedef struct Tuning_823D82F8 {
    unsigned char pad0[0x138];
    float powerMin;    /* 0x138 */
    float powerMax;    /* 0x13c */
    float strongLimit; /* 0x140 */
    float weakLimit;   /* 0x144 */
    unsigned char pad148[0x138];
} Tuning_823D82F8;

extern void fn_823D84A0(void *self, const Request_823D82F8 *request, int kind, unsigned char flag,
                        float scale, float spin, int team, int count, __vector4 target);
extern Tuning_823D82F8 lbl_831D18A8;
extern unsigned int lbl_83265A28;

static __forceinline float Select_823D82F8(float condition, float a, float b)
{
    return condition >= 0.0f ? a : b;
}

static __forceinline Request_823D82F8 MakeRequest_823D82F8(int player, int target, int mode, int extra,
                                                           int level, Shot_823D82F8 *shot)
{
    Request_823D82F8 request;

    request.player = player;
    request.target = target;
    request.mode = mode;
    request.extra = extra;
    request.level = level;
    request.sideA = shot->sideA;
    request.sideB = shot->sideB;
    request.direction = shot->direction;
    return request;
}

void fn_823D82F8(void *self, int player, int target, int mode, int extra, Shot_823D82F8 *shot)
{
    Request_823D82F8 request;
    int level;
    int kind;
    float strength;

    union {
        unsigned int i;
        float f;
    } random;

    level = shot->level;
    if (level == 0) {
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        random.i = lbl_83265A28 & 0x7fffff | 0x3f800000;
        strength = (3.1415927f - fabsf(shot->angle)) / 3.1415927f;
        strength = strength * shot->power;
        strength = strength * (lbl_831D18A8.powerMin +
                               (lbl_831D18A8.powerMax - lbl_831D18A8.powerMin) * (random.f - 1.0f));
        strength = Select_823D82F8(strength, strength, 0.0f);
        strength = Select_823D82F8(strength - 1.0f, 1.0f, strength);
        level = 2;
        if (strength > lbl_831D18A8.strongLimit) {
            level = 1;
        } else if (strength < lbl_831D18A8.weakLimit) {
            level = 3;
        }
    }
    kind = shot->kind;
    request = MakeRequest_823D82F8(player, target, mode, extra, level, shot);
    if (kind != 0) {
        fn_823D84A0(self, &request, kind, shot->flag, 100.0f, shot->spin, shot->team, 2, shot->target);
    }
}
