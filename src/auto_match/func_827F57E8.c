typedef struct Tween_827F57E8 {
    char pad0[0x24];
    float target;   /* 0x24 */
    float delta;    /* 0x28 */
    float velocity; /* 0x2c */
    float elapsed;  /* 0x30 */
    char pad1[0xdc - 0x34];
    unsigned char flags; /* 0xdc */
} Tween_827F57E8;

extern float fn_827F4868(Tween_827F57E8 *self);
extern float fn_82809CB0(float value);
extern float lbl_82196288;

static __forceinline void SetFlags(unsigned char *flags, unsigned char mask)
{
    *flags |= mask;
}

void fn_827F57E8(Tween_827F57E8 *self, float target, float duration)
{
    float current;
    float zero;

    current = fn_827F4868(self);
    zero = lbl_82196288;
    if (duration > zero) {
        self->delta = target - current;
        self->target = target;
        self->velocity = fn_82809CB0(self->delta) / duration;
        self->elapsed = zero;
        self->flags = (self->flags & 0xdf) | ((unsigned char)(self->delta == zero) << 5);
    } else {
        self->target = current;
        self->delta = zero;
        self->velocity = zero;
        self->elapsed = zero;
        SetFlags(&self->flags, 0x20);
    }
}
