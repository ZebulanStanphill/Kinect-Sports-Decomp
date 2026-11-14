typedef struct Obj_82691DB0 {
    char pad0[0x14];
    unsigned int shift;
    char pad18[0x1a8 - 0x18];
    unsigned int units;
    char pad1ac[0x1f5 - 0x1ac];
    unsigned char enabled;
    char pad1f6[0x1fc - 0x1f6];
    unsigned int blockSize;
    char pad200[0x20c - 0x200];
    unsigned int total;
    unsigned int used;
} Obj_82691DB0;

extern const unsigned char lbl_8200E1B0[];

static __forceinline unsigned char HighBit_82691DB0(unsigned int v)
{
    unsigned char r;
    if (v & 0xffff0000)
        r = (v & 0xff000000) ? lbl_8200E1B0[v >> 24] + 24 : lbl_8200E1B0[(v >> 16) & 0xff] + 16;
    else
        r = (v & 0xff00) ? lbl_8200E1B0[(v >> 8) & 0xff] + 8 : lbl_8200E1B0[v & 0xff];
    return r;
}

unsigned int fn_82691DB0(Obj_82691DB0 *self)
{
    if (self->enabled) {
        unsigned int blocks = (((self->total - (self->units << self->shift) - self->used + 0x10) >> 4) + self->blockSize - 1) / self->blockSize;
        unsigned char bits = HighBit_82691DB0(blocks * self->blockSize);
        unsigned int size = 1 << bits;
        if (size < self->blockSize)
            size = self->blockSize;
        if (size > self->blockSize * 4)
            size = self->blockSize * 4;
        return size;
    }
    return self->blockSize;
}
