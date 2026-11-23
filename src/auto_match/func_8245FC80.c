typedef struct Mixer_8245FC80 {
    int volumes[4]; /* 0x0 */
} Mixer_8245FC80;

typedef struct Player_8245FC80 {
    char pad0[0x80];
    float timer; /* 0x80 */
    char pad84[0x14];
    void *animator; /* 0x98 */
    char pad9C[0xc0];
    char poseA[0x4];  /* 0x15c */
    char poseC[0x18]; /* 0x160 */
    char poseB[0x4];  /* 0x178 */
} Player_8245FC80;

typedef struct State_8245FC80 {
    int id; /* 0x0 */
} State_8245FC80;

typedef struct Game_8245FC80 {
    char pad0[0x38];
    Player_8245FC80 *player; /* 0x38 */
    char pad3C[0x10];
    State_8245FC80 *state; /* 0x4c */
    char pad50[0x58];
    int finished; /* 0xa8 */
    char padAC[0x18];
    void *stream; /* 0xc4 */
} Game_8245FC80;

extern Mixer_8245FC80 *fn_82292AE8(void);
extern void fn_822931D8(Mixer_8245FC80 *mixer);
extern void fn_8246F9F0(Player_8245FC80 *player, void *pose);
extern void fn_824655B8(void *animator, int mode);
extern void *fn_8266EC60(void);
extern int fn_8266C6D8(void *input, int button, int enable);
extern int fn_8266C708(void *input, int button, int enable);
extern void fn_82512B70(void *stream);

static __forceinline void CountDown(float *timer, float dt)
{
    float left = *timer - dt;

    *timer = -left >= 0.0f ? 0.0f : left;
}

void fn_8245FC80(Game_8245FC80 *self, float dt)
{
    Mixer_8245FC80 *mixer;
    Player_8245FC80 *player;

    if (self->finished == 0 && self->state->id == 4) {
        mixer = fn_82292AE8();
        mixer->volumes[0] = 0;
        mixer->volumes[1] = 0;
        mixer->volumes[2] = 0;
        mixer->volumes[3] = 0;
        fn_822931D8(mixer);
        player = self->player;
        fn_8246F9F0(player, player->poseA);
        fn_8246F9F0(player, player->poseB);
        fn_8246F9F0(player, player->poseC);
        fn_824655B8(player->animator, 0);
        fn_8266C6D8(fn_8266EC60(), 0x40, 1);
        fn_8266C708(fn_8266EC60(), 0x40, 1);
        if (self->stream != 0) {
            fn_82512B70(self->stream);
            self->stream = 0;
        }
        self->finished = 1;
    }
    player = self->player;
    if (*(unsigned int *)&player->timer != 0) {
        CountDown(&player->timer, dt);
    }
}
