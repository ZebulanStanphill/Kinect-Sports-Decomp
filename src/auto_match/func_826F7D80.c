typedef struct Stream_826F7D80 {
    unsigned char *base;     /* 0x0 */
    int unknown4;            /* 0x4 */
    int pos;                 /* 0x8 */
    unsigned int unusedBits; /* 0xc */
} Stream_826F7D80;

typedef struct EventId_826F7D80 {
    unsigned int id;        /* 0x0 */
    int unknown4;           /* 0x4 */
    unsigned short keyCode; /* 0x8 */
    unsigned char unknownA; /* 0xa */
    signed char unknownB;   /* 0xb */
    unsigned char unknownC; /* 0xc */
    unsigned char unknownD; /* 0xd */
} EventId_826F7D80;

typedef struct Buffer_826F7D80 {
    void *vtable;        /* 0x0 */
    int refs;            /* 0x4 */
    void *data;          /* 0x8 */
    unsigned int length; /* 0xc */
} Buffer_826F7D80;

typedef struct BufferPtr_826F7D80 {
    Buffer_826F7D80 *object;
} BufferPtr_826F7D80;

typedef struct Handler_826F7D80 {
    EventId_826F7D80 event;    /* 0x00 */
    BufferPtr_826F7D80 buffer; /* 0x10 */
} Handler_826F7D80;

extern void fn_8267C4F0(void *object);
extern void fn_826A71F0(Buffer_826F7D80 *buffer, Stream_826F7D80 *stream, int length);
extern Buffer_826F7D80 *fn_826A9FB0(void);

static __forceinline void Align_826F7D80(Stream_826F7D80 *stream)
{
    if (stream->unusedBits != 0) {
        stream->pos++;
    }
    stream->unusedBits = 0;
}

static __forceinline unsigned char ReadU8_826F7D80(Stream_826F7D80 *stream)
{
    Align_826F7D80(stream);
    return stream->base[stream->pos++];
}

static __forceinline unsigned int ReadU32_826F7D80(Stream_826F7D80 *stream)
{
    unsigned int value;

    Align_826F7D80(stream);
    value = stream->base[stream->pos] | (stream->base[stream->pos + 1] << 8) |
            (stream->base[stream->pos + 2] << 16) | (stream->base[stream->pos + 3] << 24);
    stream->pos += 4;
    return value;
}

static __forceinline void SetEvent_826F7D80(EventId_826F7D80 *event, unsigned int id)
{
    EventId_826F7D80 value;

    value.id = id;
    value.unknown4 = 0;
    value.keyCode = 0;
    value.unknownA = 0;
    value.unknownB = -1;
    value.unknownC = 0;
    value.unknownD = 0;
    *event = value;
}

static __forceinline void SetBuffer_826F7D80(BufferPtr_826F7D80 *pointer, Buffer_826F7D80 *buffer)
{
    if (pointer->object != 0) {
        fn_8267C4F0(pointer->object);
    }
    pointer->object = buffer;
}

void fn_826F7D80(Handler_826F7D80 *self, Stream_826F7D80 *stream, unsigned int eventId)
{
    unsigned int length;
    unsigned int i;

    SetEvent_826F7D80(&self->event, eventId);
    length = ReadU32_826F7D80(stream);
    if (self->event.id & 0x20000) {
        length--;
        self->event.keyCode = ReadU8_826F7D80(stream);
    }
    SetBuffer_826F7D80(&self->buffer, fn_826A9FB0());
    fn_826A71F0(self->buffer.object, stream, length);
    if (length != self->buffer.object->length) {
        if (length > self->buffer.object->length) {
            for (i = length - self->buffer.object->length; i != 0; i--) {
                ReadU8_826F7D80(stream);
            }
        } else {
            stream->pos = stream->pos - self->buffer.object->length + length;
        }
    }
}
