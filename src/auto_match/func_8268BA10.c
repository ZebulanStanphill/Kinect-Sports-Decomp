typedef struct DataDesc_8268BA10 {
    unsigned int size; /* 0x0 */
    long refCount;     /* 0x4 */
    char data[1];      /* 0x8 */
} DataDesc_8268BA10;

typedef struct String_8268BA10 {
    union {
        DataDesc_8268BA10 *data;   /* 0x0 */
        unsigned int heapTypeBits; /* 0x0 */
    };

    void *heap; /* 0x4 */
} String_8268BA10;

extern void *lbl_831E7E64;
extern void *fn_8267BF50(const String_8268BA10 *);
extern DataDesc_8268BA10 *fn_8268B368(String_8268BA10 *, void *, unsigned int, unsigned int);
extern void fn_8267BE38(DataDesc_8268BA10 *);
extern long _InterlockedExchangeAdd(long *, long);
extern void *memcpy(void *, const void *, unsigned int);

static __forceinline DataDesc_8268BA10 *GetData(const String_8268BA10 *self)
{
    return (DataDesc_8268BA10 *)(self->heapTypeBits & ~3u);
}

static __forceinline void *GetHeap(const String_8268BA10 *self)
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

static __forceinline void SetData(String_8268BA10 *self, DataDesc_8268BA10 *desc)
{
    unsigned int heapType = self->heapTypeBits & 3;
    self->data = desc;
    self->heapTypeBits |= heapType;
}

static __forceinline void Release(DataDesc_8268BA10 *desc)
{
    if (_InterlockedExchangeAdd(&desc->refCount, -1) - 1 == 0) {
        fn_8267BE38(desc);
    }
}

static __forceinline DataDesc_8268BA10 *AllocDataCopy1(String_8268BA10 *self, void *heap, unsigned int size,
                                                       unsigned int lengthIsSize, const char *source,
                                                       unsigned int copySize)
{
    DataDesc_8268BA10 *desc = fn_8268B368(self, heap, size, lengthIsSize);
    memcpy(desc->data, source, copySize);
    return desc;
}

void fn_8268BA10(String_8268BA10 *self, const String_8268BA10 *source)
{
    void *heap = GetHeap(self);
    DataDesc_8268BA10 *sourceData = GetData(source);
    DataDesc_8268BA10 *old = GetData(self);

    if (heap == GetHeap(source)) {
        SetData(self, sourceData);
        _InterlockedExchangeAdd(&sourceData->refCount, 1);
    } else {
        unsigned int size = sourceData->size & 0x7fffffff;
        unsigned int lengthFlag = sourceData->size & 0x80000000;

        SetData(self, AllocDataCopy1(self, heap, size, lengthFlag, sourceData->data, size));
    }
    Release(old);
}
