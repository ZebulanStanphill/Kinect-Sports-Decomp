extern unsigned int strlen(const char *);

typedef struct Profile_82428A38 {
    char pad0000[0x127c];
    char cheerName[0x40];  /* 0x127c */
    char praiseName[0x40]; /* 0x12bc */
} Profile_82428A38;

typedef struct Player_82428A38 {
    Profile_82428A38 *profile; /* 0x00 */
} Player_82428A38;

typedef struct Mode_82428A38 {
    char pad00[0x40];
    unsigned int kind; /* 0x40 */
} Mode_82428A38;

typedef struct Hud_82428A38 {
    char pad0[0xc];
    int popups; /* 0x0c */
} Hud_82428A38;

typedef struct Game_82428A38 {
    char pad0000[0xa0];
    Mode_82428A38 *mode; /* 0x00a0 */
    int audio;           /* 0x00a4 */
    char pad00a8[0xd4 - 0xa8];
    Hud_82428A38 *hud; /* 0x00d4 */
    char pad00d8[0xc0c - 0xd8];
    int crowdLoaded; /* 0x0c0c */
    char pad0c10[0xcb8 - 0xc10];
    int crowdBusy; /* 0x0cb8 */
    char pad0cbc[0xd6c - 0xcbc];
    char crowdSound[0xe1c - 0xd6c]; /* 0x0d6c */
    char bonusSound[0x20];          /* 0x0e1c */
    char cheerSound[0x40];          /* 0x0e3c */
    char cheerPrefix[0xc0];         /* 0x0e7c */
    char cheerDefault[0x40];        /* 0x0f3c */
    char cheerFirst[0x40];          /* 0x0f7c */
    char cheerSecond[0x40];         /* 0x0fbc */
    char pad0ffc[0x12fc - 0xffc];
    char introSound[0x80];            /* 0x12fc */
    char introName[0x1fc];            /* 0x137c */
    char bonusVoice[0x2b20 - 0x1578]; /* 0x1578 */
    Player_82428A38 *current;         /* 0x2b20 */
    char pad2b24[0x2b80 - 0x2b24];
    int crowdStarted; /* 0x2b80 */
    int cheerMuted;   /* 0x2b84 */
    char pad2b88[0x2b98 - 0x2b88];
    int cheerStage; /* 0x2b98 */
    int pad2b9c;
    int crowdQueued; /* 0x2ba0 */
} Game_82428A38;

typedef struct Minigame_82428A38 {
    int unk00;
    Player_82428A38 *player; /* 0x04 */
    Game_82428A38 *game;     /* 0x08 */
    char pad0c[0x20 - 0x0c];
    float bonus;        /* 0x20 */
    int bonusStep;      /* 0x24 */
    int hasLimit;       /* 0x28 */
    unsigned int limit; /* 0x2c */
    char pad30[0x38 - 0x30];
    float timeLeft;    /* 0x38 */
    float praiseDelay; /* 0x3c */
    char pad40[0x4c - 0x40];
    unsigned int praiseStep; /* 0x4c */
    unsigned int nextPraise; /* 0x50 */
} Minigame_82428A38;

typedef struct Score_82428A38 {
    char pad000[0x1c];
    int nearRecord; /* 0x01c */
    int finished;   /* 0x020 */
    char pad024[0x30 - 0x24];
    unsigned int pins; /* 0x030 */
    char pad034[0x40 - 0x34];
    int throws; /* 0x040 */
    int pad044;
    unsigned int bonusTarget; /* 0x048 */
    int pad04c;
    float bonusTotal; /* 0x050 */
    char pad054[0xe4 - 0x54];
    unsigned int bonusPoints; /* 0x0e4 */
    char pad0e8[0x184 - 0xe8];
    unsigned int record; /* 0x184 */
    char pad188[0x19c - 0x188];
    int bonuses; /* 0x19c */
} Score_82428A38;

typedef struct Avatar_82428A38 {
    char pad00[0x34];
    void *animator; /* 0x34 */
} Avatar_82428A38;

typedef struct Bowler_82428A38 {
    char pad00[0x24];
    Avatar_82428A38 *avatar; /* 0x24 */
} Bowler_82428A38;

extern char lbl_820E975C[];

