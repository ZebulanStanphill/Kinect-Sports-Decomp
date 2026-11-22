#include <string.h>

typedef struct Desc_824E70F8 {
    int enabled;            /* 0x00 */
    int pad04[5];           /* 0x04 */
    int hasColor;           /* 0x18 */
    unsigned int colors[3]; /* 0x1C */
    int hasScale;           /* 0x28 */
    float scale;            /* 0x2C */
    float alpha;            /* 0x30 */
    int hasRange;           /* 0x34 */
    float rangeMax;         /* 0x38 */
    float rangeStep;        /* 0x3C */
    float rangeMin;         /* 0x40 */
    int pad44[9];           /* 0x44 */
} Desc_824E70F8;

typedef struct Callback_824E70F8 Callback_824E70F8;

typedef struct CallbackImpl_824E70F8 {
    struct CallbackImplVtbl_824E70F8 {
        struct CallbackImpl_824E70F8 *(*clone)(struct CallbackImpl_824E70F8 *self, Callback_824E70F8 *dst);
        void *slot4;
        void *slot8;
        void (*destroy)(struct CallbackImpl_824E70F8 *self, int free);
    } *vt;
} CallbackImpl_824E70F8;

struct Callback_824E70F8 {
    int buf[4];                  /* 0x00 */
    CallbackImpl_824E70F8 *impl; /* 0x10 */
};

typedef struct Slot_824E70F8 {
    Desc_824E70F8 preset;     /* 0x000 */
    Desc_824E70F8 current;    /* 0x068 */
    Desc_824E70F8 request;    /* 0x0D0 */
    int active;               /* 0x138 */
    float duration;           /* 0x13C */
    int pad140[3];            /* 0x140 */
    float startTime;          /* 0x14C */
    int count;                /* 0x150 */
    int pad154;               /* 0x154 */
    Callback_824E70F8 onDone; /* 0x158 */
    int pad16C;               /* 0x16C */
} Slot_824E70F8;

typedef struct Self_824E70F8 {
    int pad00[4];           /* 0x000 */
    Slot_824E70F8 slots[2]; /* 0x010 */
    char pad2F0[0x10];      /* 0x2F0 */
    float time;             /* 0x300 */
} Self_824E70F8;

extern Desc_824E70F8 lbl_832967B8[];
/* The fallback is the link-time pool's double slot +0x110, (double)1e-05f, as in the Matching
   sibling func_824E7360: written as a literal, the compiler folds __fsel(a - b, a, b) into the
   compare-and-table select. */
extern const double lbl_821954B0[];
extern void fn_8252DDF0(Desc_824E70F8 *desc, int index);
extern void fn_82359C18(Callback_824E70F8 *callback);

double __fsel(double a, double b, double c);

static __forceinline void LoadPreset(Desc_824E70F8 *dst, int index)
{
    if (index >= -1) {
        if (index == -1) {
            memcpy(dst, &lbl_832967B8[0], sizeof(Desc_824E70F8));
        } else {
            memcpy(dst, &lbl_832967B8[index], sizeof(Desc_824E70F8));
        }
    }
}

void fn_824E70F8(Self_824E70F8 *self, Desc_824E70F8 desc, float duration, int index,
                 Callback_824E70F8 *onDone)
{
    Callback_824E70F8 *dst;
    Desc_824E70F8 *current;

    if (index < 0 || index > 1) {
        fn_82359C18(onDone);
        return;
    }
    if (self->slots[index].count == 0 && self->slots[index].active == 0) {
        LoadPreset(&self->slots[index].preset, index);
    }
    self->slots[index].count++;
    current = &self->slots[index].current;
    LoadPreset(current, index);
    /* 2.0f is read through its own home lbl_821916FC (never through a neighbour's base) */
    if (self->slots[index].current.hasRange == 0) {
        self->slots[index].current.rangeMax = 10.0f;
        self->slots[index].current.rangeMin = 0.0f;
        self->slots[index].current.rangeStep = 2.0f;
    }
    if (self->slots[index].current.hasScale == 0) {
        self->slots[index].current.scale = 1.5f;
        self->slots[index].current.alpha = 1.0f;
    }
    if (self->slots[index].current.hasColor == 0) {
        self->slots[index].current.colors[0] = 0x7F7F7F00;
        self->slots[index].current.colors[1] = 0x7F7F7F00;
        self->slots[index].current.colors[2] = 0x7F7F7F00;
    }
    self->slots[index].request = desc;
    if (self->slots[index].request.hasRange != 0) {
        self->slots[index].current.hasRange = 1;
    }
    if (self->slots[index].request.hasScale != 0) {
        self->slots[index].current.hasScale = 1;
    }
    if (self->slots[index].request.hasColor != 0) {
        self->slots[index].current.hasColor = 1;
    }
    self->slots[index].request.enabled = 1;
    fn_8252DDF0(current, index);
    self->slots[index].duration = (float)__fsel(duration - 1e-05f, duration, lbl_821954B0[0x22]);
    self->slots[index].startTime = self->time;
    self->slots[index].active = 1;
    dst = &self->slots[index].onDone;
    if (dst != onDone) {
        if (dst->impl != 0) {
            dst->impl->vt->destroy(dst->impl, (void *)dst->impl != (void *)dst);
            dst->impl = 0;
        }
        if (onDone->impl == 0) {
            dst->impl = 0;
        } else {
            if ((void *)onDone->impl == (void *)onDone) {
                dst->impl = onDone->impl->vt->clone(onDone->impl, dst);
            } else {
                dst->impl = onDone->impl->vt->clone(onDone->impl, 0);
            }
        }
    }
    fn_82359C18(onDone);
}
