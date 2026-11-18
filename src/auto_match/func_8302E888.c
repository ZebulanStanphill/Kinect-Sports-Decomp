typedef struct Object_8302E888 Object_8302E888;

typedef struct Range_8302E888 {
    int begin; /* 0x0 */
    int end;   /* 0x4 */
} Range_8302E888;

typedef struct Scratch_8302E888 {
    Range_8302E888 head;     /* 0x0 */
    int unused8[2];          /* 0x8 */
    Range_8302E888 body;     /* 0x10 */
    Range_8302E888 *first;   /* 0x18 */
    unsigned char flag0;     /* 0x1c */
    unsigned char flag1;     /* 0x1d */
    Object_8302E888 *object; /* 0x20 */
    int count;               /* 0x24 */
} Scratch_8302E888;

typedef struct Decoder_8302E888 {
    char pad0[0x11f];
    unsigned char flags; /* 0x11f */
    char pad120[0x122 - 0x120];
    unsigned char busy; /* 0x122 */
} Decoder_8302E888;

typedef struct Stream_8302E888 {
    int started;             /* 0x0 */
    Decoder_8302E888 *owner; /* 0x4 */
    char pad8[0x78 - 0x8];
    Range_8302E888 *scratch; /* 0x78 */
} Stream_8302E888;

extern int fn_8302E258(Decoder_8302E888 *self, Stream_8302E888 *stream);
extern int fn_8302E350(Decoder_8302E888 *self, Stream_8302E888 *stream);
extern Object_8302E888 *fn_83032B40(void);
extern void fn_83032D88(Object_8302E888 *object);

static __forceinline void Reset(Object_8302E888 **slot, Object_8302E888 *object)
{
    Object_8302E888 *previous = *slot;
    *slot = object;
    if (previous != 0) {
        fn_83032D88(previous);
    }
}

static __forceinline void Release(Object_8302E888 **slot)
{
    if (*slot != 0) {
        fn_83032D88(*slot);
    }
}

int fn_8302E888(Decoder_8302E888 *self, Stream_8302E888 *stream)
{
    Scratch_8302E888 scratch;
    int result;

    self->busy = 1;
    if ((self->flags & 2) != 0) {
        if (stream->started == 0) {
            stream->owner = self;
            stream->started = 1;
            scratch.head.begin = 0;
            scratch.head.end = 0;
            scratch.body.begin = 0;
            scratch.body.end = 0;
            scratch.first = &scratch.head;
            scratch.flag0 = 0;
            scratch.flag1 = 0;
            scratch.object = 0;
            scratch.count = 0;
            Reset(&scratch.object, fn_83032B40());
            if (scratch.object == 0) {
                return 2;
            }
            stream->scratch = &scratch.body;
            result = fn_8302E350(self, stream);
            Release(&scratch.object);
            return result;
        }
        return fn_8302E350(self, stream);
    }
    return fn_8302E258(self, stream);
}
