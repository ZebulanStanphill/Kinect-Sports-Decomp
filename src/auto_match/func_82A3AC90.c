typedef struct Stream_82A3AC90 {
    char pad0[0x86c];
    void *hashing; /* 0x86c */
    char pad870[0x984 - 0x870];
    char *cursor;  /* 0x984 */
    int available; /* 0x988 */
    char pad98C[0x4320 - 0x98c];
    char *base; /* 0x4320 */
    int pad4324[2];
    unsigned int reads; /* 0x432c */
} Stream_82A3AC90;

void *memcpy(void *dst, const void *src, unsigned int size);
extern void fn_82A3AB68(Stream_82A3AC90 *stream, char *data, int size);

static __forceinline int CopyBuffered(Stream_82A3AC90 *stream, char *dest, int size)
{
    int available = stream->available;

    if (size <= available) {
        memcpy(dest, stream->cursor, size);
        stream->cursor += size;
        stream->available -= size;
        return size;
    }
    if (available <= 0) {
        return 0;
    }
    memcpy(dest, stream->cursor, available);
    stream->cursor += stream->available;
    stream->available = 0;
    return available;
}

int fn_82A3AC90(Stream_82A3AC90 *stream, int offset, int size)
{
    int copied;

    if (size <= 0) {
        return 0;
    }
    copied = CopyBuffered(stream, stream->base + offset, size);
    if (copied < 0) {
        return 0;
    }
    if (stream->hashing != 0 && stream->reads < 0x8000) {
        fn_82A3AB68(stream, stream->base + offset, copied);
    }
    stream->reads++;
    return copied;
}
