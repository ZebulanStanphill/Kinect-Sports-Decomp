typedef struct Seekable_83052B78 Seekable_83052B78;

typedef struct SeekableVt_83052B78 {
    void *pad0[9];
    __int64 (*getLength)(Seekable_83052B78 *self, int flags); /* 0x24 */
} SeekableVt_83052B78;

struct Seekable_83052B78 {
    SeekableVt_83052B78 *vt;
};

typedef struct Stream_83052B78 {
    char pad0[0x18];
    __int64 start;             /* 0x18 */
    unsigned int headerBlocks; /* 0x20 */
    char pad24[0x48];
    unsigned int blockSize; /* 0x6c */
    char pad70[8];
    Seekable_83052B78 seekable; /* 0x78 */
} Stream_83052B78;

extern void fn_83052500(Stream_83052B78 *stream, unsigned __int64 position);

static __forceinline Stream_83052B78 *StreamOf_83052B78(Seekable_83052B78 *seekable)
{
    return (Stream_83052B78 *)((char *)seekable - 0x78);
}

int fn_83052B78(Seekable_83052B78 *self, __int64 offset, int origin, __int64 *newPosition)
{
    __int64 rem;

    if (newPosition != 0) {
        *newPosition = 0;
    }
    if (origin == 0) {
    } else if (origin == 1) {
        offset = self->vt->getLength(self, 0) + offset;
    } else if (origin == 2) {
        offset = StreamOf_83052B78(self)->start + offset;
    } else {
        return 0x1f;
    }
    if (offset < 0) {
        return 0x1f;
    }
    rem = offset % (__int64)StreamOf_83052B78(self)->blockSize;
    if (rem != 0) {
        offset -= rem;
    }
    if (newPosition != 0) {
        switch (origin) {
        case 0:
            *newPosition = offset;
            break;
        case 1:
            *newPosition = offset - self->vt->getLength(self, 0);
            break;
        case 2:
            *newPosition = offset - StreamOf_83052B78(self)->start;
            break;
        }
    }
    {
        Stream_83052B78 *stream = StreamOf_83052B78(self);

        fn_83052500(stream, offset + stream->headerBlocks * stream->blockSize);
    }
    return 1;
}
