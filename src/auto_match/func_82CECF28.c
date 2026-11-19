typedef struct StreamReader_82CECF28 StreamReader_82CECF28;

typedef struct StreamReaderVtbl_82CECF28 {
    void *slots[4];
    int (*read)(StreamReader_82CECF28 *self, void *buf, int nbytes); /* 0x10 */
} StreamReaderVtbl_82CECF28;

struct StreamReader_82CECF28 {
    StreamReaderVtbl_82CECF28 *vt;
};

typedef struct Archive_82CECF28 {
    void *vt;                      /* 0x0 */
    int refCount;                  /* 0x4 */
    StreamReader_82CECF28 *stream; /* 0x8 */
    unsigned char byteSwap;        /* 0xc */
} Archive_82CECF28;

static __forceinline void SwapBytes_82CECF28(unsigned char *a, unsigned char *b)
{
    unsigned char t = *a;

    *a = *b;
    *b = t;
}

void fn_82CECF28(Archive_82CECF28 *self, void *buf, int elemSize, int count)
{
    int i;

    self->stream->vt->read(self->stream, buf, elemSize * count);
    if (self->byteSwap) {
        switch (elemSize) {
        case 2: {
            unsigned char *q = (unsigned char *)buf;

            for (i = 0; i < count; i++) {
                SwapBytes_82CECF28(&q[0], &q[1]);
                q += 2;
            }
            break;
        }
        case 4: {
            unsigned char *q = (unsigned char *)buf;

            for (i = 0; i < count; i++) {
                SwapBytes_82CECF28(&q[0], &q[3]);
                SwapBytes_82CECF28(&q[1], &q[2]);
                q += 4;
            }
            break;
        }
        case 8: {
            unsigned char *q = (unsigned char *)buf;

            for (i = 0; i < count; i++) {
                SwapBytes_82CECF28(&q[0], &q[7]);
                SwapBytes_82CECF28(&q[1], &q[6]);
                SwapBytes_82CECF28(&q[2], &q[5]);
                SwapBytes_82CECF28(&q[3], &q[4]);
                q += 8;
            }
            break;
        }
        }
    }
}
