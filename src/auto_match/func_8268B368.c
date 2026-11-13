extern long _InterlockedExchangeAdd(long *, long);

typedef struct Buf_8268B368 {
    unsigned int lenFlags;
    long refs;
    char data[4];
} Buf_8268B368;

extern Buf_8268B368 lbl_83155184;
extern Buf_8268B368 *fn_8267B890(void *heap, unsigned int size, int flags);

Buf_8268B368 *fn_8268B368(void *self, void *heap, unsigned int len, unsigned int flags)
{
    Buf_8268B368 *b;

    if (len == 0) {
        _InterlockedExchangeAdd(&lbl_83155184.refs, 1);
        return &lbl_83155184;
    }
    b = fn_8267B890(heap, len + 0xc, 0);
    b->data[len] = 0;
    b->refs = 1;
    b->lenFlags = len | flags;
    return b;
}
