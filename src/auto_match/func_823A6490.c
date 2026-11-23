typedef struct Timer_823A6490 Timer_823A6490;

typedef struct TimerVtbl_823A6490 {
    void *slots[40];
    float (*GetRemaining)(Timer_823A6490 *self); /* 0xa0 */
} TimerVtbl_823A6490;

struct Timer_823A6490 {
    TimerVtbl_823A6490 *vt;
    char pad4[0x8c];
    float duration; /* 0x90 */
};

typedef struct Players_823A6490 {
    void **list; /* 0x0 */
} Players_823A6490;

typedef struct Cue_823A6490 {
    char data[0x2c];
} Cue_823A6490;

typedef struct Game_823A6490 {
    char pad0[0x8];
    Players_823A6490 *players; /* 0x008 */
    char padc[0x2e0 - 0xc];
    Timer_823A6490 *timer; /* 0x2e0 */
    char pad2e4[0x6c4 - 0x2e4];
    Cue_823A6490 cues[6]; /* 0x6c4 */
    char pad7cc[0x86c - 0x7cc];
    float cueLength; /* 0x86c */
} Game_823A6490;

typedef struct Self_823A6490 {
    char pad0[0x8];
    Game_823A6490 *game; /* 0x08 */
    char padc[0x30 - 0xc];
    int played40; /* 0x30 */
    int played60; /* 0x34 */
    int played83; /* 0x38 */
} Self_823A6490;

extern float fn_8239B628(Game_823A6490 *game, void *player, Cue_823A6490 *cue);

/* Plays the time cues once 83%, 60% and 40% of the round have passed. */
void fn_823A6490(Self_823A6490 *self)
{
    Timer_823A6490 *timer = self->game->timer;
    float remaining = timer->vt->GetRemaining(timer);
    float elapsed = (timer->duration - remaining) / timer->duration;
    Game_823A6490 *game;
    void *second;

    if (elapsed > 0.83f && self->played83 == 0) {
        game = self->game;
        second = game->players->list[1];
        fn_8239B628(game, game->players->list[0], &game->cues[4]);
        game->cueLength = fn_8239B628(game, second, &game->cues[5]);
        self->played83 = 1;
    } else if (elapsed > 0.6f && self->played60 == 0) {
        game = self->game;
        second = game->players->list[1];
        fn_8239B628(game, game->players->list[0], &game->cues[2]);
        game->cueLength = fn_8239B628(game, second, &game->cues[3]);
        self->played60 = 1;
    } else if (elapsed > 0.4f && self->played40 == 0) {
        game = self->game;
        second = game->players->list[1];
        fn_8239B628(game, game->players->list[0], &game->cues[0]);
        game->cueLength = fn_8239B628(game, second, &game->cues[1]);
        self->played40 = 1;
    }
}
