typedef struct Timer_823AB400 {
    char pad000[0x58];
    float time; /* 0x58 */
    char pad05c[0x1c];
    float activeTime; /* 0x78 */
    int active;       /* 0x7c */
} Timer_823AB400;

extern float lbl_83276578;

static __forceinline float Max(float x, float y)
{
    return x - y >= 0.0f ? x : y;
}

void fn_823AB400(Timer_823AB400 *self, float elapsed)
{
    self->time = elapsed + self->time;
    if (self->active != 0) {
        self->activeTime = elapsed + self->activeTime;
    }
    lbl_83276578 = Max(self->activeTime, lbl_83276578);
}
