#include "xdk/vectorintrinsics.h"

typedef struct Source_8234D950 {
    char pad0[0x50];
    __vector4 position; /* 0x50 */
    char pad60[0xa0 - 0x60];
    __vector4 velocity; /* 0xa0 */
    char padb0[0xc0 - 0xb0];
    __vector4 rotation; /* 0xc0 */
    char padd0[0x8bc - 0xd0];
    float speed; /* 0x8bc */
} Source_8234D950;

typedef struct Tracker_8234D950 {
    __vector4 target; /* 0x00 */
    int locked;       /* 0x10 */
    char pad14[0x30 - 0x14];
    __vector4 candidate;     /* 0x30 */
    int requested;           /* 0x40 */
    int active;              /* 0x44 */
    Source_8234D950 *source; /* 0x48 */
    char pad4c[0xc8 - 0x4c];
    void *lockTarget; /* 0xc8 */
    int lockPending;  /* 0xcc */
    int forced;       /* 0xd0 */
    float weight;     /* 0xd4 */
} Tracker_8234D950;

extern const float lbl_821CA45C[2];
extern void fn_82564720(Tracker_8234D950 *tracker, float blend, float weight, __vector4 position,
                        __vector4 rotation, __vector4 velocity);

void fn_8234D950(Tracker_8234D950 *self, float blend)
{
    Source_8234D950 *source;

    if (self->requested != 0 && (self->forced != 0 || (self->lockTarget == 0 && self->lockPending == 0))) {
        self->locked = 1;
        self->active = 1;
        self->target = self->candidate;
    } else {
        self->active = 0;
        self->weight = lbl_821CA45C[1];
    }
    self->requested = 0;
    self->lockPending = 0;
    source = self->source;
    fn_82564720(self, blend, self->weight, source->position, source->rotation,
                __vmulfp(source->velocity, __vspltw(__lvlx(&source->speed, 0), 0)));
}
