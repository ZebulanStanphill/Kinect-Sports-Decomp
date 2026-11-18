typedef struct Quantized_82D41968 {
    unsigned char pad00;
    unsigned char is8Bit;  /* 0x01 */
    short scale;           /* 0x02 */
    unsigned char *data;   /* 0x04 */
    unsigned short stride; /* 0x08 */
    unsigned char pad0a[2];
    int offset; /* 0x0c */
} Quantized_82D41968;

typedef struct Chunk_82D41968 {
    Quantized_82D41968 values; /* 0x00 */
    unsigned char pad10[0x50];
} Chunk_82D41968;

typedef struct BigTriangles_82D41968 {
    Quantized_82D41968 values; /* 0x00 */
    unsigned char pad10[0x30];
} BigTriangles_82D41968;

typedef struct Mesh_82D41968 {
    unsigned char pad00[0x20];
    Quantized_82D41968 single; /* 0x20 */
    unsigned char pad30[0x80];
    unsigned int bitsPerIndex; /* 0xb0 */
    Chunk_82D41968 *chunks;    /* 0xb4 */
    int numChunks;             /* 0xb8 */
    unsigned char padbc[4];
    BigTriangles_82D41968 *big; /* 0xc0 */
} Mesh_82D41968;

int fn_82D41968(Mesh_82D41968 *mesh, unsigned int key)
{
    unsigned int section = (key & 0x7fffffff) >> (32 - mesh->bitsPerIndex);
    unsigned int index = (0xffffffff >> mesh->bitsPerIndex) & key;
    Quantized_82D41968 *values;
    unsigned char *data;
    int scale;
    int base;
    unsigned int offset;

    if ((key & 0x80000000) == 0) {
        if (mesh->numChunks == 1) {
            values = &mesh->single;
        } else {
            values = &mesh->chunks[section].values;
        }
    } else {
        values = &mesh->big[section].values;
    }
    data = values->data;
    scale = values->scale;
    base = values->offset;
    if (data != 0) {
        offset = values->stride * index;
        if (values->is8Bit == 1) {
            return data[offset] * scale + base;
        }
        return *(unsigned short *)(data + offset) * scale + base;
    }
    return 0;
}
