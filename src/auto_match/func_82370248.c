typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);

typedef struct Frame_82370248 {
    char pad0[0x20];
    float time; /* 0x20 */
} Frame_82370248;

typedef struct ClipList_82370248 {
    Frame_82370248 **frames; /* 0x00 */
    char pad4[0xc];
    int current; /* 0x10 */
} ClipList_82370248;

typedef struct Owner_82370248 {
    ClipList_82370248 **clip; /* 0x00 */
} Owner_82370248;

typedef struct History_82370248 {
    char pad0[0xc];
    int count;             /* 0x0c */
    float frameTimes[4];   /* 0x10 */
    float elapsedTimes[4]; /* 0x20 */
} History_82370248;

typedef struct Tracker_82370248 {
    char pad0[0x8];
    Owner_82370248 *owner; /* 0x008 */
    char padc[0x570 - 0xc];
    int state; /* 0x570 */
    char pad574[0x580 - 0x574];
    __vector4 v580; /* 0x580 */
    __vector4 v590; /* 0x590 */
    __vector4 v5a0; /* 0x5a0 */
    __vector4 v5b0; /* 0x5b0 */
    int f5c0;       /* 0x5c0 */
    float f5c4;     /* 0x5c4 */
    int f5c8;       /* 0x5c8 */
    int f5cc;       /* 0x5cc */
    int f5d0;       /* 0x5d0 */
    char pad5d4[0x5e4 - 0x5d4];
    int f5e4;      /* 0x5e4 */
    float elapsed; /* 0x5e8 */
    int f5ec;      /* 0x5ec */
    int f5f0;      /* 0x5f0 */
    char pad5f4[0x600 - 0x5f4];
    History_82370248 *history; /* 0x600 */
} Tracker_82370248;

void fn_82370248(Tracker_82370248 *self)
{
    History_82370248 *history = self->history;
    ClipList_82370248 *clip = *self->owner->clip;
    float time = clip->frames[clip->current]->time;
    __vector4 zero0 = __VMXGetReg(77);
    __vector4 zero1 = __VMXGetReg(77);
    __vector4 zero2 = __VMXGetReg(77);
    __vector4 zero3 = __VMXGetReg(77);

    history->elapsedTimes[history->count] = self->elapsed;
    history->frameTimes[history->count] = (float)(int)time;
    history->count++;
    self->elapsed = 0.0f;
    self->f5c4 = 0.0f;
    self->f5e4 = 0;
    self->f5ec = 0;
    self->v580 = zero0;
    self->f5f0 = 0;
    self->v590 = zero1;
    self->state = 0x18;
    self->v5a0 = zero2;
    self->v5b0 = zero3;
    self->f5c0 = 0;
    self->f5c8 = -1;
    self->f5cc = -1;
    self->f5d0 = 0;
}
