#include "xdk/vectorintrinsics.h"

double fabs(double x);

typedef struct Vec_829DDC18 {
    __vector4 v;
} Vec_829DDC18;

typedef struct Target_829DDC18 {
    unsigned char enabled; /* 0x0 */
    char pad1[3];
    float value;     /* 0x4 */
    float tolerance; /* 0x8 */
} Target_829DDC18;

typedef struct Targets_829DDC18 {
    __vector4 head;           /* 0x00 */
    Target_829DDC18 items[8]; /* 0x10 */
} Targets_829DDC18;

typedef struct Samples_829DDC18 {
    unsigned int count; /* 0x0 */
    char data[0x25c];
} Samples_829DDC18;

typedef struct Tracker_829DDC18 {
    char pad00[0x14];
    int index;                   /* 0x14 */
    Samples_829DDC18 samples[8]; /* 0x18 */
} Tracker_829DDC18;

typedef struct Tolerance_829DDC18 {
    float minimum; /* 0x0 */
    float scale;   /* 0x4 */
} Tolerance_829DDC18;

typedef struct Settings_829DDC18 {
    char pad0[0x8f0c4];
    Tolerance_829DDC18 tolerance; /* 0x8f0c4 */
} Settings_829DDC18;

typedef struct Listener_829DDC18 Listener_829DDC18;

typedef struct ListenerVtbl_829DDC18 {
    void *slot0;
    void *slot1;
    void *slot2;
    void (*Report)(Listener_829DDC18 *self, int state, float distance); /* 0xc */
} ListenerVtbl_829DDC18;

struct Listener_829DDC18 {
    ListenerVtbl_829DDC18 *vt;
};

extern Settings_829DDC18 *lbl_832179FC;
extern Listener_829DDC18 *lbl_83217A00;

extern Vec_829DDC18 fn_829DD678(Tracker_829DDC18 *self);
extern unsigned char fn_829DD700(__vector4 a, __vector4 b);
extern float fn_829DD850(Samples_829DDC18 *samples);

void fn_829DDC18(Tracker_829DDC18 *self, Targets_829DDC18 *targets, int *state, float *distance)
{
    Target_829DDC18 *target;
    Samples_829DDC18 *samples;

    *state = 4;
    *distance = -1.0f;
    samples = &self->samples[self->index];
    target = &targets->items[self->index];
    if (target->enabled != 0 && samples->count > 0) {
        if (fn_829DD700(targets->head, fn_829DD678(self).v)) {
            Tolerance_829DDC18 *limits;
            float difference;
            float tolerance;
            int result;

            difference = (float)fabs(fn_829DD850(samples) - target->value);
            *distance = difference;
            limits = &lbl_832179FC->tolerance;
            tolerance = limits->scale * target->tolerance;
            if (limits->minimum > tolerance) {
                tolerance = limits->minimum;
            }
            *state = difference <= tolerance ? 1 : 2;
        }
    }
    if (lbl_83217A00 != 0) {
        lbl_83217A00->vt->Report(lbl_83217A00, *state, *distance);
    }
}
