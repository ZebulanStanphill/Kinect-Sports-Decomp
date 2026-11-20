typedef struct Vertex_826EC3A0 {
    float x; /* 0x0 */
    float y; /* 0x4 */
} Vertex_826EC3A0;

typedef struct Mesh_826EC3A0 {
    char pad0[0x14];
    Vertex_826EC3A0 **pages; /* 0x14 */
} Mesh_826EC3A0;

typedef struct Range_826EC3A0 {
    Mesh_826EC3A0 *mesh; /* 0x00 */
    unsigned int count;  /* 0x04 */
    unsigned int start;  /* 0x08 */
    int pad0c[2];
    int kind; /* 0x14 */
} Range_826EC3A0;

typedef struct Source_826EC3A0 {
    char pad0[0x24];
    Range_826EC3A0 **ranges; /* 0x24 */
} Source_826EC3A0;

typedef struct ShortArray_826EC3A0 {
    short *data;           /* 0x00 */
    unsigned int size;     /* 0x04 */
    unsigned int capacity; /* 0x08 */
} ShortArray_826EC3A0;

typedef struct UIntArray_826EC3A0 {
    unsigned int *data;    /* 0x00 */
    unsigned int size;     /* 0x04 */
    unsigned int capacity; /* 0x08 */
} UIntArray_826EC3A0;

typedef struct Dest_826EC3A0 {
    int kind;                   /* 0x00 */
    ShortArray_826EC3A0 values; /* 0x04 */
    int pad10[2];
    UIntArray_826EC3A0 counts; /* 0x18 */
} Dest_826EC3A0;

extern void fn_826EBDE8(ShortArray_826EC3A0 *array, unsigned int size);
extern void fn_826EBE48(UIntArray_826EC3A0 *array, unsigned int *value);

void fn_826EC3A0(Dest_826EC3A0 *dest, Source_826EC3A0 *source, unsigned int key, float scale)
{
    Range_826EC3A0 *range = &source->ranges[key >> 6][key & 63];
    unsigned int oldSize = dest->values.size;
    unsigned int count;
    unsigned int valueCount;
    unsigned int i;

    if (oldSize == 0) {
        dest->kind = range->kind;
    }
    count = range->count;
    valueCount = count * 2;
    fn_826EBDE8(&dest->values, valueCount + oldSize);
    for (i = 0; i < count; i++) {
        unsigned int index = range->start + i;
        dest->values.data[oldSize + i * 2] = (short)(range->mesh->pages[index >> 8][index & 255].x * scale);
        index = range->start + i;
        dest->values.data[oldSize + i * 2 + 1] =
            (short)(range->mesh->pages[index >> 8][index & 255].y * scale);
    }
    {
        unsigned int pushed = valueCount;
        fn_826EBE48(&dest->counts, &pushed);
    }
}
