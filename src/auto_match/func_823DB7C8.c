/* Runs the three phases of a banner: the delay before it shows, the time it holds and the time
   it fades; when the fade has run out (or the hold ends with no fade) the banner is hidden. */
typedef union Timer_823DB7C8 {
    float value;
    unsigned int bits;
} Timer_823DB7C8;

typedef struct Menu_823DB7C8 {
    char pad00[0x34];
    int shown;   /* 0x34 */
    int hidden;  /* 0x38 */
    void *movie; /* 0x3C */
} Menu_823DB7C8;

typedef struct Banner_823DB7C8 {
    char pad00[0x20];
    int active;           /* 0x20 */
    float fadeOut;        /* 0x24 */
    float alpha;          /* 0x28 */
    float fadeTime;       /* 0x2C */
    Timer_823DB7C8 delay; /* 0x30 */
    Timer_823DB7C8 hold;  /* 0x34 */
    Timer_823DB7C8 fade;  /* 0x38 */
    char pad3C[0x8];
    Menu_823DB7C8 *menu; /* 0x44 */
} Banner_823DB7C8;

extern void fn_82672C20(void *movie, const char *path, int a, int b);
extern void fn_823DB9B0(Banner_823DB7C8 *self);

static __forceinline int CountDown(Timer_823DB7C8 *timer, float delta)
{
    if (timer->bits != 0) {
        float left = timer->value - delta;
        timer->value = -left >= 0.0f ? 0.0f : left;
        if (timer->value == 0.0f) {
            return 1;
        }
    }
    return 0;
}

static __forceinline void Hide(Banner_823DB7C8 *self)
{
    if (self->active != 0) {
        Menu_823DB7C8 *menu = self->menu;
        if (menu->shown != 0 && menu->hidden == 0) {
            menu->hidden = 1;
            fn_82672C20(menu->movie, "_root.mainCtrl.hide", 0, 0);
        }
        self->active = 0;
    }
}

void fn_823DB7C8(Banner_823DB7C8 *self, float delta)
{
    if (self->delay.value > 0.0f) {
        if (CountDown(&self->delay, delta)) {
            self->fadeOut = 0.0f;
            self->active = 1;
            self->alpha = 1.0f;
        }
    } else if (self->hold.value > 0.0f) {
        if (CountDown(&self->hold, delta) && self->fade.value <= 0.0f) {
            Hide(self);
        }
    } else if (self->fade.value > 0.0f) {
        if (CountDown(&self->fade, delta)) {
            Hide(self);
        } else {
            self->alpha = self->fade.value / self->fadeTime;
            self->fadeOut = 1.0f - self->alpha;
        }
    }
    if (self->active != 0) {
        fn_823DB9B0(self);
    }
}
