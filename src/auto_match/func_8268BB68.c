typedef struct DataDesc_8268BB68 {
    unsigned int size; /* 0x0 */
    long refCount;     /* 0x4 */
    char data[1];      /* 0x8 */
} DataDesc_8268BB68;

typedef struct String_8268BB68 {
    union {
        DataDesc_8268BB68 *data;   /* 0x0 */
        unsigned int heapTypeBits; /* 0x0 */
    };

    void *heap; /* 0x4 */
} String_8268BB68;

typedef struct StringDataPtr_8268BB68 {
    const char *text;  /* 0x0 */
    unsigned int size; /* 0x4 */
} StringDataPtr_8268BB68;

extern void *lbl_831E7E64;
extern void *fn_8267BF50(const String_8268BB68 *);
extern DataDesc_8268BB68 *fn_8268B368(String_8268BB68 *, void *, unsigned int, unsigned int);
extern void fn_8267BE38(DataDesc_8268BB68 *);
extern long _InterlockedExchangeAdd(long *, long);
extern void *memcpy(void *, const void *, unsigned int);
extern const char lbl_82196582[];

static __forceinline DataDesc_8268BB68 *GetData(const String_8268BB68 *self)
{
    return (DataDesc_8268BB68 *)(self->heapTypeBits & ~3u);
}

static __forceinline void *GetHeap(const String_8268BB68 *self)
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

static __forceinline void SetData(String_8268BB68 *self, DataDesc_8268BB68 *desc)
{
    unsigned int heapType = self->heapTypeBits & 3;
    self->data = desc;
    self->heapTypeBits |= heapType;
}

static __forceinline void Release(DataDesc_8268BB68 *desc)
{
    if (_InterlockedExchangeAdd(&desc->refCount, -1) - 1 == 0) {
        fn_8267BE38(desc);
    }
}

static __forceinline DataDesc_8268BB68 *AllocDataCopy1(String_8268BB68 *self, void *heap, unsigned int size,
                                                       unsigned int lengthIsSize, const char *source,
                                                       unsigned int copySize)
{
    DataDesc_8268BB68 *desc = fn_8268B368(self, heap, size, lengthIsSize);
    memcpy(desc->data, source, copySize);
    return desc;
}

void fn_8268BB68(String_8268BB68 *self, const StringDataPtr_8268BB68 *source)
{
    DataDesc_8268BB68 *old = GetData(self);
    const char *text;
    unsigned int size = source->size;

    if (source->text) {
        text = source->text;
    } else {
        text = lbl_82196582;
    }
    SetData(self, AllocDataCopy1(self, GetHeap(self), size, 0, text, size));
    Release(old);
}
