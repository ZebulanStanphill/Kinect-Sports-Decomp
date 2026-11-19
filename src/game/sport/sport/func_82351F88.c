typedef void (*AssertFn_82351F88)(int, int, int, const char *, const char *, int);
typedef void (*TraceFn_82351F88)(const char *, const char *, int);
typedef int (*CheckFn_82351F88)(void);

typedef struct Hooks_82351F88 {
    int pad0;
    AssertFn_82351F88 assertFn; /* 0x04 */
    TraceFn_82351F88 traceFn;   /* 0x08 */
    char padc[0x20 - 0xc];
    CheckFn_82351F88 checkFn; /* 0x20 */
} Hooks_82351F88;

typedef struct Step_82351F88 {
    char pad0[0x8];
    int state; /* 0x08 */
} Step_82351F88;

typedef struct Tutorial_82351F88 {
    char pad0[0x2c];
    Step_82351F88 *step; /* 0x2c */
    char pad30[0x34];
    int finished; /* 0x64 */
} Tutorial_82351F88;

typedef struct Sport_82351F88 {
    char pad0[0x18];
    void *context; /* 0x18 */
    char pad1c[0x10];
    Tutorial_82351F88 *tutorial; /* 0x2c */
    char pad30[0x340 - 0x30];
    int introStarted; /* 0x340 */
    char pad344[0x3e4 - 0x344];
    int traced; /* 0x3e4 */
} Sport_82351F88;

extern Hooks_82351F88 lbl_83276774;
extern void fn_822A97A0(Tutorial_82351F88 *tutorial, void *arg);
extern void fn_82350888(Sport_82351F88 *self, int state);

static __forceinline void Trace(const char *function, const char *file, int line)
{
    if (lbl_83276774.traceFn != 0) {
        lbl_83276774.traceFn(function, file, line);
    }
}

static __forceinline int IsStepDone(Tutorial_82351F88 *tutorial)
{
    return tutorial->step != 0 && tutorial->step->state == 9;
}

void fn_82351F88(Sport_82351F88 *self)
{
    int done = self->tutorial == 0;
    int ok;

    if (self->tutorial != 0 && self->context != 0) {
        fn_822A97A0(self->tutorial, self->context);
        if (self->introStarted == 0) {
            if (self->traced != 0) {
                Trace("olympus::sport::Sport::TickIntroTutorial",
                      "D:\\Work\\Incubation\\Olympus_Testing\\Incubation\\game\\sport\\sport.cpp", 0x8c9);
                self->traced = 0;
            }
            if (self->tutorial->step == 0 || IsStepDone(self->tutorial)) {
                self->introStarted = 1;
            }
        }
        if (self->introStarted == 1) {
            if (self->traced == 0) {
                if (lbl_83276774.assertFn != 0) {
                    lbl_83276774.assertFn(
                        0, 0, 1, "olympus::sport::Sport::TickIntroTutorial",
                        "D:\\Work\\Incubation\\Olympus_Testing\\Incubation\\game\\sport\\sport.cpp", 0x8db);
                }
                self->traced = 1;
            }
            ok = lbl_83276774.checkFn != 0 ? lbl_83276774.checkFn() : 0;
            if (ok != 0 && self->tutorial->step == 0) {
                done = 1;
                self->tutorial->finished = 1;
            }
        }
    }
    if (done != 0) {
        fn_82350888(self, 8);
    }
}
