typedef struct DataDesc_8268B610 {
    unsigned int size; /* 0x0 */
    long refCount;     /* 0x4 */
    char data[1];      /* 0x8 */
} DataDesc_8268B610;

typedef struct String_8268B610 {
    union {
        DataDesc_8268B610 *data;   /* 0x0 */
        unsigned int heapTypeBits; /* 0x0 */
    };

    void *heap; /* 0x4 */
} String_8268B610;

extern void *lbl_831E7E64;
extern void *fn_8267BF50(const String_8268B610 *);
extern DataDesc_8268B610 *fn_8268B368(String_8268B610 *, void *, unsigned int, unsigned int);
extern void fn_8267BE38(DataDesc_8268B610 *);
extern long _InterlockedExchangeAdd(long *, long);
extern void *memcpy(void *, const void *, unsigned int);
extern unsigned int strlen(const char *);

static __forceinline DataDesc_8268B610 *GetData(const String_8268B610 *self)
{
    return (DataDesc_8268B610 *)(self->heapTypeBits & ~3u);
}

static __forceinline void *GetHeap(const String_8268B610 *self)
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

static __forceinline void SetData(String_8268B610 *self, DataDesc_8268B610 *desc)
{
    unsigned int heapType = self->heapTypeBits & 3;
    self->data = desc;
    self->heapTypeBits |= heapType;
}

static __forceinline void Release(DataDesc_8268B610 *desc)
{
    if (_InterlockedExchangeAdd(&desc->refCount, -1) - 1 == 0) {
        fn_8267BE38(desc);
    }
}

static __forceinline DataDesc_8268B610 *AllocDataCopy2(String_8268B610 *self, void *heap, unsigned int size,
                                                       unsigned int lengthIsSize, const char *data1,
                                                       unsigned int size1, const char *data2,
                                                       unsigned int size2)
{
    DataDesc_8268B610 *desc = fn_8268B368(self, heap, size, lengthIsSize);
    memcpy(desc->data, data1, size1);
    memcpy(desc->data + size1, data2, size2);
    return desc;
}

void fn_8268B610(String_8268B610 *self, const char *text, int length)
{
    DataDesc_8268B610 *old;
    unsigned int oldSize;

    if (!text || length == 0) {
        return;
    }
    if (length == -1) {
        length = (int)strlen(text);
    }
    old = GetData(self);
    oldSize = old->size & 0x7fffffff;
    SetData(self, AllocDataCopy2(self, GetHeap(self), oldSize + (unsigned int)length, 0, old->data, oldSize,
                                 text, (unsigned int)length));
    Release(old);
}
