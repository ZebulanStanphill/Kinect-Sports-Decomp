typedef struct Game_8235C4E0 Game_8235C4E0;
typedef struct Lane_8235C4E0 Lane_8235C4E0;
typedef struct Updater_8235C4E0 Updater_8235C4E0;

typedef struct LaneVtable_8235C4E0 {
    void *slots00[8];
    void (*update)(Lane_8235C4E0 *lane, float dt); /* 0x20 */
    void *slots24[6];
    int (*isBusy)(Lane_8235C4E0 *lane); /* 0x3c */
} LaneVtable_8235C4E0;

struct Lane_8235C4E0 {
    LaneVtable_8235C4E0 *vt; /* 0x00 */
};

typedef struct UpdaterVtable_8235C4E0 {
    void *slot00;
    void (*update)(Updater_8235C4E0 *updater, float dt); /* 0x04 */
} UpdaterVtable_8235C4E0;

struct Updater_8235C4E0 {
    UpdaterVtable_8235C4E0 *vt; /* 0x00 */
};

typedef struct Player_8235C4E0 {
    char pad00[0x1c];
    int human; /* 0x1c */
    char pad20[0x18c];
} Player_8235C4E0;

typedef struct Round_8235C4E0 {
    Game_8235C4E0 *game;      /* 0x000 */
    Lane_8235C4E0 *lane;      /* 0x004 */
    Player_8235C4E0 *players; /* 0x008 */
    char pad00c[0x0c];
    int current; /* 0x018 */
    char pad01c[0x280];
    int replaying; /* 0x29c */
    char pad2a0[0x10];
    int state; /* 0x2b0 */
    char pad2b4[0x16c];
} Round_8235C4E0;

typedef struct Intro_8235C4E0 {
    char pad00[0x3c];
    int finished; /* 0x3c */
    char pad40[0x08];
    int active; /* 0x48 */
} Intro_8235C4E0;

typedef struct Tutorial_8235C4E0 {
    char pad00[0x40];
    unsigned int state; /* 0x40 */
} Tutorial_8235C4E0;

typedef struct Hud_8235C4E0 {
    char pad0000[0x0c];
    int scorecard; /* 0x000c */
    char pad0010[0x1c];
    char name[0x800];   /* 0x002c */
    char second[0x800]; /* 0x082c */
    char title[0x800];  /* 0x102c */
    float showDelay;    /* 0x182c */
    float hideDelay;    /* 0x1830 */
    int hasSecond;      /* 0x1834 */
    int hasTitle;       /* 0x1838 */
    int useScorecard;   /* 0x183c */
    char pad1840[0x08];
    int singleBanner; /* 0x1848 */
    int doubleBanner; /* 0x184c */
} Hud_8235C4E0;

typedef struct Owner_8235C4E0 {
    int pad00;
    void *listener; /* 0x04 */
} Owner_8235C4E0;

typedef struct Fader_8235C4E0 {
    Owner_8235C4E0 *owner; /* 0x000 */
    char pad004[0x108];
    float value;    /* 0x10c */
    float target;   /* 0x110 */
    float delay;    /* 0x114 */
    float duration; /* 0x118 */
    float curve;    /* 0x11c */
} Fader_8235C4E0;

typedef struct Ref_8235C4E0 {
    int object;      /* 0x00 */
    void *reference; /* 0x04 */
} Ref_8235C4E0;

struct Game_8235C4E0 {
    char pad0000[0x94];
    Intro_8235C4E0 *intro; /* 0x0094 */
    char pad0098[0x08];
    int tutorial; /* 0x00a0 */
    char pad00a4[0x30];
    Hud_8235C4E0 *hud; /* 0x00d4 */
    char pad00d8[0xac];
    int updater; /* 0x0184 */
    char pad0188[0x10];
    int introDone;            /* 0x0198 */
    unsigned int introFrames; /* 0x019c */
    char pad01a0[0xa64];
    int roundCount; /* 0x0c04 */
    int mode;       /* 0x0c08 */
    char pad0c0c[0x87c];
    int resultSound; /* 0x1488 */
    char pad148c[0x40];
    int startSound;  /* 0x14cc */
    int finishSound; /* 0x14d0 */
    char pad14d4[0x9ec];
    Round_8235C4E0 rounds[3]; /* 0x1ec0 */
    Round_8235C4E0 *current;  /* 0x2b20 */
    char pad2b24[0x2c];
    Fader_8235C4E0 *fader; /* 0x2b50 */
    char pad2b54[0x50];
    int started; /* 0x2ba4 */
    char pad2ba8[0xf4];
    int phase; /* 0x2c9c */
};

