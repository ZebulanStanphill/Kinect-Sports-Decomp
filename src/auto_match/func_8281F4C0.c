typedef struct Clock_8281F4C0 Clock_8281F4C0;

typedef struct Timer_8281F4C0 {
    unsigned char pad0[4];
    int elapsed;           /* 0x04 */
    void *event;           /* 0x08 */
    int ticks;             /* 0x0c */
    float deadline;        /* 0x10 */
    unsigned char manual;  /* 0x14 */
    unsigned char expired; /* 0x15 */
} Timer_8281F4C0;

extern Clock_8281F4C0 *lbl_8320A4D4;
extern Clock_8281F4C0 *fn_82813498(void);
extern float fn_8281F720(Clock_8281F4C0 *clock, int kind);
extern void *fn_82A1E6A0(void *attributes, int manualReset, int initialState, const char *name);

static __forceinline Clock_8281F4C0 *GetClock(void)
{
    return lbl_8320A4D4 != 0 ? lbl_8320A4D4 : fn_82813498();
}

#define MAX(a, b) ((a) >= (b) ? (a) : (b))

void fn_8281F4C0(Timer_8281F4C0 *self, float delay, unsigned char wantEvent, unsigned char manual)
{
    self->deadline = MAX(fn_8281F720(GetClock(), 1) + delay, 0.0f);
    if (wantEvent && !manual) {
        self->event = fn_82A1E6A0(0, 0, 0, 0);
    }
    self->manual = manual;
    self->expired = 0;
    self->ticks = 0;
    self->elapsed = 0;
}
