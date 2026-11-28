extern double __fctid(double);
extern double __fcfid(double);

typedef union Timer_824282B0 {
    float value;
    unsigned int bits;
} Timer_824282B0;

typedef struct Pin_824282B0 {
    char pad00[0x2c];
    int state; /* 0x2c */
} Pin_824282B0;

typedef struct Player_824282B0 {
    char pad00[0x20];
    Pin_824282B0 **pinsBegin; /* 0x20 */
    Pin_824282B0 **pinsEnd;   /* 0x24 */
} Player_824282B0;

typedef struct Bowler_824282B0 {
    char pad000[0x1a0];
    int throwing; /* 0x1a0 */
    char pad1a4[0x1e0 - 0x1a4];
    int released; /* 0x1e0 */
} Bowler_824282B0;

typedef struct Mode_824282B0 {
    char pad00[0x40];
    unsigned int kind; /* 0x40 */
} Mode_824282B0;

typedef struct Hud_824282B0 {
    char pad0000[0xc];
    int *clock; /* 0x000c */
    char pad0010[0x1854 - 0x10];
    int *icon; /* 0x1854 */
} Hud_824282B0;

typedef struct Game_824282B0 {
    char pad0000[0xa0];
    Mode_824282B0 *mode; /* 0x00a0 */
    int audio;           /* 0x00a4 */
    char pad00a8[0xd4 - 0xa8];
    Hud_824282B0 *hud; /* 0x00d4 */
    char pad00d8[0xd94 - 0xd8];
    char tickSound[4];     /* 0x0d94 */
    char tickCue[0x40];    /* 0x0d98 */
    char tickPrefix[0x40]; /* 0x0dd8 */
    int tickSeconds;       /* 0x0e18 */
    char pad0e1c[0x14e8 - 0xe1c];
    char startSound[0xc];   /* 0x14e8 */
    char stageCue[0x40];    /* 0x14f4 */
    char stagePrefix[0x40]; /* 0x1534 */
    int stages;             /* 0x1574 */
    char pad1578[0x2b20 - 0x1578];
    Player_824282B0 *current; /* 0x2b20 */
    char pad2b24[0x2b50 - 0x2b24];
    int rumble; /* 0x2b50 */
} Game_824282B0;

typedef struct Minigame_824282B0 {
    int unk00;
    Player_824282B0 *player; /* 0x04 */
    Game_824282B0 *game;     /* 0x08 */
    char pad0c[0x1c - 0x0c];
    float duration; /* 0x1c */
    char pad20[0x38 - 0x20];
    float sinceTick;        /* 0x38 */
    float praiseDelay;      /* 0x3c */
    float hurryTime;        /* 0x40 */
    unsigned int pinTarget; /* 0x44 */
    float lastChanceTime;   /* 0x48 */
} Minigame_824282B0;

typedef struct Score_824282B0 {
    char pad00[0x20];
    int finished; /* 0x20 */
    char pad24[0x30 - 0x24];
    unsigned int pins; /* 0x30 */
    int waiting;       /* 0x34 */
    char pad38[0x4c - 0x38];
    unsigned int stage; /* 0x4c */
    float time;         /* 0x50 */
} Score_824282B0;

extern void fn_8229CFB8(int *icon, int n, int m);
extern void fn_8229F758(int *clock, float minutes, float seconds, float hundredths, int flags);
extern void fn_8229F858(int *clock, int red);
extern void fn_8229FF28(int *clock, int pins);
extern void fn_82414950(int rumble, int a, int b);
extern Bowler_824282B0 *fn_82417F58(Player_824282B0 *player);
extern void fn_8241EE50(Player_824282B0 *player, Bowler_824282B0 *bowler);
extern void fn_82428E10(Minigame_824282B0 *self, Score_824282B0 *score);
extern void fn_82508078(int audio, const char *name, int flags);
extern int fn_82526C70(char *buffer, int size, const char *format, ...);
extern void fn_82536070(void *sound, char *name);
extern void fn_82536590(void *sound, int flags);

static __forceinline float CountDown(float value)
{
    return -value >= 0.0f ? 0.0f : value;
}

