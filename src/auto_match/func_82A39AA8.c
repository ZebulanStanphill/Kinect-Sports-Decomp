typedef struct Encoder_82A39AA8 {
    unsigned char *window;          /* 0x0 */
    unsigned int windowSize;        /* 0x4 */
    unsigned int windowMask;        /* 0x8 */
    char pad0c[0x2ea9];             /* 0xc */
    unsigned char numPositionSlots; /* 0x2eb5 */
    char pad2eb6[0x22];             /* 0x2eb6 */
    int unk_2ed8;                   /* 0x2ed8 */
    int unk_2edc;                   /* 0x2edc */
    int unk_2ee0;                   /* 0x2ee0 */
    unsigned char slotBits[0x104];  /* 0x2ee4 */
    unsigned char *output;          /* 0x2fe8 */
    int unk_2fec;                   /* 0x2fec */
    int unk_2ff0;                   /* 0x2ff0 */
    unsigned char *literals;        /* 0x2ff4 */
    int unk_2ff8;                   /* 0x2ff8 */
    int unk_2ffc;                   /* 0x2ffc */
    int unk_3000;                   /* 0x3000 */
    int unk_3004;                   /* 0x3004 */
    int unk_3008;                   /* 0x3008 */
    unsigned char *matches;         /* 0x300c */
} Encoder_82A39AA8;

extern void fn_82A39788(Encoder_82A39AA8 *encoder);

void fn_82A39AA8(void *buffer, unsigned int *outSize, unsigned int windowSize, unsigned int offset,
                 unsigned int flags)
{
    unsigned int windowBytes = windowSize + 0x105;
    unsigned int size = windowBytes + offset + sizeof(Encoder_82A39AA8);

    if (flags & 1) {
        size += 0x980a;
    } else if (flags & 0x80000000) {
        size += 0x8000;
    }
    *outSize = size + 0x8000;
    if (buffer != 0) {
        Encoder_82A39AA8 *encoder = (Encoder_82A39AA8 *)((char *)buffer + offset);
        unsigned char *window = (unsigned char *)(encoder + 1);
        unsigned int position;
        unsigned char *next;

        fn_82A39788(encoder);
        encoder->windowSize = windowSize;
        encoder->unk_2ed8 = 0;
        encoder->unk_2edc = 0;
        encoder->windowMask = windowSize - 1;
        encoder->unk_2ee0 = 0;
        encoder->numPositionSlots = 4;
        position = 4;
        do {
            position += 1 << encoder->slotBits[encoder->numPositionSlots++];
        } while (position < windowSize);
        encoder->window = window;
        encoder->unk_2fec = 0;
        encoder->output = window + windowBytes;
        next = encoder->output + 0x8000;
        encoder->unk_2ff0 = 0;
        encoder->literals = 0;
        encoder->unk_2ff8 = 0;
        encoder->unk_2ffc = 0;
        encoder->unk_3000 = 0;
        encoder->unk_3004 = 0;
        encoder->unk_3008 = 0;
        if (flags & 1) {
            encoder->literals = next;
        } else if (flags & 0x80000000) {
            encoder->matches = next;
        }
    }
}
