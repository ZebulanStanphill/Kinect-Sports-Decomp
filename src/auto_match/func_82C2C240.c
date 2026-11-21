#include <string.h>

typedef struct Decoder_82C2C240 {
    char pad0[0x4];
    int position; /* 0x004 */
    char pad8[0x1a];
    unsigned short channels; /* 0x022 */
    char pad24[0xdc];
    int frameSize; /* 0x100 */
    char pad104[0x24];
    int state; /* 0x128 */
    char pad12c[0x18];
    int *history; /* 0x144 */
    int *overlap; /* 0x148 */
    char pad14c[0x18];
    int *gains;    /* 0x164 */
    int *levels;   /* 0x168 */
    int *peaks;    /* 0x16c */
    int *energies; /* 0x170 */
    int count174;  /* 0x174 */
    char pad178[0xc];
    int count184; /* 0x184 */
    int count188; /* 0x188 */
    char pad18c[0x2c];
    int count1b8; /* 0x1b8 */
    char pad1bc[0x4];
    int upsample; /* 0x1c0 */
    char pad1c4[0x4];
    int shift;      /* 0x1c8 */
    int downsample; /* 0x1cc */
} Decoder_82C2C240;

int fn_82C2C240(Decoder_82C2C240 *self)
{
    int length;

    self->position = 0;
    self->count1b8 = 0;
    memset(self->gains, 0, self->channels * 4);
    if (self->downsample != 0) {
        length = self->frameSize * 3 / 2 >> self->shift;
    } else if (self->upsample != 0) {
        length = self->frameSize * 3 / 2 << self->shift;
    } else {
        length = self->frameSize * 3 / 2;
    }
    memset(self->history, 0, self->channels * length * 4);
    if (self->downsample != 0) {
        memset(self->overlap, 0, self->frameSize * 4);
    }
    self->count184 = 0;
    self->count188 = 0;
    self->count174 = 0;
    memset(self->levels, 0, self->channels * 4);
    memset(self->peaks, 0, self->channels * 4);
    memset(self->energies, 0, self->channels * 4);
    self->state = 0x40;
    return 0;
}