static __forceinline float NotNegative(float value)
{
    return value >= 0.0f ? value : 0.0f;
}

static __forceinline float RoundDown(float value)
{
    return (float)__fcfid(__fctid(value - 0.49999999));
}

static __forceinline int IsVersus(const Game_824282B0 *game)
{
    return (int)game->mode != 0 && game->mode->kind == 1;
}

void fn_824282B0(Minigame_824282B0 *self, Score_824282B0 *score, float dt)
{
    Bowler_824282B0 *bowler;
    Game_824282B0 *game;
    Player_824282B0 *player;
    Pin_824282B0 **pin;
    Hud_824282B0 *hud;
    Mode_824282B0 *mode;
    char cue[0x40];
    float zero;
    float before;
    float time;
    float seconds;
    float delay;
    Pin_824282B0 **end;
    int secondsBefore;
    int wholeSeconds;
    int hundredths;
    int state;
    unsigned int stage;

    zero = 0.0f;
    if (score->waiting != 0) {
        bowler = fn_82417F58(self->player);
        if (bowler->throwing != 0 || bowler->released != 0) {
            fn_82414950(self->game->rumble, 0, 0x1f);
            if (!IsVersus(self->game)) {
                fn_82536590(self->game->startSound, 0);
            }
            score->waiting = 0;
        }
    } else {
        delay = self->praiseDelay - dt;
        self->sinceTick = self->sinceTick + dt;
        self->praiseDelay = CountDown(delay);
        secondsBefore = (int)score->time;
        time = NotNegative(score->time - dt);
        before = score->time;
        score->time = time;
        if (secondsBefore != (int)time) {
            if (time > 1.0f && secondsBefore <= self->game->tickSeconds + 1 && self->sinceTick > 0.9f) {
                self->sinceTick = zero;
                fn_82526C70(cue, 0x40, "%s%02d", self->game->tickPrefix, (int)score->time);
                fn_82536070(self->game->tickCue, cue);
                fn_82536590(self->game->tickSound, 0);
            }
            if (score->time + dt >= self->hurryTime && score->time < self->hurryTime &&
                self->player == self->game->current) {
                fn_82508078(self->game->audio, "bowlerminigameencourage", 0);
            }
            if (score->pins <= self->pinTarget && score->time + dt >= self->lastChanceTime &&
                score->time < self->lastChanceTime && self->player == self->game->current) {
                fn_82508078(self->game->audio, "bowlerminigameencourage", 0);
            }
            game = self->game;
            mode = game->mode;
            if ((int)mode == 0 || mode->kind != 1) {
                stage = game->stages - (int)(score->time / (self->duration / (float)game->stages));
                if (stage != score->stage) {
                    fn_82526C70(cue, 0x40, "%s%01d", game->stagePrefix, stage);
                    fn_82536070(self->game->stageCue, cue);
                    score->stage = stage;
                }
            }
        }
        if (score->time == zero) {
            if (before > zero) {
                player = self->player;
                if (fn_82417F58(player) != 0) {
                    fn_8241EE50(player, fn_82417F58(player));
                }
                if (self->player == self->game->current) {
                    fn_8229CFB8(self->game->hud->icon, 0, 0);
                }
            }
            if (score->finished == 0) {
                player = self->player;
                pin = player->pinsBegin;
                end = player->pinsEnd;
                for (; pin != end; pin++) {
                    state = (*pin)->state;
                    if (state == 4 || state == 5 || state == 6 || state == 7 || state == 8 || state == 9) {
                        goto update;
                    }
                }
                fn_82428E10(self, score);
            }
        }
    }
update:
    hud = self->game->hud;
    wholeSeconds = (int)RoundDown(score->time);
    seconds = (float)wholeSeconds;
    hundredths = (int)((score->time - seconds) * 100.0f);
    fn_8229FF28(hud->clock, score->pins);
    fn_8229F758(hud->clock, 0.0f, seconds, (float)hundredths, 0);
    fn_8229F858(self->game->hud->clock, wholeSeconds < 10);
}
