typedef struct Winner_82469458 {
    int state;   /* 0x0 */
    int movie;   /* 0x4 */
    int pad8[3]; /* 0x8 */
    float timer; /* 0x14 */
} Winner_82469458;

extern void fn_82672C20(int movie, const char *path, void *args, int count);

static __forceinline int CountDown(float *timer, float dt)
{
    float left = *timer - dt;

    *timer = -left >= 0.0f ? 0.0f : left;
    return *timer == 0.0f;
}

/* The original tests the timer's bits (lwz; cmplwi) before counting it down. */
void fn_82469458(Winner_82469458 *self, float dt)
{
    switch (self->state) {
    case 6:
        if (*(unsigned int *)&self->timer != 0 && CountDown(&self->timer, dt)) {
            fn_82672C20(self->movie, "_root.winningScoreRed", 0, 0);
        }
        break;
    case 7:
        if (*(unsigned int *)&self->timer != 0 && CountDown(&self->timer, dt)) {
            fn_82672C20(self->movie, "_root.winningScoreBlue", 0, 0);
        }
        break;
    case 8:
        if (*(unsigned int *)&self->timer != 0 && CountDown(&self->timer, dt)) {
            fn_82672C20(self->movie, "_root.winningScoreDraw", 0, 0);
        }
        break;
    }
}
