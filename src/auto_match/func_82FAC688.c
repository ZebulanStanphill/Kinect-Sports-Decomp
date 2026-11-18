typedef struct Format_82FAC688 {
    char pad0[0x10];
    unsigned int flags; /* 0x10 */
    char pad14[4];
    unsigned short type; /* 0x18 */
    char pad1A[0x24 - 0x1a];
    int headerSize; /* 0x24 */
} Format_82FAC688;

typedef struct Track_82FAC688 {
    int pad0;
    Format_82FAC688 format; /* 0x04 */
} Track_82FAC688;

typedef struct Ring_82FAC688 {
    char pad0[8];
    int start;             /* 0x08 */
    int size;              /* 0x0c */
    unsigned int capacity; /* 0x10 */
    int readPos;           /* 0x14 */
} Ring_82FAC688;

typedef struct Stream_82FAC688 {
    char pad0[0x6c];
    Track_82FAC688 *track; /* 0x6c */
    char pad70[0x198 - 0x70];
    Ring_82FAC688 *ring; /* 0x198 */
} Stream_82FAC688;

typedef struct Decoder_82FAC688 {
    char pad0[0x5c];
    int consumed;         /* 0x5c */
    unsigned int pending; /* 0x60 */
} Decoder_82FAC688;

extern int fn_82FAE140(unsigned int pending);

int fn_82FAC688(Decoder_82FAC688 *decoder, Stream_82FAC688 *stream, int *offset, unsigned int *position)
{
    Track_82FAC688 *track = stream->track;
    Format_82FAC688 *format = &track->format;
    int consumed;
    Ring_82FAC688 *ring;
    int total;

    if ((track->format.flags & 0x3e000000) == 0x2000000) {
        *offset = track->format.headerSize;
    } else {
        *offset = 0;
    }
    if (format->type == 3) {
        *offset += 0x180;
    }
    consumed = decoder->consumed;
    ring = stream->ring;
    total = fn_82FAE140(decoder->pending) + consumed;
    if (*offset + total >= ring->size + ring->start) {
        return 0;
    }
    *position = (unsigned int)(ring->readPos - ring->start + *offset + total) % ring->capacity;
    if (format->type == 3) {
        *offset -= 0x180;
    }
    return 1;
}
