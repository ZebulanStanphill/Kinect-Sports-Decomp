typedef struct Seekable_830502B8 {
    void *vt; /* 0x00 */
    char pad4[0xc];
    __int64 position; /* 0x10 */
    char pad18[0xc];
    int flags; /* 0x24 */
} Seekable_830502B8;

typedef struct Stream_830502B8 {
    char pad0[0x18];
    __int64 start; /* 0x18 */
    char pad20[0x4c];
    unsigned int blockSize; /* 0x6c */
    char pad70[8];
    Seekable_830502B8 seekable; /* 0x78 */
} Stream_830502B8;

static __forceinline Stream_830502B8 *StreamOf_830502B8(Seekable_830502B8 *seekable)
{
    return (Stream_830502B8 *)((char *)seekable - 0x78);
}

int fn_830502B8(Seekable_830502B8 *self, __int64 distance, int origin, __int64 *newPosition)
{
    __int64 offset = distance;
    __int64 rem;

    if (newPosition != 0) {
        *newPosition = 0;
    }
    if ((self->flags & 0x1e000000) == 0x4000000) {
        return 2;
    }
    if (origin == 0) {
    } else if (origin == 1) {
        offset = self->position + offset;
    } else if (origin == 2) {
        offset = StreamOf_830502B8(self)->start + offset;
    } else {
        return 0x1f;
    }
    if (offset < 0) {
        return 0x1f;
    }
    rem = offset % (__int64)StreamOf_830502B8(self)->blockSize;
    if (rem != 0) {
        offset -= rem;
    }
    if (newPosition != 0) {
        switch (origin) {
        case 0:
            *newPosition = offset;
            break;
        case 1:
            *newPosition = offset - self->position;
            break;
        case 2:
            *newPosition = offset - StreamOf_830502B8(self)->start;
            break;
        default:
            return 2;
        }
    }
    self->position = offset;
    self->flags |= 0x1000000;
    return 1;
}
