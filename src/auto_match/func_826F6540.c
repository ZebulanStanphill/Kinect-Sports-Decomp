typedef struct Stream_826F6540 {
    const unsigned char *data; /* 0x0 */
    int f4;                    /* 0x4 */
    unsigned int pos;          /* 0x8 */
    unsigned int bits;         /* 0xc */
} Stream_826F6540;

typedef struct Tag_826F6540 {
    char pad0[4];
    unsigned char present; /* 0x4 */
    unsigned char data[1]; /* 0x5 */
} Tag_826F6540;

typedef struct Target_826F6540 {
    char pad0[4];
    char sub4[0x20];     /* 0x4 */
    char sub24[0x1c];    /* 0x24 */
    unsigned int height; /* 0x40 */
    unsigned int width;  /* 0x44 */
    char pad48[3];
    unsigned char flags; /* 0x4b */
    int f4c;             /* 0x4c */
    int f50;             /* 0x50 */
    int f54;             /* 0x54 */
} Target_826F6540;

extern void fn_826E7BF8(Stream_826F6540 *stream, void *out);
extern void fn_826E7E60(Stream_826F6540 *stream, void *out);

static __forceinline unsigned short ReadU16(Stream_826F6540 *stream)
{
    unsigned short value;

    if (stream->bits != 0) {
        stream->pos = stream->pos + 1;
    }
    stream->bits = 0;
    value = (unsigned short)(stream->data[stream->pos] | (stream->data[stream->pos + 1] << 8));
    stream->pos = stream->pos + 2;
    return value;
}

static __forceinline void SetFlags(unsigned char *flags, unsigned char mask)
{
    *flags |= mask;
}

void fn_826F6540(Tag_826F6540 *tag, Target_826F6540 *target)
{
    Stream_826F6540 stream;

    stream.data = tag->data;
    target->f50 = 0;
    target->f4c = 0;
    target->f54 = 0;
    SetFlags(&target->flags, 2);
    stream.pos = 0;
    stream.f4 = -1;
    stream.bits = 0;
    target->width = ReadU16(&stream);
    SetFlags(&target->flags, 1);
    target->height = ReadU16(&stream);
    SetFlags(&target->flags, 4);
    fn_826E7BF8(&stream, target->sub24);
    if (tag->present != 0) {
        SetFlags(&target->flags, 8);
        fn_826E7E60(&stream, target->sub4);
    }
}
