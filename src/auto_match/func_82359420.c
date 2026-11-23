typedef struct Handle_82359420 {
    void *p;
} Handle_82359420;

typedef struct Countdown_82359420 {
    char pad0[0xbc];
    int active;     /* 0xbc */
    int shown;      /* 0xc0 */
    float time;     /* 0xc4 */
    float lastTime; /* 0xc8 */
    char padCC[0x3c];
    int finished; /* 0x108 */
} Countdown_82359420;

extern double __fctid(double);
extern double __fcfid(double);

extern char lbl_83296BC0[];
extern char lbl_83296BD0[];
extern char *lbl_831DB254[];
extern void fn_82536070(const char *name, const char *value);
extern void *fn_82535298(Handle_82359420 *h, void *ctx, void *a, void *b);
extern void fn_82536288(Handle_82359420 *h);

static __forceinline float RoundDown(float value)
{
    return (float)__fcfid(__fctid(value - 0.49999999));
}

void fn_82359420(Countdown_82359420 *self, void **ctx, float dt, Handle_82359420 *session)
{
    int last;
    int second;
    Handle_82359420 tmp;

    if (self->active == 0) {
        return;
    }
    self->time -= dt;
    last = (int)RoundDown(self->lastTime - 0.5f);
    second = (int)RoundDown(self->time - 0.5f);
    if (second >= 0) {
        if (second <= 9 && second < last && second != self->shown) {
            self->shown = second;
            fn_82536070("crowd_countdown", lbl_831DB254[second]);
            tmp = *session;
            tmp.p = fn_82535298(&tmp, *ctx, lbl_83296BC0, lbl_83296BD0);
            fn_82536288(&tmp);
        }
    } else if (second < last && second != self->shown) {
        self->shown = second;
        if (second == -1) {
            self->finished = 1;
        }
    }
    self->lastTime = self->time;
}
