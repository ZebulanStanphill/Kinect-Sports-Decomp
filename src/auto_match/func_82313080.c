#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_8329EA20; /* select mask: x, y, z from the first operand */

typedef union Timer_82313080 {
    float value;
    unsigned int bits;
} Timer_82313080;

typedef struct Object_82313080 {
    char pad0[0x80];
    __vector4 position; /* 0x80 */
} Object_82313080;

typedef struct Player_82313080 {
    char pad0[0x120];
    int ready; /* 0x120 */
} Player_82313080;

typedef struct State_82313080 {
    char pad0[0x10];
    __vector4 position; /* 0x10 */
    char pad20[4];
    int arrived;          /* 0x24 */
    Timer_82313080 timer; /* 0x28 */
} State_82313080;

extern int fn_823133E8(void *context, Object_82313080 *target, Player_82313080 *player, __vector4 *position);

int fn_82313080(State_82313080 *self, void *context, Object_82313080 *target, Player_82313080 *player,
                float dt)
{
    __vector4 zero;
    __vector4 zero2;
    __vector4 from;
    __vector4 to;
    __vector4 diff;
    __vector4 distanceSq;
    float left;

    if (self->arrived != 0) {
        if (self->timer.bits != 0) {
            left = self->timer.value - dt;
            self->timer.value = -left >= 0.0f ? 0.0f : left;
        }
        if (self->timer.value > 0.0f) {
            return 1;
        }
        self->timer.value = 0.0f;
        return 2;
    }
    if (fn_823133E8(context, target, player, &self->position) != 0) {
        zero = __VMXGetReg(77);
        zero2 = __VMXGetReg(77);
        from = __vsel(self->position, zero, lbl_8329EA20);
        to = __vsel(target->position, zero2, lbl_8329EA20);
        diff = __vsubfp(to, from);
        distanceSq = __vmsum3fp(diff, diff);
        if (distanceSq.vector4_f32[0] < 1.0f && player->ready != 0) {
            self->arrived = 1;
        }
    }
    return 1;
}