extern void fn_8229F910(int popups, char *format, float value, float delay);
extern void fn_822B17A8(void *animator, int animation, int flags);
extern void fn_8235F928(Game_82428A38 *game, char *name, int force);
extern Bowler_82428A38 *fn_82417F58(Player_82428A38 *player);
extern void fn_82428E10(Minigame_82428A38 *self, Score_82428A38 *score);
extern void fn_82508078(int audio, const char *name, int flags);
extern int fn_82526C70(char *buffer, int size, const char *format, ...);
extern void fn_82536070(void *sound, char *name);
extern void fn_82536590(void *sound, int flags);

static __forceinline void AddAmount(float *total, float amount)
{
    *total += amount;
}

void fn_82428A38(Minigame_82428A38 *self, Score_82428A38 *score, unsigned char pins, unsigned char missed,
                 int *thrown)
{
    unsigned int before;
    Game_82428A38 *game;
    Bowler_82428A38 *bowler;
    Mode_82428A38 *mode;
    char *name;
    unsigned int record;
    char cue[128];

    before = score->pins;
    *thrown = 0;
    game = self->game;
    if (self->player == game->current && game->cheerStage != 1) {
        fn_82536070(game->introSound, game->introName);
        game->cheerStage = 1;
    }
    if (score->finished == 0) {
        score->pins = pins + score->pins;
        if (score->pins >= 350) {
            bowler = fn_82417F58(self->player);
            if (bowler != 0 && bowler->avatar != 0 && bowler->avatar->animator != 0) {
                fn_822B17A8(bowler->avatar->animator, 0xf, 0);
            }
        }
        if (self->hasLimit == 0 || score->pins < self->limit) {
            if (missed == 0) {
                *thrown = 1;
                game = self->game;
                if (self->player == game->current && game->cheerMuted == 0) {
                    name = self->player->profile->cheerName;
                    if (strlen(name) == 0) {
                        if (game->crowdBusy != 0) {
                            game->crowdQueued = 1;
                        }
                        switch (game->cheerStage) {
                        default:
                            name = game->cheerDefault;
                            break;
                        case 2:
                            name = game->cheerSecond;
                            break;
                        case 1:
                            name = game->cheerFirst;
                            break;
                        }
                    }
                    fn_82526C70(cue, 0x80, "%s_%s", game->cheerPrefix, name);
                    fn_82536070(game->cheerSound, cue);
                    if (game->crowdStarted == 0) {
                        if (game->crowdLoaded != 0) {
                            fn_82536590(game->crowdSound, 0);
                        }
                        game->crowdStarted = 1;
                    }
                }
                score->throws++;
            } else if (self->praiseDelay == 0.0f) {
                if (self->player == self->game->current) {
                    fn_8235F928(self->game, self->player->profile->praiseName, 1);
                }
                self->praiseDelay = 0.5f;
            }
        } else {
            fn_82428E10(self, score);
        }
        if (self->bonus > 0.0f && before < score->bonusTarget && score->pins >= score->bonusTarget) {
            fn_82536590(self->game->bonusSound, 0);
            fn_82536590(self->game->bonusVoice, 0);
            fn_8229F910(self->game->hud->popups, lbl_820E975C, self->bonus, 0.0f);
            AddAmount(&score->bonusTotal, self->bonus);
            score->bonusPoints = (unsigned int)self->bonus + score->bonusPoints;
            self->timeLeft = self->timeLeft - 1.5f;
            score->bonusTarget = self->bonusStep + score->bonusTarget;
            if (self->player == self->game->current) {
                fn_82508078(self->game->audio, "bowlerminigamepraise", 0);
            }
            score->bonuses++;
        }
        if (score->pins > before && score->pins >= self->nextPraise) {
            if (self->player == self->game->current) {
                fn_82508078(self->game->audio, "bowlerminigamepraise", 0);
            }
            self->nextPraise = (score->pins / self->praiseStep + 1) * self->praiseStep;
        }
        score->nearRecord = 0;
        mode = self->game->mode;
        if ((int)mode == 0 || mode->kind != 1) {
            record = score->record;
            if (record > 0xf && score->pins > record - 0xf && score->pins <= record) {
                score->nearRecord = 1;
            }
        }
    }
}
