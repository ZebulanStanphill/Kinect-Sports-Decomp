#include "xdk/vectorintrinsics.h"

typedef struct Tuning_8240ED00 {
    char pad0[0x15a4];
    float offset; /* 0x15A4 */
    float height; /* 0x15A8 */
    char pad15ac[0x4];
    float params[6]; /* 0x15B0 */
} Tuning_8240ED00;

typedef struct Owner_8240ED00 {
    Tuning_8240ED00 *tuning; /* 0x000 */
    char pad4[0x9c];
    char activePool[0x70]; /* 0x0A0 */
    char idlePool[0x100];  /* 0x110 */
    __vector4 colourA;     /* 0x210 */
    __vector4 colourB;     /* 0x220 */
} Owner_8240ED00;

typedef struct Target_8240ED00 {
    char pad0[0x50];
    __vector4 position; /* 0x50 */
} Target_8240ED00;

typedef struct Ball_8240ED00 {
    char pad0[0x24];
    Owner_8240ED00 *owner;   /* 0x24 */
    Target_8240ED00 *target; /* 0x28 */
    int state;               /* 0x2C */
    int idle;                /* 0x30 */
    char pad34[0x10];
    int muted; /* 0x44 */
    char pad48[0x48];
    float time; /* 0x90 */
    char pad94[0xc];
    __vector4 boundsMin; /* 0xA0 */
    __vector4 boundsMax; /* 0xB0 */
    float x;             /* 0xC0 */
    float y;             /* 0xC4 */
    float z;             /* 0xC8 */
    char padcc[0x4];
    float flashTime;       /* 0xD0 */
    unsigned int flashing; /* 0xD4 */
    char padd8[0x184];
    float cooldown; /* 0x25C */
} Ball_8240ED00;

extern int fn_8253A918(const __vector4 *point, const __vector4 *low, const __vector4 *high);
extern void fn_8240E9B8(Ball_8240ED00 *self);
extern void fn_82416D20(void *pool, Ball_8240ED00 *ball);
extern void fn_824107D0(Ball_8240ED00 *self);
extern void fn_82410E40(Ball_8240ED00 *self, float dt);
extern void fn_82411788(Ball_8240ED00 *self, float dt);
extern float fn_82539560(float x, float inMin, float inMax, float outMin, float outMax);
extern void fn_824ED9E8(float x, float y, float z, float a, float b, float c, float d, float e, float f,
                        unsigned int flashing, __vector4 colourA, __vector4 colourB, float fade, int mode,
                        int id);

void fn_8240ED00(Ball_8240ED00 *self, float dt)
{
    switch (self->state) {
    case 0: {
        __vector4 position = self->target->position;
        if (fn_8253A918(&position, &self->boundsMin, &self->boundsMax) == 0) {
            Owner_8240ED00 *owner;
            fn_8240E9B8(self);
            owner = self->owner;
            fn_82416D20(self->idle == 0 ? owner->activePool : owner->idlePool, self);
        }
        break;
    }
    case 2:
        self->time = dt + self->time;
        if (self->muted == 0) {
            fn_824107D0(self);
        }
        break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
        fn_82410E40(self, dt);
        break;
    case 9:
        fn_82411788(self, dt);
        break;
    }
    if (self->flashTime > 0.0f) {
        float remaining = self->flashTime - dt;
        self->flashTime = -remaining >= 0.0f ? 0.0f : remaining;
        if (self->flashing) {
            Owner_8240ED00 *owner = self->owner;
            Tuning_8240ED00 *tuning = owner->tuning;
            float offset = tuning->offset;
            float fade = fn_82539560(1.0f - self->flashTime, 0.0f, 1.0f, 1.0f, 0.0f);
            fn_824ED9E8(self->x + offset, tuning->height + self->y, self->z + offset, tuning->params[0],
                        tuning->params[1], tuning->params[2], tuning->params[3], tuning->params[4],
                        tuning->params[5], self->flashing, owner->colourA, owner->colourB, fade, 2, -1);
        }
    }
    {
        float remaining = self->cooldown - dt;
        self->cooldown = remaining >= 0.0f ? remaining : 0.0f;
    }
}
