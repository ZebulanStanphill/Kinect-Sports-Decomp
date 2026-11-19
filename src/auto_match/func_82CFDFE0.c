typedef struct StreamWriter_82CFDFE0 StreamWriter_82CFDFE0;

typedef struct StreamWriterVtbl_82CFDFE0 {
    void *slots[4];
    int (*write)(StreamWriter_82CFDFE0 *self, const void *buf, int nbytes); /* 0x10 */
} StreamWriterVtbl_82CFDFE0;

struct StreamWriter_82CFDFE0 {
    StreamWriterVtbl_82CFDFE0 *vt;
};

typedef struct Archive_82CFDFE0 {
    void *vt;                      /* 0x0 */
    int refCount;                  /* 0x4 */
    StreamWriter_82CFDFE0 *stream; /* 0x8 */
    unsigned char byteSwap;        /* 0xc */
} Archive_82CFDFE0;

extern void fn_82CFC050(void *dst, const void *src, int nbytes);

static __forceinline void SwapBytes_82CFDFE0(unsigned char *a, unsigned char *b)
{
    unsigned char t = *a;

    *a = *b;
    *b = t;
}

void fn_82CFDFE0(Archive_82CFDFE0 *self, const void *data, int elemSize, int count)
{
    unsigned char buf[0x200];
    const char *src;
    int remaining;
    int chunkBytes;
    int chunkCount;
    int lastBytes;
    int lastCount;
    int i;

    if (!self->byteSwap) {
        self->stream->vt->write(self->stream, data, elemSize * count);
        return;
    }
    src = (const char *)data;
    remaining = elemSize * count;
    chunkBytes = 0x200;
    chunkCount = 0x200 / elemSize;
    lastBytes = remaining % 0x200;
    lastCount = lastBytes / elemSize;
    while (remaining > 0) {
        if (remaining < 0x200) {
            chunkBytes = lastBytes;
            chunkCount = lastCount;
        }
        fn_82CFC050(buf, src, chunkBytes);
        switch (elemSize) {
        case 2: {
            unsigned char *q = buf;

            for (i = 0; i < chunkCount; i++) {
                SwapBytes_82CFDFE0(&q[0], &q[1]);
                q += 2;
            }
            break;
        }
        case 4: {
            unsigned char *q = buf;

            for (i = 0; i < chunkCount; i++) {
                SwapBytes_82CFDFE0(&q[0], &q[3]);
                SwapBytes_82CFDFE0(&q[1], &q[2]);
                q += 4;
            }
            break;
        }
        case 8: {
            unsigned char *q = buf;

            for (i = 0; i < chunkCount; i++) {
                SwapBytes_82CFDFE0(&q[0], &q[7]);
                SwapBytes_82CFDFE0(&q[1], &q[6]);
                SwapBytes_82CFDFE0(&q[2], &q[5]);
                SwapBytes_82CFDFE0(&q[3], &q[4]);
                q += 8;
            }
            break;
        }
        }
        self->stream->vt->write(self->stream, buf, chunkBytes);
        remaining -= chunkBytes;
        src += chunkBytes;
    }
}
