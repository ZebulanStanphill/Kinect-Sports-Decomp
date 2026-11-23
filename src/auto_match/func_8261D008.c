typedef union Timer_8261D008 {
    float value;
    unsigned int bits;
} Timer_8261D008;

typedef struct Character_8261D008 {
    char pad0[0x4c];
    int animation; /* 0x04c */
    char pad50[0xd0 - 0x50];
    char transform[0x488 - 0xd0]; /* 0x0d0 */
    unsigned int flags;           /* 0x488 */
    char pad48c[0xb10 - 0x48c];
    void *attachment; /* 0xb10 */
    char padb14[0xb3c - 0xb14];
    float dt; /* 0xb3c */
    char padb40[0xb64 - 0xb40];
    int visible; /* 0xb64 */
    char padb68[0xc58 - 0xb68];
    Timer_8261D008 removeTimer; /* 0xc58 */
    Timer_8261D008 blinkTimer;  /* 0xc5c */
} Character_8261D008;

extern unsigned int lbl_83265A28;

extern void fn_82564458(Character_8261D008 *self, int sound, int flags);
extern void fn_8261CB98(Character_8261D008 *self, int animation);
extern void fn_8255CFD0(Character_8261D008 *self, void *pose);
extern void fn_825A1440(void *attachment, void *pose, void *transform);
extern void fn_8262BDB0(Character_8261D008 *self);
extern void fn_82592430(Character_8261D008 *self, int arg);
extern void fn_82529320(Character_8261D008 *self, int flags);

static __forceinline float CountDown(Timer_8261D008 *timer, float dt)
{
    float value = timer->value - dt;

    value = -value >= 0.0f ? 0.0f : value;
    timer->value = value;
    return value;
}

static __forceinline unsigned int NextRandom(void)
{
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    return lbl_83265A28;
}

static __forceinline float RandomUnit(void)
{
    union {
        unsigned int bits;
        float value;
    } random;

    random.bits = (NextRandom() & 0x7fffff) | 0x3f800000;
    return random.value - 1.0f;
}

void fn_8261D008(Character_8261D008 *self, int arg)
{
    void *attachment;
    char pose[0x40];

    if (self->blinkTimer.bits != 0) {
        if (CountDown(&self->blinkTimer, self->dt) == 0.0f) {
            fn_82564458(self, 0x58, 0);
            self->blinkTimer.value = RandomUnit() * 5.0f + 3.0f;
        }
    }
    if (self->visible != 0 && (int)self->attachment == 0 && (self->flags & 0x40) != 0) {
        fn_8261CB98(self, self->animation);
    }
    attachment = self->attachment;
    if (attachment != 0 && self->visible != 0) {
        fn_8255CFD0(self, pose);
        fn_825A1440(attachment, pose, self->transform);
    }
    fn_8262BDB0(self);
    fn_82592430(self, arg);
    if (self->removeTimer.bits != 0) {
        if (CountDown(&self->removeTimer, self->dt) == 0.0f) {
            fn_82529320(self, 0);
        }
    }
}
