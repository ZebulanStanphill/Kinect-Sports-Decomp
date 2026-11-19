typedef struct Range_82C175C0 {
    unsigned int first;  /* 0x00 */
    unsigned int second; /* 0x04 */
} Range_82C175C0;

typedef struct Request_82C175C0 {
    void *buffer;         /* 0x00 */
    unsigned int size;    /* 0x04 */
    int flags;            /* 0x08 */
    int offset;           /* 0x0c */
    int length;           /* 0x10 */
    int pad14;            /* 0x14 */
    __int64 position;     /* 0x18 */
    Range_82C175C0 range; /* 0x20 */
} Request_82C175C0;

typedef struct Context_82C175C0 {
    char pad0[0x334];
    int busy; /* 0x334 */
} Context_82C175C0;

typedef struct Decoder_82C175C0 Decoder_82C175C0;

struct Decoder_82C175C0 {
    Context_82C175C0 *context; /* 0x000 */
    char pad4[0xe0 - 0x4];
    void *pending; /* 0x0e0 */
    char padE4[0x2b4 - 0xe4];
    int state; /* 0x2b4 */
    int ready; /* 0x2b8 */
    int pad2bc;
    int started; /* 0x2c0 */
    int pad2c4;
    int (*submit)(Decoder_82C175C0 *self, Request_82C175C0 *request); /* 0x2c8 */
};

extern void *memset(void *dst, int value, unsigned int size);

int fn_82C175C0(Decoder_82C175C0 *decoder, void *buffer, unsigned int size, int flags, int offset, int length,
                __int64 position, int *state, const Range_82C175C0 *range)
{
    int hr = 0;
    Request_82C175C0 request;

    if (decoder == 0 || decoder->context == 0 || (buffer == 0 && size != 0) || state == 0) {
        hr = 0x80070057;
    } else if (decoder->started != 0 && decoder->ready != 0 && flags == 0) {
        if (decoder->pending == 0) {
            decoder->state = 1;
        }
    } else {
        decoder->state = 0;
        memset(&request, 0, sizeof(request));
        request.buffer = buffer;
        request.size = size;
        request.length = length;
        request.position = position;
        request.flags = flags;
        request.offset = offset;
        if (range != 0) {
            request.range.second = range->second;
            request.range.first = range->first;
        }
        hr = decoder->submit(decoder, &request);
        if (hr >= 0 && decoder->context->busy == 0) {
            decoder->state = 2;
        }
    }
    if (state != 0 && decoder != 0) {
        *state = decoder->state;
    }
    return hr;
}
