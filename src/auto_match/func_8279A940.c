typedef struct Owner_8279A940 {
    unsigned char pad0[0x68];
    unsigned short flags; /* 0x68 */
} Owner_8279A940;

typedef struct Timer_8279A940 {
    unsigned char pad0[0x3c];
    float start; /* 0x3c */
    unsigned char pad40[0x4];
    float now; /* 0x44 */
    unsigned char pad48[0xb8];
    unsigned int duration; /* 0x100 */
    unsigned char pad104[0x10];
    Owner_8279A940 *owner; /* 0x114 */
    unsigned char pad118[0x25];
    unsigned char state; /* 0x13d */
} Timer_8279A940;

unsigned int fn_8279A940(Timer_8279A940 *self)
{
    unsigned char ready;
    int penalty;
    float remaining;

    if (self->state & 8) {
        return 0;
    }
    if ((int)self->owner == 0 || (self->owner->flags & 1) != 0) {
        ready = 1;
    } else {
        ready = 0;
    }
    penalty = ready ? 0 : 1200;
    remaining = self->duration != 0 ? (float)self->duration : 0.0f;
    remaining = remaining - (self->now - self->start) + (float)penalty;
    remaining = remaining >= 0.0f ? remaining : 0.0f;
    return (unsigned int)remaining;
}
