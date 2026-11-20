typedef struct Counter_8227B3F0 {
    char pad0[0xa30];
    float chimeDelay;   /* 0xa30 */
    void *counting;     /* 0xa34 */
    int loopPlaying;    /* 0xa38 */
    int levelUpPending; /* 0xa3c */
    int pointPending;   /* 0xa40 */
} Counter_8227B3F0;

typedef struct Name_8227B3F0 {
    char buf[40];
} Name_8227B3F0;

extern void fn_82536590(int *, int);
extern int fn_828647D8(Name_8227B3F0 *);
extern void fn_82864898(Name_8227B3F0 *);
extern Name_8227B3F0 *fn_82864988(Name_8227B3F0 *, const char *);
extern float lbl_821917A8[];

void fn_8227B3F0(Counter_8227B3F0 *self, float elapsed)
{
    int h;
    Name_8227B3F0 name;

    if (self->counting != 0 && self->loopPlaying == 0) {
        h = fn_828647D8(fn_82864988(&name, "Play_sfx_experience_counter_loop"));
        fn_82864898(&name);
        fn_82536590(&h, 0);
        self->loopPlaying = 1;
    } else if (self->counting == 0 && self->loopPlaying != 0) {
        h = fn_828647D8(fn_82864988(&name, "Stop_sfx_experience_counter_loop"));
        fn_82864898(&name);
        fn_82536590(&h, 0);
        self->loopPlaying = 0;
    }
    if (self->chimeDelay <= 0.0f) {
        if (self->levelUpPending != 0) {
            h = fn_828647D8(fn_82864988(&name, "Play_sfx_experience_levelup_chime"));
            fn_82864898(&name);
            fn_82536590(&h, 0);
            self->chimeDelay = lbl_821917A8[6];
        } else if (self->pointPending != 0) {
            h = fn_828647D8(fn_82864988(&name, "Play_sfx_experience_point_chime"));
            fn_82864898(&name);
            fn_82536590(&h, 0);
            self->chimeDelay = lbl_821917A8[6];
        }
    } else {
        self->chimeDelay = self->chimeDelay - elapsed;
    }
    self->levelUpPending = 0;
    self->pointPending = 0;
}
