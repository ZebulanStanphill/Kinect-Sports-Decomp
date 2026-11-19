typedef struct Anim_8279A5A8 {
    char pad0[0x13a];
    unsigned short frames; /* 0x13a */
    char pad13C[0x3];
    unsigned char flags; /* 0x13f */
} Anim_8279A5A8;

void fn_8279A5A8(Anim_8279A5A8 *self, float speed)
{
    if (speed == 1.0f) {
        self->frames = 20;
        self->flags &= ~4;
        return;
    }
    self->flags |= 4;
    self->frames = (unsigned short)(speed * 20.0f);
}
