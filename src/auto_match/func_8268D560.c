typedef struct Format_8268D560 {
    int type;              /* 0x00 */
    unsigned int value;    /* 0x04 */
    unsigned int capacity; /* 0x08 */
} Format_8268D560;

extern void fn_8268D4B8(Format_8268D560 *, const char *, const float *, const float *, const float *,
                        const float *, const float *, const float *);

void fn_8268D560(const float *values, unsigned int value)
{
    struct {
        float last;
        float first;
        Format_8268D560 format;
    } frame;

    frame.format.type = 2;
    frame.format.value = value;
    frame.format.capacity = 0x200;
    frame.last = values[5] * 0.05f;
    frame.first = values[2] * 0.05f;
    fn_8268D4B8(&frame.format, "| {0:4.4} {1:4.4} {2:4.4} |\n| {3:4.4} {4:4.4} {5:4.4} |\n", values,
                values + 1, &frame.first, values + 3, values + 4, &frame.last);
}
