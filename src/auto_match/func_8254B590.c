typedef struct Fader_8254B590 {
    char pad0[0x1a0];
    char channel[0x14]; /* 0x1a0 */
    int fading;         /* 0x1b4 */
    float volume;       /* 0x1b8 */
    float rate;         /* 0x1bc */
    float fadeTime;     /* 0x1c0 */
    float target;       /* 0x1c4 */
    int paused;         /* 0x1c8 */
    int cue;            /* 0x1cc */
    float delay;        /* 0x1d0 */
    int pending;        /* 0x1d4 */
    float startVolume;  /* 0x1d8 */
    float startRate;    /* 0x1dc */
} Fader_8254B590;

extern char lbl_8327FB00[];
extern void fn_8254EDB0(Fader_8254B590 *fader, int cue, float volume, float rate);
extern int fn_825529B0(void *channel);
extern void fn_82552AD8(void *channel, char *name, float volume);

void fn_8254B590(Fader_8254B590 *fader, float dt)
{
    if (fader->pending != 0) {
        fader->delay = fader->delay - dt;
        if (fader->delay <= 0.0f) {
            fn_8254EDB0(fader, fader->cue, fader->startVolume, fader->startRate);
            fader->delay = 0.0f;
            fader->pending = 0;
        }
    }
    if (fader->fading != 0 && fader->paused == 0) {
        fader->fadeTime = fader->fadeTime - dt;
        fader->volume = fader->rate * dt + fader->volume;
        if (fader->fadeTime < 0.0f) {
            fader->fading = 0;
            fader->volume = fader->target;
        }
        if (fn_825529B0(fader->channel) != 0) {
            fn_82552AD8(fader->channel, lbl_8327FB00 + 0x78, fader->volume);
        }
    }
}
