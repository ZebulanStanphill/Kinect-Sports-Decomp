extern void _unlock(int locknum);
extern void RtlLeaveCriticalSection(void *section);

typedef struct Stream_82F6AD80 {
    char *ptr;
    int cnt;
    char *base;
    int flag;
    int file;
    int charbuf;
    int bufsiz;
    char *tmpfname;
    char lock[1];
} Stream_82F6AD80;

void fn_82F6AD80(int index, Stream_82F6AD80 *stream)
{
    if (index < 20) {
        stream->flag &= ~0x8000;
        _unlock(index + 16);
    } else {
        RtlLeaveCriticalSection(stream->lock);
    }
}
