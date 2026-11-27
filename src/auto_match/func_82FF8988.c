typedef struct Stream_82FF8988 Stream_82FF8988;

typedef struct StreamVtbl_82FF8988 {
    void *slot00;
    void *slot04;
    void *slot08;
    void *slot0C;
    void *slot10;
    int (*Fill)(Stream_82FF8988 *self, int buffer, unsigned int size, int wait, unsigned char loop,
                float seconds, unsigned int *available); /* 0x14 */
    void *slot18;
    void (*IsAtEnd)(Stream_82FF8988 *self, unsigned char *atEnd); /* 0x1c */
    int (*Skip)(Stream_82FF8988 *self, unsigned __int64 count, int wait,
                unsigned __int64 *skipped); /* 0x20 */
    void *slot24;
    void *slot28;
    int (*Wait)(Stream_82FF8988 *self); /* 0x2c */
} StreamVtbl_82FF8988;

struct Stream_82FF8988 {
    StreamVtbl_82FF8988 *vtable;
};

typedef struct Reader_82FF8988 {
    int buffer;              /* 0x00 */
    int cursor;              /* 0x04 */
    unsigned int available;  /* 0x08 */
    unsigned int bufferSize; /* 0x0c */
    unsigned int blockSize;  /* 0x10 */
    int unknown14;           /* 0x14 */
    unsigned int position;   /* 0x18 */
    Stream_82FF8988 *stream; /* 0x1c */
    float bytesPerSecond;    /* 0x20 */
    unsigned char loop;      /* 0x24 */
} Reader_82FF8988;

int fn_82FF8988(Reader_82FF8988 *self, unsigned int count, unsigned int *consumed)
{
    int result;
    unsigned int step;
    unsigned int *available;
    unsigned int size;
    unsigned char atEnd;

    *consumed = 0;
    result = 1;
    if (self->stream != 0) {
        if (count != 0) {
            available = &self->available;
            do {
                step = *available;
                if (step != 0) {
                    if (step >= count) {
                        step = count;
                    }
                    self->cursor += step;
                    *consumed += step;
                    *available -= step;
                    count -= step;
                } else {
                    if (count <= self->bufferSize) {
                        size = (self->bufferSize / self->blockSize) * self->blockSize;
                        result = self->stream->vtable->Fill(self->stream, self->buffer, size, 1, self->loop,
                                                            (float)size / self->bytesPerSecond, available);
                        if (result != 1) {
                            break;
                        }
                        if (self->stream->vtable->Wait(self->stream) != 1) {
                            break;
                        }
                        self->stream->vtable->IsAtEnd(self->stream, &atEnd);
                        if (atEnd && *available < count) {
                            return 2;
                        }
                        self->cursor = self->buffer + count;
                        *consumed += count;
                        *available -= count;
                        count -= count;
                    } else {
                        unsigned __int64 skipped;

                        result = self->stream->vtable->Skip(self->stream, count, 1, &skipped);
                        if (result != 1) {
                            break;
                        }
                        *consumed = (unsigned int)skipped + *consumed;
                        count -= (unsigned int)skipped;
                    }
                }
            } while (count != 0);
        }
    } else {
        if (count >= self->available) {
            count = self->available;
        }
        *consumed = count;
        self->available -= count;
        self->position += *consumed;
    }
    return result;
}
