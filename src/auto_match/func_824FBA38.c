typedef struct Msg_824FBA38 {
    unsigned int tag;
    char pad4[0x38];
} Msg_824FBA38;

typedef struct Settings_824FBA38 {
    char pad0[0x114];
    void *other; /* 0x114 */
} Settings_824FBA38;

typedef struct Owner_824FBA38 {
    char pad0[0x190];
    Settings_824FBA38 **settings; /* 0x190 */
} Owner_824FBA38;

typedef union Timer_824FBA38 {
    float value;
    unsigned int bits;
} Timer_824FBA38;

typedef struct Obj_824FBA38 {
    char pad0[0x190];
    Owner_824FBA38 *owner; /* 0x190 */
    char pad194[0xb3c - 0x194];
    float elapsed; /* 0xb3c */
    char padB40[0xb60 - 0xb40];
    Msg_824FBA38 stopMessage; /* 0xb60 */
    unsigned char mirrored;   /* 0xb9c */
    char padB9E[2];
    Timer_824FBA38 timer; /* 0xba0 */
    char idleLeft[4];     /* 0xba4 */
    char stopRight[4];    /* 0xba8 */
    char stopLeft[4];     /* 0xbac */
    char idleRight[4];    /* 0xbb0 */
} Obj_824FBA38;

extern int fn_8252D2F8(Obj_824FBA38 *o, int kind, Msg_824FBA38 *msg, void *target);
extern void fn_8252D240(void *a, void *b, int c);
extern int fn_8255FA88(void *other);
extern void fn_82592430(void *a, int b);

static __forceinline int CanIdle(Obj_824FBA38 *self)
{
    if (self->owner == 0 || (*self->owner->settings)->other == 0) {
        return 1;
    }
    return fn_8255FA88((*self->owner->settings)->other);
}

static __forceinline void Update(Obj_824FBA38 *self, void *stop, void *idle)
{
    if (self->timer.bits != 0) {
        float remaining = self->timer.value - self->elapsed;

        self->timer.value = -remaining >= 0.0f ? 0.0f : remaining;
        if (self->timer.value == 0.0f) {
            fn_8252D2F8(self, 0, &self->stopMessage, stop);
            return;
        }
    }
    if (CanIdle(self) != 0) {
        fn_8252D240(self, idle, 0);
    }
}

void fn_824FBA38(Obj_824FBA38 *self, int arg)
{
    if (self->mirrored != 0) {
        Update(self, self->stopRight, self->idleRight);
    } else {
        Update(self, self->stopLeft, self->idleLeft);
    }
    fn_82592430(self, arg);
}
