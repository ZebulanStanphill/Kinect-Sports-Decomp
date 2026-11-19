typedef struct Stream_8292D960 {
    int pad0[4];
    int hasColor;  /* 0x10 */
    int f14;       /* 0x14 */
    int hasNormal; /* 0x18 */
    int f1c;       /* 0x1c */
    int base;      /* 0x20 */
    int pad24[15];
    int strideA; /* 0x60 */
    int strideB; /* 0x64 */
    int count;   /* 0x68 */
} Stream_8292D960;

typedef struct Vector4_8292D960 {
    float x; /* 0x0 */
    float y; /* 0x4 */
    float z; /* 0x8 */
    float w; /* 0xc */
} Vector4_8292D960;

extern int fn_828F1108(Vector4_8292D960 *out, unsigned int offset, int count);
extern int fn_82B8FD40(Stream_8292D960 *stream, Vector4_8292D960 *out);
extern int fn_82925600(Stream_8292D960 *stream, Vector4_8292D960 *out);

void fn_8292D960(Stream_8292D960 *stream, int a, int b, Vector4_8292D960 *out)
{
    unsigned int offset = stream->strideA * a + stream->strideB * b + stream->base;
    unsigned int end = stream->count * 2 + offset;

    for (; offset < end; offset += 2) {
        fn_828F1108(out, offset, 1);
        out->y = out->z = out->w = 1.0f;
        out++;
    }
    if (stream->hasNormal != 0) {
        fn_82B8FD40(stream, out - stream->count);
    }
    if (stream->hasColor != 0) {
        fn_82925600(stream, out - stream->count);
    }
}
