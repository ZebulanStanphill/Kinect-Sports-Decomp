#include "xdk/vectorintrinsics.h"

typedef struct Tracker_824D45B0 {
    char *vt; /* 0x00 */
    char pad4[0xc];
    void *target; /* 0x10 */
    char pad14[0xc];
    __vector4 points[2]; /* 0x20 */
    char pad40[0x14];
    int enabledA;   /* 0x54 */
    int enabledB;   /* 0x58 */
    float distance; /* 0x5c */
    void *first;    /* 0x60 */
    float elapsed;  /* 0x64 */
    char pad68[0x4];
    void *second; /* 0x6c */
    int activeA;  /* 0x70 */
    int activeB;  /* 0x74 */
    void *third;  /* 0x78 */
    char pad7c[0x4];
} Tracker_824D45B0;

typedef struct Self_824D45B0 {
    char pad0[0xf0];
    void *controller;          /* 0xf0 */
    Tracker_824D45B0 *tracker; /* 0xf4 */
} Self_824D45B0;

extern void *fn_8265C9E0(int size);
extern void *fn_824DA9F8(void *mem, Self_824D45B0 *owner, char *settings);
extern char lbl_821C0F04[];

static __forceinline Tracker_824D45B0 *TrackerCtor(Tracker_824D45B0 *tracker)
{
    int i;

    tracker->first = 0;
    tracker->second = 0;
    tracker->third = 0;
    tracker->target = 0;
    tracker->vt = lbl_821C0F04;
    tracker->distance = 9999.0f;
    for (i = 0; i < 2; i++) {
        tracker->points[i] = __VMXGetReg(77);
    }
    tracker->distance = 9999.0f;
    tracker->enabledA = 1;
    tracker->enabledB = 1;
    tracker->elapsed = 0.0f;
    tracker->activeA = 1;
    tracker->activeB = 1;
    return tracker;
}

void fn_824D45B0(Self_824D45B0 *self, char *config)
{
    void *mem;

    mem = fn_8265C9E0(0x430);
    self->controller = mem ? fn_824DA9F8(mem, self, config + 0x48) : 0;
    mem = fn_8265C9E0(0x80);
    self->tracker = mem ? TrackerCtor((Tracker_824D45B0 *)mem) : 0;
}
