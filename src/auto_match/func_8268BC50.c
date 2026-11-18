typedef struct DataDesc_8268BC50 {
    unsigned int size; /* 0x0 */
    long refCount;     /* 0x4 */
    char data[1];      /* 0x8 */
} DataDesc_8268BC50;

typedef struct String_8268BC50 {
    union {
        DataDesc_8268BC50 *data;   /* 0x0 */
        unsigned int heapTypeBits; /* 0x0 */
    };

    void *heap; /* 0x4 */
} String_8268BC50;

extern void *lbl_831E7E64;
extern void *fn_8267BF50(const String_8268BC50 *);
extern DataDesc_8268BC50 *fn_8268B368(String_8268BC50 *, void *, unsigned int, unsigned int);
extern void fn_8267BE38(DataDesc_8268BC50 *);
extern long _InterlockedExchangeAdd(long *, long);
extern void *memcpy(void *, const void *, unsigned int);

static __forceinline DataDesc_8268BC50 *GetData(const String_8268BC50 *self)
{
    return (DataDesc_8268BC50 *)(self->heapTypeBits & ~3u);
}

static __forceinline void *GetHeap(const String_8268BC50 *self)
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

static __forceinline void SetData(String_8268BC50 *self, DataDesc_8268BC50 *desc)
{
    unsigned int heapType = self->heapTypeBits & 3;
    self->data = desc;
    self->heapTypeBits |= heapType;
}

static __forceinline void Release(DataDesc_8268BC50 *desc)
{
    if (_InterlockedExchangeAdd(&desc->refCount, -1) - 1 == 0) {
        fn_8267BE38(desc);
    }
}

static __forceinline DataDesc_8268BC50 *AllocDataCopy2(String_8268BC50 *self, void *heap, unsigned int size,
                                                       unsigned int lengthIsSize, const char *data1,
                                                       unsigned int size1, const char *data2,
                                                       unsigned int size2)
{
    DataDesc_8268BC50 *desc = fn_8268B368(self, heap, size, lengthIsSize);
    memcpy(desc->data, data1, size1);
    memcpy(desc->data + size1, data2, size2);
    return desc;
}

void fn_8268BC50(String_8268BC50 *self, const String_8268BC50 *source)
{
    DataDesc_8268BC50 *ourData = GetData(self);
    DataDesc_8268BC50 *sourceData = GetData(source);
    unsigned int ourSize = ourData->size & 0x7fffffff;
    unsigned int sourceSize = sourceData->size & 0x7fffffff;
    unsigned int lengthFlag = (ourData->size & 0x80000000) & (sourceData->size & 0x80000000);

    SetData(self, AllocDataCopy2(self, GetHeap(self), ourSize + sourceSize, lengthFlag, ourData->data,
                                 ourSize, sourceData->data, sourceSize));
    Release(ourData);
}
