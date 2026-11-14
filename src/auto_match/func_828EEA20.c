typedef struct Mode_828EEA20 {
    unsigned char pad0[0x14c];
    unsigned char flagA;
    unsigned char flagB;
    unsigned char flagC;
    unsigned char flagD;
    int width;
    int height;
} Mode_828EEA20;

extern void fn_828EE1B8(Mode_828EEA20 *self);

void fn_828EEA20(Mode_828EEA20 *self, unsigned char flagA, unsigned char flagB,
                 unsigned char flagC, unsigned char flagD, int width, int height)
{
    self->flagA = flagA;
    self->flagB = flagB;
    self->flagC = flagC;
    self->flagD = flagD;
    self->width = width;
    self->height = height;
    fn_828EE1B8(self);
}
