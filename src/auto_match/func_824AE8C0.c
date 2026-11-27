#include "xdk/vectorintrinsics.h"

typedef struct History_824AE8C0 {
    void *first;        /* 0x0 */
    void *end;          /* 0x4 */
    void *begin;        /* 0x8 */
    void *last;         /* 0xc */
    unsigned int count; /* 0x10 */
} History_824AE8C0;

typedef struct Source_824AE8C0 {
    char pad0[0x48];
    float scale; /* 0x48 */
} Source_824AE8C0;

typedef struct Tracker_824AE8C0 {
    void *vt;                 /* 0x0 */
    History_824AE8C0 history; /* 0x4 */
    char pad18[0x8];
    __vector4 position; /* 0x20 */
    int samples;        /* 0x30 */
    float elapsed;      /* 0x34 */
    int enabled;        /* 0x38 */
    char pad3C[0x4];
    __vector4 velocity; /* 0x40 */
    float minimum;      /* 0x50 */
    float threshold;    /* 0x54 */
    float offset;       /* 0x58 */
    float limitA;       /* 0x5c */
    float limitB;       /* 0x60 */
    float bias;         /* 0x64 */
    float rateA;        /* 0x68 */
    float rateB;        /* 0x6c */
    int state;          /* 0x70 */
    float scale;        /* 0x74 */
    float angleA;       /* 0x78 */
    float angleB;       /* 0x7c */
    float angleC;       /* 0x80 */
} Tracker_824AE8C0;

extern char lbl_821C006C[];
extern void fn_824AF940(History_824AE8C0 *history);

static __forceinline void InitHistory(History_824AE8C0 *history)
{
    history->first = 0;
    history->end = 0;
    history->begin = 0;
    history->last = 0;
    history->count = 0;
    fn_824AF940(history);
}

Tracker_824AE8C0 *fn_824AE8C0(Tracker_824AE8C0 *self, Source_824AE8C0 *source)
{
    __vector4 zero;

    self->vt = lbl_821C006C;
    InitHistory(&self->history);
    self->samples = 0;
    self->state = 0;
    self->enabled = 1;
    self->elapsed = 0.0f;
    self->minimum = 0.0f;
    self->threshold = 2.0f;
    self->offset = 0.0f;
    self->bias = 0.0f;
    self->limitA = 25.0f;
    self->limitB = 35.0f;
    self->rateA = 6.0f;
    self->rateB = 8.0f;
    zero = __VMXGetReg(77);
    self->position = zero;
    self->velocity = __VMXGetReg(77);
    self->scale = source->scale;
    self->angleA = 0.43633232f;
    self->angleB = 0.43633232f;
    self->angleC = 0.61086524f;
    return self;
}
