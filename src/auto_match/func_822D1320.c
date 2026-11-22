typedef struct Owner_822D1320 {
    char pad0[0x2c];
    int team; /* 0x2c */
    char pad30[0x310 - 0x30];
    int neutral; /* 0x310 */
} Owner_822D1320;

typedef struct Actor_822D1320 {
    char pad0[0x14];
    Owner_822D1320 *owner; /* 0x14 */
} Actor_822D1320;

typedef struct Target_822D1320 {
    char pad0[0x2c];
    int team; /* 0x2c */
    char pad30[0x2a4 - 0x30];
    int allowZero; /* 0x2a4 */
} Target_822D1320;

int fn_822D1320(Actor_822D1320 *actor, Target_822D1320 *target, float value, int forced)
{
    if (forced != 0) {
        return value < 0.0f;
    }
    if (actor->owner->team == target->team || actor->owner->neutral != 0) {
        if (value < 0.0f) {
            return 0;
        }
        return 1;
    }
    if (value == 0.0f) {
        return target->allowZero != 0;
    }
    if (value < 0.0f) {
        return value > -0.5f ? 0 : 1;
    }
    return value > 0.5f ? 0 : 1;
}
