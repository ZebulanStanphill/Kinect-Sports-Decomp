typedef struct Format_82BD4438 {
    char pad0[0x18];
    unsigned int size;
} Format_82BD4438;

typedef struct Stream_82BD4438 {
    char pad0[0x18];
    Format_82BD4438 *format;
} Stream_82BD4438;

typedef struct Self_82BD4438 {
    char pad0[8];
    Stream_82BD4438 *stream;    /* 0x08 */
    char pad0c[0x24 - 0xc];
    int open;                   /* 0x24 */
    char pad28[0x4c - 0x28];
    void *sink;                 /* 0x4c */
} Self_82BD4438;

extern int fn_82BD8BE8(void *sink, char *data, unsigned int size);

int fn_82BD4438(Self_82BD4438 *self, char *data, unsigned int *bytes)
{
    unsigned int i;
    int hr = 0;
    unsigned int total;
    unsigned int stride;
    unsigned int count;
    char *p;

    if (self->open == 0) {
        return 0x80004001;
    }
    total = *bytes;
    stride = self->stream->format->size + 2;
    *bytes = 0;
    count = total / stride;
    i = 0;
    if (count != 0) {
        p = data;
        do {
            hr = fn_82BD8BE8(self->sink, p, stride);
            if (hr < 0) {
                break;
            }
            if (hr == 1) {
                break;
            }
            p += stride;
            *bytes += stride;
        } while (++i < count);
    }
    return hr;
}
