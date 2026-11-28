typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Match_823C0268 Match_823C0268;

typedef struct Announcer_823C0268 Announcer_823C0268;

typedef struct AnnouncerVtable_823C0268 {
    void *slots[15];
    unsigned char (*IsIdle)(Announcer_823C0268 *self); /* 0x3c */
} AnnouncerVtable_823C0268;

struct Announcer_823C0268 {
    AnnouncerVtable_823C0268 *vtable; /* 0x00 */
};

typedef struct Screen_823C0268 Screen_823C0268;

typedef struct ScreenVtable_823C0268 {
    void *slots[2];
    char *(*GetHud)(Screen_823C0268 *self); /* 0x08 */
} ScreenVtable_823C0268;

struct Screen_823C0268 {
    ScreenVtable_823C0268 *vtable; /* 0x00 */
};

typedef struct Clock_823C0268 {
    char pad0[0xc];
    int paused; /* 0x0c */
} Clock_823C0268;

typedef struct Rules_823C0268 {
    char pad0[0xc];
    void *target; /* 0x0c */
    char pad10[0x8];
    Clock_823C0268 *clock; /* 0x18 */
} Rules_823C0268;

typedef struct Stage_823C0268 {
    char pad0[0xd4];
    Rules_823C0268 *rules; /* 0xd4 */
} Stage_823C0268;

typedef struct Teams_823C0268 {
    Stage_823C0268 *stage; /* 0x00 */
    char pad4[0xdc];
    int scored; /* 0xe0 */
} Teams_823C0268;

typedef struct Camera_823C0268 {
    char pad0[0x510];
    int locked; /* 0x510 */
} Camera_823C0268;

typedef struct Tutorial_823C0268 {
    char pad0[0x148];
    unsigned char mode; /* 0x148 */
} Tutorial_823C0268;

typedef struct Court_823C0268 {
    char pad0[0x4];
    void *layers; /* 0x04 */
} Court_823C0268;

typedef struct Ball_823C0268 {
    char pad0[0x50];
    __vector4 position; /* 0x50 */
} Ball_823C0268;

typedef struct Helper_823C0268 {
    Match_823C0268 *match; /* 0x00 */
} Helper_823C0268;

typedef struct Stat_823C0268 {
    char pad0[0x64];
    float time; /* 0x64 */
    char pad68[0x1c];
} Stat_823C0268;

typedef struct MatchVtable_823C0268 {
    void *slots[36];
    void (*SetPoint)(Match_823C0268 *self, int state); /* 0x90 */
    void *slot37;
    int (*CheckPoint)(Match_823C0268 *self, int state); /* 0x98 */
} MatchVtable_823C0268;

struct Match_823C0268 {
    MatchVtable_823C0268 *vtable; /* 0x00 */
    char pad4[0x18];
    Court_823C0268 *court; /* 0x1c */
    char pad20[0x64];
    Screen_823C0268 *screen; /* 0x84 */
    char pad88[0x8];
    Camera_823C0268 *camera; /* 0x90 */
    char pad94[0x10];
    void *speaker; /* 0xa4 */
    void *marker;  /* 0xa8 */
    char padac[0x28];
    Rules_823C0268 *rules; /* 0xd4 */
    char padd8[0x350];
    float playTime; /* 0x428 */
    char pad42c[0x48];
    float timeLimit;  /* 0x474 */
    float tension;    /* 0x478 */
    float timePlayed; /* 0x47c */
    char pad480[0x8];
    int lastMinute; /* 0x488 */
    char pad48c[0x24];
    Teams_823C0268 *teams; /* 0x4b0 */
    char pad4b4[0x4];
    void *crowd;                 /* 0x4b8 */
    Stat_823C0268 *stats;        /* 0x4bc */
    Tutorial_823C0268 *tutorial; /* 0x4c0 */
    char pad4c4[0x4dc];
    int rallying; /* 0x9a0 */
    char pad9a4[0xc];
    int server; /* 0x9b0 */
    char pad9b4[0x44];
    char intro[0x2d0];  /* 0x9f8 */
    char referee[0x80]; /* 0xcc8 */
    int result;         /* 0xd48 */
    char padd4c[0x38];
    unsigned char pointOver; /* 0xd84 */
    char padd85[0x5b];
    int holder; /* 0xde0 */
    char padde4[0x4];
    float holdTime; /* 0xde8 */
    char paddec[0x18];
    int started;              /* 0xe04 */
    int startDelay;           /* 0xe08 */
    int state;                /* 0xe0c */
    Ball_823C0268 *ball;      /* 0xe10 */
    Ball_823C0268 *spares[3]; /* 0xe14 */
    Helper_823C0268 *helper;  /* 0xe20 */
    char pade24[0xd0];
    float rallyTime; /* 0xef4 */
    char padef8[0xe8];
    void *effect; /* 0xfe0 */
    char padfe4[0x40];
    float fade;   /* 0x1024 */
    int fadeMode; /* 0x1028 */
    char pad102c[0x14];
    char trail[0x10]; /* 0x1040 */
};

typedef struct Registry_823C0268 {
    int busy; /* 0x00 */
} Registry_823C0268;

