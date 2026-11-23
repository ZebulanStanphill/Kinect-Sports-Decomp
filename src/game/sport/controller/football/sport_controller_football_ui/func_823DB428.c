typedef void (*LogFn_823DB428)(int, int, int, const char *, const char *, int);

typedef struct Hooks_823DB428 {
    int pad0;
    LogFn_823DB428 log; /* 0x4 */
} Hooks_823DB428;

typedef struct Game_823DB428 {
    char pad0[0xd4];
    int sound; /* 0xd4 */
} Game_823DB428;

typedef struct FootballUI_823DB428 {
    Game_823DB428 *game; /* 0x0 */
    char pad4[0xc];
    char swipe[0x50];  /* 0x10 */
    char prompt[0x20]; /* 0x60 */
    int promptActive;  /* 0x80 */
    char pad84[0x50];
    int swipeOpen;    /* 0xd4 */
    float swipeTimer; /* 0xd8 */
    float soundTimer; /* 0xdc */
} FootballUI_823DB428;

extern Hooks_823DB428 lbl_83276774;

extern void fn_823DB7C8(void *swipe);
extern void fn_823DB9B0(void *prompt);
extern void fn_8229AAF8(int sound);

static __forceinline int CountDown(float *timer, float dt)
{
    float left = *timer - dt;

    *timer = -left >= 0.0f ? 0.0f : left;
    return *timer == 0.0f;
}

void fn_823DB428(FootballUI_823DB428 *self, float dt)
{
    fn_823DB7C8(self->swipe);
    if (self->promptActive != 0) {
        fn_823DB9B0(self->prompt);
    }
    if (self->swipeOpen != 0 && self->swipeTimer > 0.0f) {
        self->swipeTimer -= dt;
        if (self->swipeTimer <= 0.0f) {
            if (lbl_83276774.log != 0)
                lbl_83276774.log(0, 0, 1, "olympus::sport::football::FootballUI::OpenSwipe",
                                 "D:\\Work\\Incubation\\Olympus_Testing\\Incubation\\game\\sport\\controller"
                                 "\\football\\sport_controller_football_ui.cpp",
                                 0x1dc);
        }
    }
    if (*(unsigned int *)&self->soundTimer != 0 && CountDown(&self->soundTimer, dt)) {
        fn_8229AAF8(self->game->sound);
    }
}
