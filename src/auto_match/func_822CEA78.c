#include "xdk/vectorintrinsics.h"

typedef struct Target_822CEA78 {
    char pad0[0x20];
    __vector4 position; /* 0x20 */
    char pad30[0x118 - 0x30];
    float speed; /* 0x118 */
    char pad11c[0x1b0 - 0x11c];
    float fixedSpeed; /* 0x1b0 */
} Target_822CEA78;

typedef struct TargetPtr_822CEA78 {
    Target_822CEA78 *object; /* 0x0 */
    void *rep;               /* 0x4 */
} TargetPtr_822CEA78;

typedef struct Mover_822CEA78 {
    char pad0[0x210];
    __vector4 position;  /* 0x210 */
    __vector4 direction; /* 0x220 */
    int hasDirection;    /* 0x230 */
    int active;          /* 0x234 */
    float speed;         /* 0x238 */
    char pad23c[0x340 - 0x23c];
    int fixed; /* 0x340 */
} Mover_822CEA78;

extern TargetPtr_822CEA78 *fn_82365BD8(TargetPtr_822CEA78 *out, TargetPtr_822CEA78 *in);
extern void fn_822CE290(Mover_822CEA78 *self, TargetPtr_822CEA78 *target, int mode);
extern void fn_822315A0(void *rep);

void fn_822CEA78(Mover_822CEA78 *self, TargetPtr_822CEA78 *target, int mode, const __vector4 *direction)
{
    TargetPtr_822CEA78 copy;

    if (direction != 0) {
        self->position = target->object->position;
        self->direction = *direction;
        self->hasDirection = 1;
        if (self->fixed != 0) {
            self->speed = target->object->fixedSpeed;
        } else {
            self->speed = target->object->speed;
            fn_822CE290(self, fn_82365BD8(&copy, target), mode);
        }
        self->active = 1;
    } else {
        self->hasDirection = 0;
    }
    if (target->rep != 0)
        fn_822315A0(target->rep);
}
