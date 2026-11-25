unsigned long _byteswap_ulong(unsigned long value);
extern void *memcpy(void *dst, const void *src, unsigned int n);

typedef struct MediaBuffer_82E581D0 MediaBuffer_82E581D0;

typedef struct MediaBufferVtbl_82E581D0 {
    void *queryInterface; /* 0x00 */
    void *addRef;         /* 0x04 */
    void *release;        /* 0x08 */
    void *setLength;      /* 0x0C */
    void *getMaxLength;   /* 0x10 */
    long (*getBufferAndLength)(MediaBuffer_82E581D0 *self, unsigned char **buffer,
                               unsigned long *length); /* 0x14 */
} MediaBufferVtbl_82E581D0;

struct MediaBuffer_82E581D0 {
    MediaBufferVtbl_82E581D0 *vtable;
};

typedef struct Guid_82E581D0 {
    unsigned long data1;
    unsigned short data2;
    unsigned short data3;
    unsigned char data4[8];
} Guid_82E581D0;

typedef struct ByteQueue_82E581D0 {
    unsigned char unknown0[0x18];
    unsigned int size; /* 0x18 */
} ByteQueue_82E581D0;

typedef struct Parser_82E581D0 Parser_82E581D0;

typedef struct ParserVtbl_82E581D0 {
    void *unknown0[10];
    long (*finish)(Parser_82E581D0 *self, unsigned long *size); /* 0x28 */
    unsigned __int64 (*getTotalSize)(Parser_82E581D0 *self);    /* 0x2C */
} ParserVtbl_82E581D0;

struct Parser_82E581D0 {
    ParserVtbl_82E581D0 *vtable;  /* 0x00 */
    int unknown4[2];              /* 0x04 */
    void *source;                 /* 0x0C */
    Guid_82E581D0 id;             /* 0x10 */
    unsigned __int64 payloadSize; /* 0x20 */
    ByteQueue_82E581D0 queue;     /* 0x28 */
    unsigned char flags;          /* 0x44 */
};

long fn_82EE5CC8(ByteQueue_82E581D0 *queue, MediaBuffer_82E581D0 *buffer, unsigned int offset,
                 unsigned int size);
int fn_82EE5F60(ByteQueue_82E581D0 *queue, char *destination, unsigned int size);
void fn_82E39C50(Guid_82E581D0 *guid, const unsigned char **pp);
void fn_82E579E0(ByteQueue_82E581D0 *queue);

long fn_82E581D0(Parser_82E581D0 *self, MediaBuffer_82E581D0 *buffer, unsigned long *processed)
{
    unsigned long length;
    const unsigned char *cursor;
    unsigned char *data;
    unsigned char header[24];
    unsigned int queued;
    unsigned __int64 total;
    unsigned __int64 remaining;
    unsigned int count;
    long hr;

    if (self->source == 0) {
        return 0xC00D36B6;
    }
    if (buffer == 0 || processed == 0) {
        return 0x80070057;
    }
    *processed = 0;
    length = 0;
    data = 0;
    hr = buffer->vtable->getBufferAndLength(buffer, &data, &length);
    if (hr < 0) {
        return hr;
    }
    queued = self->queue.size;
    if ((self->flags & 1) == 0) {
        if (queued >= 24) {
            return 0xC00D3A9A;
        }
        if (length >= 24 - queued) {
            if (queued != 0) {
                hr = fn_82EE5F60(&self->queue, (char *)header, queued);
                if (hr < 0) {
                    return hr;
                }
            }
            memcpy(header + queued, data, 24 - queued);
            cursor = header;
            fn_82E39C50(&self->id, &cursor);
            self->payloadSize =
                ((unsigned __int64)_byteswap_ulong(((const unsigned long *)cursor)[1]) << 32) |
                _byteswap_ulong(((const unsigned long *)cursor)[0]);
            self->flags |= 1;
        } else {
            hr = fn_82EE5CC8(&self->queue, buffer, 0, length);
            if (hr < 0) {
                return hr;
            }
            *processed = length;
            return 0x400D3A98;
        }
    }
    total = self->vtable->getTotalSize(self);
    remaining = total - queued;
    count = (unsigned int)remaining;
    if (remaining > length) {
        count = length;
    }
    hr = fn_82EE5CC8(&self->queue, buffer, 0, count);
    if (hr < 0) {
        return hr;
    }
    if (self->queue.size >= total) {
        hr = self->vtable->finish(self, processed);
        *processed -= queued;
        if (hr == 0) {
            self->flags |= 2;
            fn_82E579E0(&self->queue);
        }
    } else {
        hr = 0x400D3A98;
        *processed = count;
    }
    return hr;
}
