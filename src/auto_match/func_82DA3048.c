typedef struct Blinker_82DA3048 {
    unsigned char pad0[0x125];
    unsigned char flags;  /* 0x125 */
    unsigned char toggle; /* 0x126 */
    unsigned char frame;  /* 0x127 */
} Blinker_82DA3048;

void fn_82DA3048(Blinker_82DA3048 *self)
{
    self->frame++;
    if (((self->frame - 4) & 7) == 0) {
        self->flags ^= 1;
    }
    if ((self->frame & 7u) == 0) {
        self->flags ^= 2;
    }
    if ((self->frame & 0xfu) == 0) {
        self->frame = 0;
        self->toggle = 1 - self->toggle;
    }
}
