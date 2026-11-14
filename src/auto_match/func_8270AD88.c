typedef struct Stream_8270AD88 {
    unsigned char pad[8];
    unsigned int blockSize;
    unsigned char pad0c[0x44];
    unsigned int alignment;
} Stream_8270AD88;

typedef struct Entry_8270AD88 {
    unsigned char pad[0xc];
    unsigned int start;
    unsigned int end;
    unsigned int size;
    unsigned char pad18[6];
    unsigned short remainder;
} Entry_8270AD88;

unsigned int fn_8270AD88(Stream_8270AD88 *self, Entry_8270AD88 *e)
{
    unsigned int extra = e->start + self->blockSize == e->end ? self->blockSize : 0;
    unsigned int pad;
    if (e->remainder != 0) {
        pad = self->alignment - e->remainder;
    } else {
        pad = 0;
    }
    return e->size + e->remainder + pad + extra;
}
