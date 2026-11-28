extern double __fctid(double);
extern double __fcfid(double);

typedef union Timer_824085E0 {
    float value;
    unsigned int bits;
} Timer_824085E0;

typedef struct Handle_824085E0 {
    void *p;
} Handle_824085E0;

typedef struct Panel_824085E0 {
    char pad00[0x68];
    char hint[1]; /* 0x68 */
} Panel_824085E0;

typedef struct Screen_824085E0 {
    char pad00[0xd4];
    Panel_824085E0 *panel; /* 0xd4 */
} Screen_824085E0;

typedef struct Game_824085E0 {
    int unk00;
    Screen_824085E0 *screen; /* 0x04 */
    char pad08[0x40 - 0x08];
    int mode; /* 0x40 */
    char pad44[0xe0 - 0x44];
    int throwsDone; /* 0xe0 */
    int throwsMax;  /* 0xe4 */
    int padE8;
    int multiplayer; /* 0xec */
} Game_824085E0;

typedef struct Info_824085E0 {
    char pad000[0x7a0];
    int swapped; /* 0x7a0 */
} Info_824085E0;

typedef struct Rules_824085E0 Rules_824085E0;

typedef struct RulesVtable_824085E0 {
    void *slot0;
    Info_824085E0 *(*First)(Rules_824085E0 *self);  /* 0x04 */
    Info_824085E0 *(*Second)(Rules_824085E0 *self); /* 0x08 */
} RulesVtable_824085E0;

struct Rules_824085E0 {
    RulesVtable_824085E0 *vt; /* 0x00 */
    char pad04[0x10 - 0x04];
    float nearSpeed; /* 0x10 */
    int useNear;     /* 0x14 */
    char pad18[0x28 - 0x18];
    float farSpeed; /* 0x28 */
    int useFar;     /* 0x2c */
};

typedef struct Clock_824085E0 {
    float time;  /* 0x00 */
    float limit; /* 0x04 */
} Clock_824085E0;

typedef struct World_824085E0 {
    char pad000[0x84c];
    void *sounds; /* 0x84c */
} World_824085E0;

typedef struct Round_824085E0 {
    char pad00[0x08];
    void *countdown; /* 0x08 */
    int unk0c;
    Game_824085E0 *game;   /* 0x10 */
    Rules_824085E0 *rules; /* 0x14 */
    Clock_824085E0 clock;  /* 0x18 */
    char pad20[0x30 - 0x20];
    float tick; /* 0x30 */
    int unk34;
    void *wind; /* 0x38 */
    char pad3c[0x48 - 0x3c];
    Handle_824085E0 voice; /* 0x48 */
    World_824085E0 *world; /* 0x4c */
    unsigned int state;    /* 0x50 */
    Timer_824085E0 delay;  /* 0x54 */
} Round_824085E0;

extern char lbl_83296BC0[];
extern char lbl_83296BD0[];

extern void fn_8229A000(char *hint);
extern void fn_8229AAF8(Panel_824085E0 *panel);
extern void fn_82359420(void *countdown, void **sounds, float dt, Handle_824085E0 *voice);
extern void fn_82359698(void *countdown, int state);
extern void fn_82408A28(Round_824085E0 *self, unsigned int state);
extern void fn_82409010(Round_824085E0 *self, float dt);
extern void fn_82409400(Round_824085E0 *self);
extern void fn_8240ABB0(Clock_824085E0 *clock, float dt);
extern unsigned int fn_8240B0C8(Clock_824085E0 *clock);
extern void fn_8240C068(Game_824085E0 *game);
extern void fn_8240C1F0(Game_824085E0 *game);
extern void fn_8240C348(Game_824085E0 *game, Info_824085E0 *info);
extern void fn_8240CC48(Game_824085E0 *game);
extern int fn_8240CF70(Game_824085E0 *game);
extern void fn_82456A08(void *wind, float speed);
extern void *fn_82535298(Handle_824085E0 *h, void *ctx, void *a, void *b);
extern void fn_82536288(Handle_824085E0 *h);

static __forceinline float CountDown(Timer_824085E0 *timer, float dt)
{
    float value = timer->value - dt;

    value = -value >= 0.0f ? 0.0f : value;
    timer->value = value;
    return value;
}

static __forceinline float RoundDown(float value)
{
    return (float)__fcfid(__fctid(value - 0.49999999));
}

static __forceinline int IsValid(const Handle_824085E0 *handle)
{
    return handle != 0 ? handle->p != 0 : 0;
}

static __forceinline void UpdateWind(Round_824085E0 *self)
{
    Rules_824085E0 *rules = self->rules;
    float speed;

    if (rules->useNear != 0) {
        speed = rules->nearSpeed;
    } else if (rules->useFar != 0) {
        speed = rules->farSpeed;
    } else {
        return;
    }
    fn_82456A08(self->wind, speed);
}

void fn_824085E0(Round_824085E0 *self, float dt)
{
    Clock_824085E0 *clock;
    Game_824085E0 *game;
    Info_824085E0 *info;
    Handle_824085E0 voice;
    float before;
    int mode;
    int next;

    switch (self->state) {
    case 3:
        if (self->delay.bits != 0) {
            if (CountDown(&self->delay, dt) == 0.0f) {
                game = self->game;
                next = 5;
                if (game->multiplayer == 0 && game->mode == 0) {
                    next = 4;
                }
                fn_82359698(self->countdown, next);
                fn_8229AAF8(self->game->screen->panel);
            }
        }
        break;
    case 2:
        if (self->delay.bits != 0) {
            if (CountDown(&self->delay, dt) == 0.0f) {
                fn_82359698(self->countdown, 4);
                fn_8229A000(self->game->screen->panel->hint);
            }
        }
        break;
    case 1:
        clock = &self->clock;
        if (self->clock.limit - self->clock.time > 1.0f) {
            fn_8229A000(self->game->screen->panel->hint);
        }
        mode = self->game->mode;
        if (mode == 2 || mode == 6) {
            fn_82408A28(self, 3);
            break;
        }
        before = clock->time;
        fn_8240ABB0(clock, dt);
        fn_82409400(self);
        switch (fn_8240B0C8(clock)) {
        case 2:
            info = self->rules->vt->First(self->rules);
            game = self->game;
            fn_8240C348(game, info->swapped != 0 ? self->rules->vt->Second(self->rules)
                                                 : self->rules->vt->First(self->rules));
            UpdateWind(self);
            next = 3;
            goto change;
        case 1:
            game = self->game;
            if (game->throwsDone == game->throwsMax) {
                if (game->multiplayer != 0) {
                    fn_8240C1F0(game);
                } else {
                    fn_8240C068(game);
                }
                next = 3;
            } else {
                next = 2;
            }
        change:
            fn_82408A28(self, next);
            break;
        case 0:
            fn_8240CC48(self->game);
            game = self->game;
            if (game->multiplayer != 0 && fn_8240CF70(game) != 0) {
                fn_82359420(self->countdown, &self->world->sounds, self->tick, &self->voice);
            } else if (clock->time <= RoundDown(before) && RoundDown(before) <= 10.0f &&
                       before != clock->time) {
                if (IsValid(&self->voice)) {
                    voice = self->voice;
                    voice.p = fn_82535298(&voice, self->world->sounds, lbl_83296BC0, lbl_83296BD0);
                    fn_82536288(&voice);
                }
            }
            UpdateWind(self);
            break;
        }
        fn_82409010(self, dt);
        break;
    case 0:
        if (self->delay.bits != 0) {
            if (CountDown(&self->delay, dt) == 0.0f) {
                fn_82408A28(self, 1);
            }
        }
        break;
    }
}
