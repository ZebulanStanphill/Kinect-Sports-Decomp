extern void *memset(void *destination, int value, unsigned int size);
extern int fn_82E73380(void *self, unsigned __int64 duration, unsigned __int64 start);
extern void fn_82E73080(void *self);

typedef struct Format_82E73A90 {
    int unused;
    unsigned int start;
    unsigned short duration;
    unsigned short flags;
    unsigned int reserved;
} Format_82E73A90;

typedef struct Stream_82E73A90 Stream_82E73A90;

typedef struct StreamVtable_82E73A90 {
    void *slots0[5];
    int (*set)(Stream_82E73A90 *self, Format_82E73A90 *format);
    void *slots1[4];
    int (*get)(Stream_82E73A90 *self, Format_82E73A90 *format);
} StreamVtable_82E73A90;

struct Stream_82E73A90 {
    StreamVtable_82E73A90 *vtable;
};

typedef struct Context_82E73A90 {
    int unused;
    unsigned int increment; /* 0x04 */
    char padding[0x1d0];
    Stream_82E73A90 *stream; /* 0x1d8 */
    int unused2;
    unsigned __int64 start;    /* 0x1e0 */
    unsigned __int64 position; /* 0x1e8 */
    int count;                 /* 0x1f0 */
    int unused3;
    unsigned __int64 startUnits; /* 0x1f8 */
    unsigned __int64 unused4;
    unsigned __int64 durationUnits; /* 0x208 */
} Context_82E73A90;

void fn_82E73A90(Context_82E73A90 *self, unsigned __int64 duration)
{
    Format_82E73A90 format;
    memset(&format, 0, sizeof(format));
    if (self->stream->vtable->get(self->stream, &format) >= 0) {
        unsigned __int64 start = self->start;
        unsigned __int64 startUnits = start / 10000;
        unsigned __int64 durationUnits = duration / 10000;
        format.start = (unsigned int)startUnits;
        format.duration = (unsigned short)durationUnits;
        if (self->stream->vtable->set(self->stream, &format) >= 0) {
            if (fn_82E73380(self, duration, start) >= 0) {
                self->startUnits = startUnits;
                self->durationUnits = durationUnits;
                self->position = self->increment + self->position;
                ++self->count;
                fn_82E73080(self);
            }
        }
    }
}
