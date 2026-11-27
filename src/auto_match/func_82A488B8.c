typedef struct ErrorSink_82A488B8 ErrorSink_82A488B8;

typedef struct ErrorSinkVtbl_82A488B8 {
    void *slot0;
    void *slot1;
    void (*OnError)(ErrorSink_82A488B8 *sink, int result);
} ErrorSinkVtbl_82A488B8;

struct ErrorSink_82A488B8 {
    const ErrorSinkVtbl_82A488B8 *vtable;
};

typedef struct Owner_82A488B8 {
    int unk0;                /* 0x0 */
    ErrorSink_82A488B8 sink; /* 0x4 */
} Owner_82A488B8;

typedef struct Stream_82A488B8 {
    char pad000[0x34];
    Owner_82A488B8 *owner;    /* 0x034 */
    char pad038[8];           /* 0x038 */
    unsigned int channels;    /* 0x040 */
    char pad044[0x90];        /* 0x044 */
    unsigned int bufferBytes; /* 0x0d4 */
    char pad0D8[0xe8];        /* 0x0d8 */
    unsigned int sourceCount; /* 0x1c0 */
    char pad1C4[0x14];        /* 0x1c4 */
    void *sources;            /* 0x1d8 */
    char pad1DC[8];           /* 0x1dc */
    unsigned int capacity;    /* 0x1e4: frames in the ring */
    unsigned int position;    /* 0x1e8: write position, in frames */
} Stream_82A488B8;

extern int fn_82A47EB8(Stream_82A488B8 *stream, unsigned int bytes);
extern unsigned int fn_82A45350(void *sources, unsigned int index);
extern unsigned int fn_82A47A60(Stream_82A488B8 *stream, unsigned int frames, unsigned int position);
extern unsigned int fn_82A47958(Stream_82A488B8 *stream, unsigned int source, unsigned int frames,
                                unsigned int position);
extern void fn_82A48358(Stream_82A488B8 *stream, unsigned int frames, unsigned int position);

/* Mixes as many frames as every source can supply into the ring buffer, which
   holds 16-bit samples, and advances the write position. */
void fn_82A488B8(Stream_82A488B8 *stream, unsigned int pendingBytes, unsigned int requestedBytes)
{
    unsigned int frames;
    unsigned int available;
    unsigned int done;
    unsigned int first;
    unsigned int i;
    int result;

    result = 0;
    if (requestedBytes / (stream->channels * 2) > stream->capacity) {
        result = fn_82A47EB8(stream, stream->bufferBytes);
    }
    if (result >= 0) {
        frames = fn_82A45350(stream->sources, 0);
        for (i = 1; i < stream->sourceCount; i++) {
            available = fn_82A45350(stream->sources, i);
            frames = frames < available ? frames : available;
        }
        available = stream->capacity - pendingBytes / (stream->channels * 2);
        frames = frames < available ? frames : available;
        if (frames != 0) {
            if (stream->channels <= 2) {
                done = fn_82A47A60(stream, frames, stream->position);
                if (done != frames) {
                    fn_82A47A60(stream, frames - done, (stream->position + done) % stream->capacity);
                }
            } else {
                for (i = 0; i < stream->sourceCount; i++) {
                    done = fn_82A47958(stream, i, frames, stream->position);
                    if (done != frames) {
                        fn_82A47958(stream, i, frames - done, (stream->position + done) % stream->capacity);
                    }
                }
            }
            if (stream->position + frames > stream->capacity) {
                first = stream->capacity - stream->position;
                fn_82A48358(stream, first, stream->position);
                fn_82A48358(stream, frames - first, 0);
            } else {
                fn_82A48358(stream, frames, stream->position);
            }
            stream->position = (stream->position + frames) % stream->capacity;
        }
    } else {
        stream->owner->sink.vtable->OnError(&stream->owner->sink, result);
    }
}
