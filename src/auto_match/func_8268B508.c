typedef struct DataDesc_8268B508 {
    unsigned int size; /* 0x0 */
    long refCount;     /* 0x4 */
    char data[1];      /* 0x8 */
} DataDesc_8268B508;

typedef struct String_8268B508 {
    union {
        DataDesc_8268B508 *data;   /* 0x0 */
        unsigned int heapTypeBits; /* 0x0 */
    };

    void *heap; /* 0x4 */
} String_8268B508;

extern void *lbl_831E7E64;
extern void *fn_8267BF50(const String_8268B508 *);
extern DataDesc_8268B508 *fn_8268B368(String_8268B508 *, void *, unsigned int, unsigned int);
extern void fn_8267BE38(DataDesc_8268B508 *);
extern long _InterlockedExchangeAdd(long *, long);
extern void *memcpy(void *, const void *, unsigned int);
extern unsigned int fn_826BD598(const unsigned short *, int);
extern void fn_826BD620(char *, const unsigned short *, int);

static __forceinline DataDesc_8268B508 *GetData(const String_8268B508 *self)
{
    return (DataDesc_8268B508 *)(self->heapTypeBits & ~3u);
}

static __forceinline void *GetHeap(const String_8268B508 *self)
{
    void *heap = 0;
    switch (self->heapTypeBits & 3) {
    case 0:
        heap = lbl_831E7E64;
        break;
    case 1:
        heap = fn_8267BF50(self);
        break;
    case 2:
        heap = self->heap;
        break;
    }
    return heap;
}

static __forceinline void SetData(String_8268B508 *self, DataDesc_8268B508 *desc)
{
    unsigned int heapType = self->heapTypeBits & 3;
    self->data = desc;
    self->heapTypeBits |= heapType;
}

static __forceinline void Release(DataDesc_8268B508 *desc)
{
    if (_InterlockedExchangeAdd(&desc->refCount, -1) - 1 == 0) {
        fn_8267BE38(desc);
    }
}

static __forceinline DataDesc_8268B508 *AllocDataCopy1(String_8268B508 *self, void *heap, unsigned int size,
                                                       unsigned int lengthIsSize, const char *source,
                                                       unsigned int copySize)
{
    DataDesc_8268B508 *desc = fn_8268B368(self, heap, size, lengthIsSize);
    memcpy(desc->data, source, copySize);
    return desc;
}

void fn_8268B508(String_8268B508 *self, const unsigned short *text, int length)
{
    DataDesc_8268B508 *old;
    unsigned int oldSize;
    unsigned int encodedSize;
    DataDesc_8268B508 *desc;

    if (!text) {
        return;
    }
    old = GetData(self);
    oldSize = old->size & 0x7fffffff;
    encodedSize = fn_826BD598(text, length);
    desc = AllocDataCopy1(self, GetHeap(self), oldSize + encodedSize, 0, old->data, oldSize);
    fn_826BD620(desc->data + oldSize, text, length);
    SetData(self, desc);
    Release(old);
}
