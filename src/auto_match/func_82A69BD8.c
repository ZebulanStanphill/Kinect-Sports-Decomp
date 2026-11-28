typedef struct Timeline_82A69BD8 {
    short count;
    char pad2[6];
    short *positions;
} Timeline_82A69BD8;

typedef struct Track_82A69BD8 {
    char pad0[0x1a8];
    Timeline_82A69BD8 *timeline;
    char pad1ac[0x6f0 - 0x1ac];
} Track_82A69BD8;

typedef struct Tracks_82A69BD8 {
    char pad0[0x22];
    unsigned short count;
    char pad24[0x18];
    int mode;
    char pad40[0x100];
    Track_82A69BD8 *tracks;
    char pad144[0x40];
    int offset;
    char pad188[0x34];
    int shiftRight;
    int shiftLeft;
    int pad1c4;
    int shift;
    char pad1cc[8];
    int end;
} Tracks_82A69BD8;

extern void fn_82A6E290(Tracks_82A69BD8 *self, int mode, short a, short b, short c, short *x, short *y);

void fn_82A69BD8(Tracks_82A69BD8 *self, int *out)
{
    int minimum = 0x7fff;
    int i;

    for (i = 0; i < self->count; ++i) {
        Track_82A69BD8 *track = &self->tracks[i];
        int shiftRight = self->shiftRight;
        int count = track->timeline->count;
        int before = track->timeline->positions[count - 1];
        int candidate;

        if (shiftRight) {
            before >>= self->shift;
        } else if (self->shiftLeft) {
            before <<= self->shift;
        }
        if (self->mode <= 2) {
            int after = track->timeline->positions[count];
            short x, y;
            if (shiftRight) {
                after >>= self->shift;
            } else if (self->shiftLeft) {
                after <<= self->shift;
            }
            fn_82A6E290(self, 1, (short)before, (short)after, (short)before, &x, &y);
            candidate = x - (before * 3) / 2 + self->end;
        } else {
            candidate = self->end - before / 2;
        }
        candidate += self->end / 2;
        if (candidate < minimum) {
            minimum = candidate;
        }
    }
    *out = minimum - self->offset;
}
