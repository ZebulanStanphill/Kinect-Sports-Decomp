typedef struct Tween_827F5730 {
    char pad0[0x24];
    float target;   /* 0x24 */
    float delta;    /* 0x28 */
    float velocity; /* 0x2c */
    float elapsed;  /* 0x30 */
    char pad1[0xdc - 0x34];
    unsigned char flags; /* 0xdc */
} Tween_827F5730;

extern float fn_827F4868(Tween_827F5730 *self);
extern float lbl_82196288;

void fn_827F5730(Tween_827F5730 *self, float target, float speed)
{
    float delta;
    float zero;
    int done;

    delta = target - fn_827F4868(self);
    self->target = target;
    self->delta = delta;
    zero = lbl_82196288;
    self->velocity = (float)(delta != zero) * speed;
    self->elapsed = zero;
    if (delta == zero || self->velocity <= zero) {
        done = 1;
    } else {
        done = 0;
    }
    self->flags = (self->flags & 0xdf) | (done << 5);
}