extern void fn_823588D0(Game_8235C4E0 *self, float dt);
extern void fn_82536590(int *sound, int flags);
extern void fn_82299AC8(int banner, char *name);
extern void fn_82299D40(int banner, char *name, char *second);
extern void fn_82299E90(int banner, char *title, char *name, char *second);
extern void fn_8229A000(int banner);
extern void fn_8235D648(Game_8235C4E0 *self);
extern void fn_82418800(Round_8235C4E0 *round, float dt);
extern void fn_82360850(Game_8235C4E0 *game, Round_8235C4E0 *round, int human, int flag);
extern void fn_8254EEB8(Owner_8235C4E0 *owner, int value, float duration, float curve, float delay);
extern void fn_8235F738(Game_8235C4E0 *self, float dt);
extern Ref_8235C4E0 *fn_8229AE10(Ref_8235C4E0 *out, Hud_8235C4E0 *hud);
extern void fn_82672C20(int movie, const char *path, int args, int count);
extern void fn_822315A0(void *reference);
extern void fn_8229F618(int scorecard);
extern void fn_824186B0(Round_8235C4E0 *round);

int fn_8235C4E0(Game_8235C4E0 *self, float dt)
{
    Hud_8235C4E0 *hud;
    Fader_8235C4E0 *fader;
    Round_8235C4E0 *round;
    Intro_8235C4E0 *intro;
    Ref_8235C4E0 movie;
    int i;

    fn_823588D0(self, dt);
    if (self->introFrames != 0) {
        if (--self->introFrames == 0) {
            intro = self->intro;
            if (intro != 0) {
                intro->finished = 1;
                intro->active = 0;
            }
            self->introDone = 1;
        }
    }
    if (self->started == 0 && (self->tutorial == 0 || ((Tutorial_8235C4E0 *)self->tutorial)->state != 1)) {
        if (self->mode == 1) {
            fn_82536590(&self->startSound, 0);
        }
        self->started = 1;
    }
    hud = self->hud;
    if (hud->showDelay > 0.0f) {
        hud->showDelay -= dt;
        if (hud->showDelay < 0.0f) {
            if (hud->hasSecond != 0) {
                if (hud->hasTitle != 0) {
                    fn_82299E90(hud->doubleBanner, hud->title, hud->name, hud->second);
                } else {
                    fn_82299D40(hud->doubleBanner, hud->name, hud->second);
                }
            } else {
                fn_82299AC8(hud->singleBanner, hud->name);
            }
            hud->showDelay = 0.0f;
        }
    } else if (hud->hideDelay > 0.0f) {
        hud->hideDelay -= dt;
        if (hud->hideDelay < 0.0f) {
            fn_8229A000(hud->singleBanner);
            fn_8229A000(hud->doubleBanner);
            hud->hideDelay = 0.0f;
        }
    }
    if (self->updater != 0) {
        ((Updater_8235C4E0 *)self->updater)->vt->update((Updater_8235C4E0 *)self->updater, dt);
    }
    fn_8235D648(self);
    for (i = 0; i < self->roundCount; i++) {
        round = &self->rounds[i];
        fn_82418800(round, dt);
        if (round == self->current) {
            if (round->lane != 0) {
                round->lane->vt->update(round->lane, dt);
                if (round->lane->vt->isBusy(round->lane) == 0) {
                    fn_82360850(round->game, round,
                                round->players[round->current].human != 0 && round->replaying == 0 &&
                                    round->state == 0,
                                1);
                }
            }
        }
    }
    fader = self->fader;
    if (fader->delay > 0.0f) {
        float remaining = fader->delay - dt;

        fader->delay = -remaining >= 0.0f ? 0.0f : remaining;
        if (fader->delay == 0.0f) {
            fader->value = fader->target;
            if (fader->owner->listener != 0) {
                fn_8254EEB8(fader->owner, (int)fader->target, fader->duration, fader->curve, 0.0f);
            }
        }
    }
    fn_8235F738(self, dt);
    if (self->current != 0 && self->current->state == 7) {
        fn_82536590(&self->finishSound, 0);
        self->started = 0;
        if (self->phase == 3) {
            fn_82536590(&self->resultSound, 0);
        }
        self->phase = 1;
        if (self->hud->useScorecard == 0) {
            fn_82672C20(fn_8229AE10(&movie, self->hud)->object, "_root.scorecardCtrl.hide", 0, 0);
            if (movie.reference != 0) {
                fn_822315A0(movie.reference);
            }
        } else {
            fn_8229F618(self->hud->scorecard);
        }
        for (i = 0; i < self->roundCount; i++) {
            fn_824186B0(&self->rounds[i]);
        }
        return 2;
    }
    return 0;
}
