/* Bowling pin hits: in a replay, triggers the recorded pin hit; otherwise finds the strongest
   pin hit, triggers the first upward hit inside the lane box, and adds the hit strength
   (remapped, capped at the player's maximum) to the accumulated push. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, int element);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);

typedef struct Hit_82412308 {
    __vector4 position;  /* 0x00 */
    __vector4 direction; /* 0x10 */
    char pad20[0x94 - 0x20];
    void *owner; /* 0x94 */
    char pad98[4];
    unsigned int flags; /* 0x9c */
    char padA0[4];
    float strength; /* 0xa4 */
    char padA8[0xd0 - 0xa8];
} Hit_82412308;

typedef struct Player_82412308 {
    char pad0[0x278];
    float maxRange; /* 0x278 */
    char pad27C[0x2f4 - 0x27c];
    float minStrength; /* 0x2f4 */
    char pad2F8[0xa20 - 0x2f8];
    int pushEnabled;    /* 0xa20 */
    float pushRange[4]; /* 0xa24 */
    float pushMax;      /* 0xa34 */
    char padA38[4];
    int secondSide; /* 0xa3c */
} Player_82412308;

typedef struct Control_82412308 {
    Player_82412308 *player; /* 0x000 */
    char pad4[0x1e0 - 4];
    __vector4 pushDirection; /* 0x1e0 */
    char pad1F0[0x210 - 0x1f0];
    __vector4 boxMin; /* 0x210 */
    __vector4 boxMax; /* 0x220 */
} Control_82412308;

typedef struct World_82412308 {
    char pad0[0x50];
    __vector4 position; /* 0x050 */
    char pad60[0x380 - 0x60];
    Hit_82412308 *hitsBegin; /* 0x380 */
    Hit_82412308 *hitsEnd;   /* 0x384 */
} World_82412308;

typedef struct Self_82412308 {
    char pad0[8];
    int replay; /* 0x008 */
    char padC[0x24 - 0xc];
    Control_82412308 *control; /* 0x024 */
    World_82412308 *world;     /* 0x028 */
    char pad2C[0x34 - 0x2c];
    int triggered; /* 0x034 */
    char pad38[0x48 - 0x38];
    float distance; /* 0x048 */
    char pad4C[0x8c - 0x4c];
    float push; /* 0x08c */
    char pad90[0xd0 - 0x90];
    float delay; /* 0x0d0 */
    char padD4[0x110 - 0xd4];
    int firstPushSet; /* 0x110 */
    char pad114[0x120 - 0x114];
    __vector4 firstPush; /* 0x120 */
    int secondPushSet;   /* 0x130 */
    char pad134[0x140 - 0x134];
    __vector4 secondPush; /* 0x140 */
} Self_82412308;

extern const __vector4 lbl_821962E0;
/* Tuning table; element 0x36 (0.9f) is the minimum upward component of a pin hit. It is read as a
   variable: a literal would be kept in a register across the loop. */
extern const float lbl_82191EA0[0xd0];

extern void *fn_8241CEB8(Control_82412308 *control, Self_82412308 *self, int kind);
extern void fn_82412588(Self_82412308 *self, __vector4 position);
extern int fn_8253A918(const void *point, const __vector4 *lo, const __vector4 *hi);
extern float fn_82539560(float x, float inMin, float inMax, float outMin, float outMax);

static __forceinline __vector4 Replicate(float value)
{
    __vector4 v = __lvlx(&value, 0);
    return __vspltw(v, 0);
}

void fn_82412308(Self_82412308 *self)
{
    Hit_82412308 *hit;
    Hit_82412308 *end;
    Player_82412308 *player;
    Control_82412308 *control;
    float best;
    float strength;
    float add;
    float room;
    float total;
    float max;
    float current;
    int found;
    __vector4 boxMin;
    __vector4 boxMax;
    __vector4 dot;

    if (self->replay != 0) {
        if (fn_8241CEB8(self->control, self, 3) != 0) {
            fn_82412588(self, self->world->position);
        }
        return;
    }
    control = self->control;
    hit = self->world->hitsBegin;
    end = self->world->hitsEnd;
    found = 0;
    boxMin = control->boxMin;
    boxMax = control->boxMax;
    best = control->player->pushRange[0];
    for (; hit < end; hit++) {
        if (hit->owner == 0 || (hit->flags & 1) == 0) {
            continue;
        }
        strength = hit->strength;
        if (strength > best) {
            found = 1;
            best = strength;
        }
        if (self->distance < self->control->player->maxRange && self->delay == 0.0f &&
            strength > self->control->player->minStrength && fn_8253A918(hit, &boxMin, &boxMax) != 0) {
            dot = __vmsum3fp(hit->direction, lbl_821962E0);
            if (dot.vector4_f32[0] > lbl_82191EA0[0x36] && self->triggered == 0) {
                fn_82412588(self, hit->position);
            }
        }
    }
    if (self->triggered != 0) {
        return;
    }
    control = self->control;
    player = control->player;
    if (player->pushEnabled == 0 || found == 0) {
        return;
    }
    add = fn_82539560(best, player->pushRange[0], player->pushRange[1], player->pushRange[2],
                      player->pushRange[3]);
    current = self->push;
    total = current + add;
    max = player->pushMax;
    room = max - current;
    add = add - room >= 0.0f ? room : add;
    self->push = max - total >= 0.0f ? total : max;
    if (control->player->secondSide == 0) {
        self->firstPushSet = 1;
        self->firstPush = __vmulfp(control->pushDirection, Replicate(-add));
    } else {
        self->secondPushSet = 1;
        self->secondPush = __vmulfp(control->pushDirection, Replicate(-add));
    }
}
