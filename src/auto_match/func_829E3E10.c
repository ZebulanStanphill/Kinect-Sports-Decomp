#include <math.h>

typedef struct Clock_829E3E10 {
    int initialized; /* 0x0 */
} Clock_829E3E10;

typedef struct Voice_829E3E10 {
    char reserved00[0x24]; /* 0x00 */
    Clock_829E3E10 clock;  /* 0x24 */
    char reserved28[0x64]; /* 0x28 */
    int stopped;           /* 0x8c */
    int reserved90;        /* 0x90 */
    int paused;            /* 0x94 */
    float start;           /* 0x98 */
    float position;        /* 0x9c */
} Voice_829E3E10;

extern const float lbl_82057B3C;
extern int fn_829E59D8(Clock_829E3E10 *clock, float start, float position, float time, float rate,
                       int *wrapped);

int fn_829E3E10(Voice_829E3E10 *voice, int mode, float time, float rate, int *resync, int *flags)
{
    int needResync = 0;

    if (voice->stopped == 0 && mode != 1 && voice->paused == 0) {
        int wrapped;
        int hr = fn_829E59D8(&voice->clock, voice->start, voice->position, time, rate, &wrapped);

        if (hr < 0) {
            return hr;
        }
        if (wrapped != 0 || fabsf(voice->position - rate) > voice->position * lbl_82057B3C) {
            needResync = 1;
        }
    }
    *resync = needResync;
    *flags = 0;
    return 0;
}
