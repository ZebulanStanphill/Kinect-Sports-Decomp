typedef struct Game_82321728 {
    char pad000[0x7b4];
    int paused;   /* 0x7b4 */
    int finished; /* 0x7b8 */
} Game_82321728;

typedef struct Target_82321728 {
    char pad00[0x4c];
    void *scene; /* 0x4c */
} Target_82321728;

typedef struct Fader_82321728 {
    Game_82321728 *game;     /* 0x00 */
    Target_82321728 *target; /* 0x04 */
    float current;           /* 0x08 */
    char pad0c[0x8];
    float goal;  /* 0x14 */
    float speed; /* 0x18 */
    int enabled; /* 0x1c */
    int channel; /* 0x20 */
} Fader_82321728;

extern void fn_8252AF80(Target_82321728 *target, int channel, float value);

/* Moves current towards goal by at most step. */
static __forceinline float Approach(float current, float goal, float step)
{
    float delta = goal - current;

    delta = delta - -step >= 0.0f ? delta : -step;
    delta = delta - step >= 0.0f ? step : delta;
    return delta + current;
}

void fn_82321728(Fader_82321728 *self, float dt)
{
    if (self->target->scene == 0) {
        return;
    }
    if (self->enabled == 0) {
        return;
    }
    if (self->game->finished == 0 && self->game->paused == 0) {
        self->current = Approach(self->current, self->goal, self->speed * dt);
    } else {
        self->current = Approach(self->current, 1.0f, self->speed * dt);
    }
    fn_8252AF80(self->target, self->channel, self->current);
}
