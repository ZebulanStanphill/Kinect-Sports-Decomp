typedef struct Source_8279A300 {
    char pad00[0x14];
    char queue[0x1c];      /* 0x14 */
    unsigned int position; /* 0x30 */
} Source_8279A300;

typedef struct Base_8279A300 {
    char pad00[0x1c];
    unsigned int offset; /* 0x1c */
} Base_8279A300;

typedef struct Reader_8279A300 {
    char pad00[0x1c];
    Source_8279A300 *source; /* 0x1c */
    char pad20[0x8];
    unsigned int buffered; /* 0x28 */
    char pad2c[0x4];
    Base_8279A300 *base; /* 0x30 */
    char pad34[0x18];
    char output[0x1c];  /* 0x4c */
    unsigned int start; /* 0x68 */
    char pad6c[0x3c];
    unsigned int total; /* 0xa8 */
} Reader_8279A300;

extern unsigned int fn_8278FDC8(void *queue);
extern void fn_82792180(void *output, unsigned int size);

static __forceinline int HasQueued(Reader_8279A300 *self)
{
    return (int)self->source != 0 && fn_8278FDC8(self->source->queue) != 0;
}

void fn_8279A300(Reader_8279A300 *self, unsigned int size)
{
    if (HasQueued(self)) {
        unsigned int start = self->start + self->base->offset;
        unsigned int position = self->source->position;
        if (start <= position && start + size >= position) {
            unsigned int skip = position - start;
            unsigned int buffered;
            unsigned int available;
            if (skip >= size) {
                skip = size;
            }
            available = fn_8278FDC8(self->source->queue);
            buffered = self->buffered - skip + size;
            if (buffered > available) {
                available = fn_8278FDC8(self->source->queue);
                skip = self->buffered - available + size;
                available = fn_8278FDC8(self->source->queue);
                self->buffered = available;
                self->total += available;
            } else {
                self->buffered = buffered;
                self->total = self->total - skip + size;
            }
            size = skip;
        }
    }
    if (size != 0) {
        fn_82792180(self->output, size);
        self->total = self->total + size;
    }
}
