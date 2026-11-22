#include <math.h>

typedef struct Vec3_824AA530 {
    float x; /* 0x0 */
    float y; /* 0x4 */
    float z; /* 0x8 */
} Vec3_824AA530;

typedef struct Tracker_824AA168 Tracker_824AA168;

typedef struct TrackerVtbl_824AA168 {
    void *slots[10];
    float (*Evaluate)(Tracker_824AA168 *self, void *source); /* 0x28 */
} TrackerVtbl_824AA168;

struct Tracker_824AA168 {
    TrackerVtbl_824AA168 *vt; /* 0x00 */
    char pad04[0x30 - 0x04];
    float value; /* 0x30 */
    char pad34[0x3c - 0x34];
    int mirrored;    /* 0x3c */
    int matchesSide; /* 0x40 */
    int beyondLimit; /* 0x44 */
};

extern void fn_824AA530(Vec3_824AA530 *out, void *source, int first, int second);

void fn_824AA168(Tracker_824AA168 *self, void *source)
{
    int first = self->mirrored ? 6 : 10;
    int second = self->mirrored ? 5 : 9;
    Vec3_824AA530 a;
    Vec3_824AA530 b;
    float y;

    fn_824AA530(&a, source, first, second);
    fn_824AA530(&b, source, first, second);
    y = a.y;

    if (!(fabsf(y) > fabsf(b.y))) {
        y = b.y;
    }
    self->matchesSide = (y > 0.0f) == self->mirrored;
    self->beyondLimit = fabsf(y) > 1.7453293f;
    self->value = self->vt->Evaluate(self, source);
}
