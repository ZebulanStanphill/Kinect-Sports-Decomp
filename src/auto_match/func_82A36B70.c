typedef struct Decoder_82A36B70 {
    unsigned char pad0[0x14];
} Decoder_82A36B70;

typedef struct Stream_82A36B70 {
    unsigned char pad0[8];
    unsigned int flags; /* 0x08 */
    unsigned char padc[8];
    Decoder_82A36B70 decoder; /* 0x14 */
} Stream_82A36B70;

extern void fn_82A36AE8(Stream_82A36B70 *self);
extern int fn_82A396F0(Decoder_82A36B70 *decoder, unsigned int id, unsigned char *data, unsigned int size,
                       unsigned char *address, unsigned int id2, unsigned int *written);

int fn_82A36B70(Stream_82A36B70 *self, unsigned char *address, unsigned int *outTotal, unsigned char *data,
                unsigned int size)
{
    unsigned int total;
    unsigned int remaining;
    unsigned int id;
    unsigned int length;
    unsigned int written;
    Decoder_82A36B70 *decoder;
    unsigned char *cursor;

    decoder = &self->decoder;
    total = 0;
    if (size > 5) {
        remaining = size - 5;
    } else {
        remaining = 0;
    }
    cursor = data;
    if ((self->flags & 1) == 0) {
        fn_82A36AE8(self);
    }
    while (remaining != 0) {
        written = 0;
        if (cursor[0] == 0xff) {
            remaining -= 5;
            id = (cursor[1] << 8) | cursor[2];
            length = (cursor[3] << 8) | cursor[4];
            cursor += 5;
            if (length < remaining) {
                remaining = length;
            }
        } else {
            length = (cursor[0] << 8) | cursor[1];
            id = 0x8000;
            cursor += 2;
            remaining -= 2;
        }
        fn_82A396F0(decoder, id, cursor, length, address, id, &written);
        remaining -= length;
        cursor += length;
        address += written;
        total += written;
    }
    *outTotal = total;
    return 0;
}
