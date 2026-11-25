typedef struct Obj_82F601A8 {
    char pad0[4];
    unsigned char initialised; /* 0x04 */
    char pad5[3];
    unsigned int count;      /* 0x08 */
    unsigned int position;   /* 0x0c */
    int format;              /* 0x10 */
    unsigned int allocFlags; /* 0x14 */
    unsigned int flags;      /* 0x18 */
    void *buffer;            /* 0x1c */
    void *backBuffer;        /* 0x20 */
    char stream[0x6c];       /* 0x24 */
    char queue[0x44];        /* 0x90 */
    char lock[0x1c];         /* 0xd4 */
} Obj_82F601A8;

extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern void *fn_8265C940(unsigned int size, unsigned int flags);
extern void fn_8265C990(void *p, unsigned int flags);
extern int fn_82F60B90(void *stream, int format, unsigned int rate);
extern void fn_82F60C10(void *stream);
extern int fn_82F61538(void *queue, unsigned int count, unsigned int extra);

int fn_82F601A8(Obj_82F601A8 *self, int format, unsigned int rate, unsigned int count, unsigned int flags,
                unsigned int extra)
{
    int hr;
    unsigned int size;

    if (count < 1 || rate < 1) {
        return 0x82240403;
    }
    RtlEnterCriticalSection(self->lock);
    if (self->initialised == 0) {
        size = count * 4;
        self->allocFlags = 0x64004000;
        self->buffer = fn_8265C940(size, 0x64004000);
        self->backBuffer = fn_8265C940(size, self->allocFlags);
        if (self->buffer == 0 || self->backBuffer == 0) {
            hr = 0x82240402;
        } else {
            self->flags = flags;
            self->count = count;
            self->position = 0;
            hr = fn_82F60B90(self->stream, format, rate);
            if (hr >= 0) {
                self->format = format;
                if ((flags & 1) == 0) {
                    extra = (flags & 2) ? extra : 0;
                }
                hr = fn_82F61538(self->queue, count, extra);
                if (hr < 0) {
                    fn_82F60C10(self->stream);
                    fn_8265C990(self->buffer, self->allocFlags);
                    fn_8265C990(self->backBuffer, self->allocFlags);
                    self->count = 0;
                    self->position = 0;
                    self->buffer = 0;
                } else {
                    self->initialised = 1;
                }
            } else {
                fn_8265C990(self->buffer, self->allocFlags);
                fn_8265C990(self->backBuffer, self->allocFlags);
                self->count = 0;
                self->position = 0;
                self->buffer = 0;
            }
        }
    } else {
        hr = 0x82240404;
    }
    RtlLeaveCriticalSection(self->lock);
    return hr;
}
