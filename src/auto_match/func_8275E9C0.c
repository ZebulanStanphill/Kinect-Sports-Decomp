typedef struct Reader_8275E9C0 {
    int pad0;
    unsigned int index; /* 0x04 */
    unsigned int count; /* 0x08 */
    int padC;
    int pad10;
    int flags;         /* 0x14 */
    unsigned int mask; /* 0x18 */
    short *shortData;  /* 0x1c */
    int *intData;      /* 0x20 */
} Reader_8275E9C0;

typedef struct Segment_8275E9C0 {
    int values[4]; /* 0x00 */
    int count;     /* 0x10 */
} Segment_8275E9C0;

void fn_8275E9C0(Reader_8275E9C0 *reader, Segment_8275E9C0 *segment)
{
    int *out;

    if (reader->index >= reader->count) {
        return;
    }
    if (reader->shortData != 0) {
        if (reader->mask > 0x8000) {
            reader->flags = *reader->shortData++;
            reader->mask = 1;
        }
        out = segment->values;
        if (reader->flags & reader->mask) {
            *out++ = *reader->shortData;
            reader->shortData++;
            *out++ = *reader->shortData;
            reader->shortData++;
            *out++ = *reader->shortData;
            reader->shortData++;
            *out++ = *reader->shortData;
            reader->shortData++;
        } else {
            *out++ = *reader->shortData;
            reader->shortData++;
            *out++ = *reader->shortData;
            reader->shortData++;
        }
    } else {
        if (reader->mask == 0) {
            reader->flags = *reader->intData++;
            reader->mask = 1;
        }
        out = segment->values;
        if (reader->flags & reader->mask) {
            *out++ = *reader->intData;
            reader->intData++;
            *out++ = *reader->intData;
            reader->intData++;
            *out++ = *reader->intData;
            reader->intData++;
            *out++ = *reader->intData;
            reader->intData++;
        } else {
            *out++ = *reader->intData;
            reader->intData++;
            *out++ = *reader->intData;
            reader->intData++;
        }
    }
    reader->index++;
    reader->mask <<= 1;
    segment->count = out - segment->values;
}
