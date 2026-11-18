typedef struct DataDesc_8268BD50 {
    unsigned int size; /* 0x0 */
    long refCount;     /* 0x4 */
    char data[1];      /* 0x8 */
} DataDesc_8268BD50;

typedef struct String_8268BD50 {
    union {
        DataDesc_8268BD50 *data;   /* 0x0 */
        unsigned int heapTypeBits; /* 0x0 */
    };

    void *heap; /* 0x4 */
} String_8268BD50;

extern void *lbl_831E7E64;
extern void *fn_8267BF50(const String_8268BD50 *);
extern DataDesc_8268BD50 *fn_8268B368(String_8268BD50 *, void *, unsigned int, unsigned int);
extern void fn_8267BE38(DataDesc_8268BD50 *);
extern long _InterlockedExchangeAdd(long *, long);
extern void *memcpy(void *, const void *, unsigned int);
extern unsigned int fn_8268ACE8(String_8268BD50 *);
extern int fn_826BD7D0(int, const char *, int);

static __forceinline DataDesc_8268BD50 *GetData(const String_8268BD50 *self)
{
    return (DataDesc_8268BD50 *)(self->heapTypeBits & ~3u);
}

static __forceinline void *GetHeap(const String_8268BD50 *self)
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

static __forceinline void SetData(String_8268BD50 *self, DataDesc_8268BD50 *desc)
{
    unsigned int heapType = self->heapTypeBits & 3;
    self->data = desc;
    self->heapTypeBits |= heapType;
}

static __forceinline void Release(DataDesc_8268BD50 *desc)
{
    if (_InterlockedExchangeAdd(&desc->refCount, -1) - 1 == 0) {
        fn_8267BE38(desc);
    }
}

static __forceinline DataDesc_8268BD50 *AllocDataCopy2(String_8268BD50 *self, void *heap, unsigned int size,
                                                       unsigned int lengthIsSize, const char *data1,
                                                       unsigned int size1, const char *data2,
                                                       unsigned int size2)
{
    DataDesc_8268BD50 *desc = fn_8268B368(self, heap, size, lengthIsSize);
    memcpy(desc->data, data1, size1);
    memcpy(desc->data + size1, data2, size2);
    return desc;
}

void fn_8268BD50(String_8268BD50 *self, unsigned int position, unsigned int removeLength)
{
    DataDesc_8268BD50 *old = GetData(self);
    unsigned int oldSize = old->size & 0x7fffffff;
    unsigned int length = fn_8268ACE8(self);
    unsigned int bytePosition;
    unsigned int removeSize;
    unsigned int lengthFlag;
    void *heap;

    if (position >= length) {
        return;
    }
    if (position + removeLength > length) {
        removeLength = length - position;
    }
    bytePosition = fn_826BD7D0((int)position, old->data, -1);
    removeSize = fn_826BD7D0((int)removeLength, old->data + bytePosition, -1);
    lengthFlag = old->size & 0x80000000;
    heap = GetHeap(self);
    /* The tail is addressed through the tagged pointer itself, as the original does. */
    SetData(self, AllocDataCopy2(self, heap, oldSize - removeSize, lengthFlag, old->data, bytePosition,
                                 self->data->data + bytePosition + removeSize,
                                 oldSize - bytePosition - removeSize));
    Release(old);
}
