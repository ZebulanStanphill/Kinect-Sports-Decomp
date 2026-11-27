#include "xdk/vectorintrinsics.h"

typedef struct Body_8253FB70 {
    char pad0[0x8];
    int world; /* 0x08 */
    char padc[0x20];
    int motionType; /* 0x2c */
} Body_8253FB70;

typedef union Timer_8253FB70 {
    float value;
    unsigned int bits;
} Timer_8253FB70;

typedef struct Grab_8253FB70 {
    Body_8253FB70 *body; /* 0x00 */
    char pad4[0x64];
    int wanted;           /* 0x68 */
    int active;           /* 0x6c */
    int savedType;        /* 0x70 */
    float alpha;          /* 0x74 */
    Timer_8253FB70 retry; /* 0x78 */
} Grab_8253FB70;

typedef struct Self_8253FB70 {
    char pad0[0x50];
    __vector4 position; /* 0x50 */
    char pad60[0x60];
    __vector4 rotation; /* 0xc0 */
    char padd0[0x6f0];
    Grab_8253FB70 grab; /* 0x7c0 */
    char pad83c[0x300];
    float dt; /* 0xb3c */
} Self_8253FB70;

extern void fn_82D85148(int world, Body_8253FB70 *body, int a, int b);
extern int fn_8253E960(Self_8253FB70 *self, Body_8253FB70 *body, __vector4 position, __vector4 rotation,
                       int filterInfo);
extern void fn_8252AFE0(Self_8253FB70 *self, float alpha);

void fn_8253FB70(Self_8253FB70 *self)
{
    Grab_8253FB70 *grab;
    float left;

    grab = &self->grab;
    if (grab->body == 0) {
        return;
    }
    if (grab->wanted != 0 && grab->active == 0) {
        grab->active = 1;
        grab->savedType = grab->body->motionType;
        grab->body->motionType = 8;
        fn_82D85148(grab->body->world, grab->body, 0, 1);
    }
    if (grab->wanted == 0 && grab->active != 0) {
        grab->active = 0;
        grab->body->motionType = grab->savedType;
        fn_82D85148(grab->body->world, grab->body, 0, 1);
    }
    if (grab->active != 0 && grab->retry.bits != 0) {
        left = grab->retry.value - self->dt;
        grab->retry.value = -left >= 0.0f ? 0.0f : left;
        if (grab->retry.value == 0.0f) {
            if (fn_8253E960(self, grab->body, self->position, self->rotation, grab->savedType) != 0) {
                grab->body->motionType = grab->savedType;
                fn_82D85148(grab->body->world, grab->body, 0, 1);
                fn_8252AFE0(self, grab->alpha);
                grab->active = 0;
                grab->wanted = 0;
            } else {
                grab->retry.value = 1.0f;
            }
        }
    }
}
