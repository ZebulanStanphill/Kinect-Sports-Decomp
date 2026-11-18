typedef struct DataDesc_8268C248 {
    unsigned int size; /* 0x0 */
    long refCount;     /* 0x4 */
    char data[1];      /* 0x8 */
} DataDesc_8268C248;

typedef struct String_8268C248 {
    union {
        DataDesc_8268C248 *data;   /* 0x0 */
        unsigned int heapTypeBits; /* 0x0 */
    };
} String_8268C248;

extern void *fn_8267BF50(const String_8268C248 *);
extern DataDesc_8268C248 *fn_8268B368(String_8268C248 *, void *, unsigned int, unsigned int);
extern void *memcpy(void *, const void *, unsigned int);
extern unsigned int strlen(const char *);

static __forceinline DataDesc_8268C248 *AllocDataCopy1(String_8268C248 *self, void *heap, unsigned int size,
                                                       unsigned int lengthIsSize, const char *source,
                                                       unsigned int copySize)
{
    DataDesc_8268C248 *desc = fn_8268B368(self, heap, size, lengthIsSize);
    memcpy(desc->data, source, copySize);
    return desc;
}

String_8268C248 *fn_8268C248(String_8268C248 *self, const char *text)
{
    unsigned int size = text ? strlen(text) : 0;

    self->data = AllocDataCopy1(self, fn_8267BF50(self), size, 0, text, size);
    self->heapTypeBits |= 1;
    return self;
}
