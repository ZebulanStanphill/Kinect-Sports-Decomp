extern int *_errno(void);
extern int fn_82F6B890(void *);
extern void fn_82F6BB98(void *);
extern int fn_82F7C468(void *);
extern int fn_82F82818(int, int, int);

typedef struct Stream_82F6BF90 {
    char pad[0xc];
    int flags; /* 0x0c */
    char pad10[8];
    int bufferSize; /* 0x18 */
} Stream_82F6BF90;

int fn_82F6BF90(Stream_82F6BF90 *stream, int offset, int origin)
{
    if ((stream->flags & 0x83) == 0) {
        *_errno() = 22;
        return -1;
    }
    stream->flags &= ~0x10;
    if (origin == 1) {
        offset = fn_82F6B890(stream) + offset;
        origin = 0;
    }
    fn_82F6BB98(stream);
    if ((stream->flags & 0x80) != 0) {
        stream->flags &= ~3;
    } else if ((stream->flags & 1) != 0 && (stream->flags & 8) != 0 && (stream->flags & 0x400) == 0) {
        stream->bufferSize = 0x200;
    }
    return fn_82F82818(fn_82F7C468(stream), offset, origin) == -1 ? -1 : 0;
}
