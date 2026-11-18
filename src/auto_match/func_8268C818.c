typedef struct DataDesc_8268C818 {
    unsigned int size; /* 0x0 */
    long refCount;     /* 0x4 */
    char data[1];      /* 0x8 */
} DataDesc_8268C818;

typedef struct String_8268C818 {
    DataDesc_8268C818 *data; /* 0x0 */
} String_8268C818;

typedef struct StringDataPtr_8268C818 {
    const char *text;  /* 0x0 */
    unsigned int size; /* 0x4 */
} StringDataPtr_8268C818;

extern void *lbl_831E7E64;
extern const char lbl_82196582[];
extern DataDesc_8268C818 *fn_8268B368(String_8268C818 *, void *, unsigned int, unsigned int);
extern void *memcpy(void *, const void *, unsigned int);

static __forceinline DataDesc_8268C818 *AllocDataCopy1(String_8268C818 *self, void *heap, unsigned int size,
                                                       unsigned int lengthIsSize, const char *source,
                                                       unsigned int copySize)
{
    DataDesc_8268C818 *desc = fn_8268B368(self, heap, size, lengthIsSize);
    memcpy(desc->data, source, copySize);
    return desc;
}

String_8268C818 *fn_8268C818(String_8268C818 *self, const StringDataPtr_8268C818 *source)
{
    const char *text;
    unsigned int size = source->size;

    if (source->text) {
        text = source->text;
    } else {
        text = lbl_82196582;
    }
    self->data = AllocDataCopy1(self, lbl_831E7E64, size, 0, text, size);
    return self;
}
