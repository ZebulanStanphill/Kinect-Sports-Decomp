/* hkBufferedStreamWriter::seek */
typedef struct Stream_82CFB098 Stream_82CFB098;

typedef struct StreamVtbl_82CFB098 {
    void *slots[7];
    int (*seek)(Stream_82CFB098 *self, int offset, unsigned int whence);   /* 0x1c */
} StreamVtbl_82CFB098;

struct Stream_82CFB098 {
    StreamVtbl_82CFB098 *vt;
};

typedef struct Writer_82CFB098 {
    void *vt;
    int refCount;
    Stream_82CFB098 *stream;    /* 0x08 */
    char *buf;                  /* 0x0c */
    int bufSize;                /* 0x10 */
    int bufCapacity;            /* 0x14 */
} Writer_82CFB098;

extern void fn_82CFAE20(Writer_82CFB098 *self);

int fn_82CFB098(Writer_82CFB098 *self, int offset, unsigned int whence)
{
    if (self->stream != 0) {
        fn_82CFAE20(self);
        return self->stream->vt->seek(self->stream, offset, whence);
    } else {
        int pos = -1;
        int result;
        switch (whence) {
        case 0:
            pos = offset;
            break;
        case 1:
            pos = self->bufSize + offset;
            break;
        case 2:
            pos = self->bufSize - offset;
            break;
        }
        result = 0;
        if (pos < 0) {
            pos = 0;
            result = 1;
        } else if (pos > self->bufCapacity) {
            pos = self->bufCapacity;
            result = 1;
        }
        self->bufSize = pos;
        return result;
    }
}