extern Registry_823C0268 *fn_82512C30(void);
extern unsigned char fn_82308E08(void *referee);
extern void fn_823D6088(void *intro);
extern void fn_823D4908(Helper_823C0268 *helper);
extern void fn_8229F5A8(void *target);
extern void fn_823C4DD0(Match_823C0268 *match);
extern void fn_823CC298(void *crowd, int cue);
extern int fn_823C0720(Match_823C0268 *self, float dt);
extern void fn_823D16A0(Match_823C0268 *self);
extern void fn_82508078(void *sink, const char *line, int flags);
extern void fn_8229B0E0(Rules_823C0268 *rules, float tension, int tense);
extern void fn_8236AE80(Match_823C0268 *self);
extern void fn_823C09D0(Match_823C0268 *self, float dt);
extern void fn_823588D0(Match_823C0268 *self, float dt);
extern void fn_82369A80(Match_823C0268 *self, Ball_823C0268 *ball);
extern void fn_822B3488(__vector4 *out, void *layers, __vector4 position, float height);
extern void fn_824C8210(void *marker, __vector4 position);
extern void fn_822B3128(__vector4 *out, void *layers, __vector4 position);
extern void fn_823CC100(void *crowd, __vector4 position, float dt);
extern void fn_82359420(Match_823C0268 *self, void *effect, float elapsed, void *trail);
extern void fn_8229F618(void *target);
extern void fn_823688D0(Match_823C0268 *self);
extern int fn_823C4E58(Match_823C0268 *self);
extern void fn_823D1978(Match_823C0268 *self, float dt);

static __forceinline int AnnouncerIdle(Match_823C0268 *self)
{
    if (self->screen != 0) {
        Announcer_823C0268 *announcer =
            (Announcer_823C0268 *)(self->screen->vtable->GetHud(self->screen) + 0x9c);

        return announcer->vtable->IsIdle(announcer) != 0;
    }
    return 1;
}

static __forceinline void StartFade(Match_823C0268 *match, float fade)
{
    match->fade = fade;
    match->fadeMode = 2;
}

static __forceinline void HelperStart(Helper_823C0268 *helper)
{
    Match_823C0268 *match;

    fn_8229F5A8(helper->match->teams->stage->rules->target);
    match = helper->match;
    StartFade(match, 0.0f);
    fn_823C4DD0(match);
    fn_823CC298(helper->match->crowd, 7);
}

static __forceinline void UpdateBall(Match_823C0268 *self, Ball_823C0268 *ball)
{
    if (ball != 0)
        fn_82369A80(self, ball);
}

int fn_823C0268(Match_823C0268 *self, float dt)
{
    int wasLastMinute;
    int i;
    Ball_823C0268 **spare;
    __vector4 position;

    if (fn_82512C30()->busy == 0) {
        wasLastMinute = self->lastMinute;
        if (fn_82308E08(self->referee)) {
            fn_823D6088(self->intro);
        } else if (self->started == 0) {
            if (self->rules->clock->paused == 0 && AnnouncerIdle(self)) {
                if (self->startDelay <= 0) {
                    if (self->tutorial == 0) {
                        StartFade(self, 0.75f);
                    } else if (self->tutorial->mode == 1) {
                        fn_823D4908(self->helper);
                    } else if (self->tutorial->mode == 2) {
                        HelperStart(self->helper);
                    }
                    self->started = 1;
                    self->camera->locked = 1;
                }
                self->startDelay--;
            } else {
                self->startDelay = 1;
            }
        } else if (fn_823C0720(self, dt) != 0) {
            fn_823D16A0(self);
        } else if (wasLastMinute == 0 && self->lastMinute != 0) {
            if (self->tutorial == 0)
                fn_82508078(self->speaker, "lastminute", 0);
            fn_823CC298(self->crowd, 0x1e);
        }
        if (self->tutorial == 0) {
            float tension = (1.0f - self->timePlayed / self->timeLimit) * self->tension;

            fn_8229B0E0(self->teams->stage->rules, tension, tension < 10.0f ? 1 : 0);
        }
        fn_8236AE80(self);
        fn_823C09D0(self, dt);
        fn_823588D0(self, dt);
        if (self->rallying != 0) {
            self->rallyTime += dt;
        } else if (self->rallyTime != 0.0f) {
            self->rallyTime = 0.0f;
            fn_823CC298(self->crowd, 0x20);
        }
        UpdateBall(self, self->ball);
        if (self->helper != 0) {
            spare = self->spares;
            for (i = 3; i != 0; i--) {
                if (*spare != self->ball)
                    UpdateBall(self, *spare);
                spare++;
            }
        }
        if (self->server != -1) {
            float *time = &self->stats[self->server].time;

            *time += dt;
        }
        fn_822B3488(&position, self->court->layers, self->ball->position, 0.0f);
        fn_824C8210(self->marker, position);
        fn_822B3128(&position, self->court->layers, self->ball->position);
        fn_823CC100(self->crowd, position, dt);
        fn_82359420(self, self->effect, dt, self->trail);
        if (self->vtable->CheckPoint(self, 1) != 0) {
            self->teams->scored = 0;
            self->vtable->SetPoint(self, 0);
        }
        if (self->state == 2) {
            fn_8229F618(self->teams->stage->rules->target);
            self->camera->locked = 0;
            fn_823688D0(self);
        }
        self->result = fn_823C4E58(self);
        self->pointOver = 0;
        if (self->holder != -1)
            self->holdTime += dt;
        self->playTime += dt;
        fn_823D1978(self, dt);
    }
    return self->state;
}
