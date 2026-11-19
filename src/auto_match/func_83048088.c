typedef struct Stream_83048088 {
    char pad0[0x1c];
    unsigned short loops; /* 0x1c */
    char pad1e[0x28 - 0x1e];
    unsigned int position;     /* 0x28 */
    unsigned int loopStart;    /* 0x2c */
    unsigned int end;          /* 0x30 */
    unsigned int length;       /* 0x34 */
    unsigned int start;        /* 0x38 */
    unsigned short blockAlign; /* 0x3c */
} Stream_83048088;

extern void fn_8304D6C8(Stream_83048088 *stream, unsigned int block, unsigned int count,
                        unsigned int blockCount);

int fn_83048088(Stream_83048088 *stream, unsigned int *count)
{
    int result = 0x2d;
    unsigned int bytes = stream->blockAlign * *count;
    unsigned int end;
    unsigned int available;

    if (stream->loops != 1) {
        end = stream->end;
    } else {
        end = stream->start + stream->length;
    }
    available = end - stream->position;
    if (bytes > available) {
        *count = available / stream->blockAlign;
        bytes = available;
    }
    fn_8304D6C8(stream, (stream->position - stream->start) / stream->blockAlign, *count,
                stream->length / stream->blockAlign);
    stream->position += bytes;
    if (stream->position == end) {
        if (stream->loops != 1) {
            stream->position = stream->loopStart;
            if (stream->loops != 0) {
                stream->loops--;
            }
        } else {
            result = 0x11;
        }
    }
    return result;
}
