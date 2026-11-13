// Kinect Sports retail 4D5308C9, function 0x83039FF0 (64 bytes).
// Predicate on a descriptor: level byte at +0x4d above 2 and kind byte at +0x4c not 8..11.

typedef struct {
    char pad0[0x4c];
    unsigned char kind;
    unsigned char level;
} Desc_83039FF0;

unsigned char fn_83039FF0(Desc_83039FF0 *d)
{
    return d->level > 2 && d->kind != 8 && d->kind != 9 && d->kind != 10 && d->kind != 11;
}
