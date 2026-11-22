typedef struct Callback_825521F0 {
    int buffer[4]; /* 0x00 */
    void *impl;    /* 0x10 */
} Callback_825521F0;

typedef struct Fade_825521F0 {
    char pad00[0x8];
    float current;  /* 0x08 */
    float target;   /* 0x0c */
    float rate;     /* 0x10 */
    float duration; /* 0x14 */
    int active;     /* 0x18 */
    int pad1c;
    Callback_825521F0 onDone; /* 0x20 */
} Fade_825521F0;

extern Fade_825521F0 lbl_831D44F0;
extern Callback_825521F0 *fn_8227CB30(Callback_825521F0 *self, Callback_825521F0 *other);
extern void fn_82359C18(Callback_825521F0 *self);

/* Starts fading towards level (clamped to [0, 1]) over duration; onDone is passed by value. */
int fn_825521F0(float level, float duration, Callback_825521F0 *onDone)
{
    int started;

    if (!(duration > 0.0f)) {
        started = 0;
        fn_82359C18(onDone);
        return started;
    }
    level = level >= 0.0f ? level : 0.0f;
    level = level - 1.0f >= 0.0f ? 1.0f : level;
    lbl_831D44F0.duration = duration;
    lbl_831D44F0.target = level;
    lbl_831D44F0.rate = (level - lbl_831D44F0.current) / duration;
    fn_8227CB30(&lbl_831D44F0.onDone, onDone);
    lbl_831D44F0.active = 1;
    started = 1;
    fn_82359C18(onDone);
    return started;
}
