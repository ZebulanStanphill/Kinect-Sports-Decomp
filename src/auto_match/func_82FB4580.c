typedef struct Stream_82FB4580 {
    char pad00[0x40];
    void *track; /* 0x40 */
    int base;    /* 0x44 */
} Stream_82FB4580;

typedef struct Source_82FB4580 {
    int value;               /* 0x0 */
    Stream_82FB4580 *stream; /* 0x4 */
} Source_82FB4580;

typedef struct Range_82FB4580 {
    int start;  /* 0x0 */
    int offset; /* 0x4 */
    int end;    /* 0x8 */
} Range_82FB4580;

typedef struct Format_82FB4580 {
    char pad00[0x8];
    int blocks; /* 0x8 */
    char pad0c[0x4];
    int skip;            /* 0x10 */
    unsigned int flags;  /* 0x14 */
    char info[0x14];     /* 0x18 */
    unsigned short type; /* 0x2c */
} Format_82FB4580;

typedef struct Reader_82FB4580 {
    char pad00[0x40];
    int ready; /* 0x40 */
} Reader_82FB4580;

extern int fn_82FA9A38(Stream_82FB4580 *self, int key, int value, int position, int minimum, int count,
                       unsigned char clamp, unsigned char force, Range_82FB4580 *out);
extern int fn_82FA9400(Stream_82FB4580 *stream, int position);
extern int fn_82FA9410(Stream_82FB4580 *stream, int position);
extern int fn_82FABE28(void *reader, char *info, int position, int *end);
extern Reader_82FB4580 *fn_82FABE80(void *reader);

int fn_82FB4580(int key, Format_82FB4580 *format, Source_82FB4580 *source, void *reader,
                Range_82FB4580 *range)
{
    int length = format->blocks * 3 * 16 - format->skip;
    int result;
    int delta;
    int position;
    Reader_82FB4580 *next;
    int size;
    int firstPosition;

    size = length > range->end ? length : range->end;
    firstPosition = size - range->offset;
    result = fn_82FA9A38(source->stream, key, source->value, firstPosition, 0, format->flags >> 27,
                         (format->type & 0xe000) != 0x2000, 1, range);
    if ((format->type & 0xe000) == 0x2000 && result == 1 && (int)source->stream->track != 0 &&
        (next = fn_82FABE80(reader)) != 0 && next->ready != 0) {
        int start;
        Stream_82FB4580 *stream = source->stream;

        start = fn_82FA9400(stream, range->start);
        result = fn_82FABE28(reader, format->info, start, &range->end);
        if (result == 1) {
            Stream_82FB4580 *deltaStream = source->stream;

            delta = fn_82FA9410(deltaStream, range->offset);
            position = range->start + delta;
            while (range->end > position) {
                Stream_82FB4580 *loopStream = source->stream;
                int minimum = fn_82FA9400(loopStream, range->start) + range->end;
                Stream_82FB4580 *readStream = source->stream;
                Stream_82FB4580 *nextStream;

                result = fn_82FA9A38(readStream, key, source->value, position, minimum, format->flags >> 27,
                                     0, 1, range);
                if (result != 1) {
                    break;
                }
                nextStream = source->stream;
                result =
                    fn_82FABE28(reader, format->info, fn_82FA9400(nextStream, range->start), &range->end);
                if (result != 1) {
                    break;
                }
                position = range->start + delta;
            }
        }
    }
    return result;
}
