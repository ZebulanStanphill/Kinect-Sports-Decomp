typedef void (*LogFn_823602F0)(int, int, int, const char *, const char *, int);
typedef void (*TraceFn_823602F0)(const char *func, const char *file, int line);

typedef struct Hooks_823602F0 {
    int pad0;
    LogFn_823602F0 log;     /* 0x4 */
    TraceFn_823602F0 trace; /* 0x8 */
} Hooks_823602F0;

typedef struct Fade_823602F0 {
    char pad00[0x1c];
    unsigned int color; /* 0x1c */
} Fade_823602F0;

typedef struct FadeDone_823602F0 {
    int data[4];
    int count; /* 0x10 */
} FadeDone_823602F0;

typedef struct BowlingController_823602F0 {
    char pad0000[0x6c0];
    int fadeToWhite;   /* 0x6c0 */
    int skipFade;      /* 0x6c4 */
    float fadeInTime;  /* 0x6c8 */
    float holdTime;    /* 0x6cc */
    float fadeOutTime; /* 0x6d0 */
    char pad06d4[0x2cac - 0x6d4];
    int fadeState;   /* 0x2cac */
    float fadeTimer; /* 0x2cb0 */
    float skipTime;  /* 0x2cb4 */
} BowlingController_823602F0;

extern Hooks_823602F0 lbl_83276774;
extern Fade_823602F0 lbl_831D44F0;

extern int fn_822A21A8(void);
extern void fn_825521F0(float from, float to, FadeDone_823602F0 *done);

static __forceinline int CountDown(float *timer, float dt)
{
    float left = *timer - dt;

    *timer = -left >= 0.0f ? 0.0f : left;
    return *timer == 0.0f;
}

void fn_823602F0(BowlingController_823602F0 *self, float dt)
{
    FadeDone_823602F0 done;

    switch (self->fadeState) {
    case 1:
        self->fadeState = 2;
        if (self->skipFade != 0) {
            self->fadeTimer = self->skipTime;
            if (lbl_83276774.log != 0)
                lbl_83276774.log(0, 0, 1, "olympus::sport::bowling::BowlingController::ScreenFadeTick",
                                 "D:\\Work\\Incubation\\Olympus_Testing\\Incubation\\game\\sport\\controller"
                                 "\\sport_controller_bowling.cpp",
                                 0x11f8);
        } else {
            self->fadeTimer = self->fadeInTime;
            lbl_831D44F0.color = self->fadeToWhite != 0 ? 0xff : 0xffffffff;
            done.count = 0;
            fn_825521F0(1.0f, self->fadeInTime, &done);
        }
        break;
    case 2:
        if (self->skipFade != 0) {
            if (fn_822A21A8() != 0 && CountDown(&self->fadeTimer, dt))
                self->fadeState = 3;
        } else if (CountDown(&self->fadeTimer, dt)) {
            self->fadeTimer = self->holdTime;
            self->fadeState = 3;
        }
        break;
    case 3:
        if (self->skipFade != 0) {
            if (lbl_83276774.trace != 0)
                lbl_83276774.trace(
                    "olympus::sport::bowling::BowlingController::ScreenFadeTick",
                    "D:\\Work\\Incubation\\Olympus_Testing\\Incubation\\game\\sport\\controller"
                    "\\sport_controller_bowling.cpp",
                    0x1225);
            self->fadeState = 4;
            self->fadeTimer = 0.0f;
        } else if (CountDown(&self->fadeTimer, dt)) {
            self->fadeTimer = self->fadeOutTime;
            self->fadeState = 4;
            done.count = 0;
            fn_825521F0(0.0f, self->fadeOutTime, &done);
        }
        break;
    case 4:
        if (CountDown(&self->fadeTimer, dt))
            self->fadeState = 0;
        break;
    }
}
