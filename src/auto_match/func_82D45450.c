typedef struct BigTriangle_82D45450 {
    unsigned short m_a;           /* 0x00 */
    unsigned short m_b;           /* 0x02 */
    unsigned short m_c;           /* 0x04 */
    unsigned short padding6;      /* 0x06 */
    unsigned int m_material;      /* 0x08 */
    unsigned short m_weldingInfo; /* 0x0c */
    unsigned short paddingE;      /* 0x0e */
} BigTriangle_82D45450;

typedef struct Chunk_82D45450 {
    char padding0[0x34];             /* 0x00 */
    unsigned short *m_weldingInfo;   /* 0x34 */
    int weldingSize;                 /* 0x38 */
    int weldingCapacity;             /* 0x3c */
    unsigned int m_materialInfo;     /* 0x40 */
    unsigned short m_reference;      /* 0x44 */
    unsigned short m_transformIndex; /* 0x46 */
    char padding48[8];               /* 0x48 */
} Chunk_82D45450;

typedef struct Mesh_82D45450 {
    char padding0[0x1c];                  /* 0x00 */
    int m_bitsPerWIndex;                  /* 0x1c */
    int m_wIndexMask;                     /* 0x20 */
    int m_indexMask;                      /* 0x24 */
    char padding28[0x6c - 0x28];          /* 0x28 */
    BigTriangle_82D45450 *m_bigTriangles; /* 0x6c */
    int triangleSize;                     /* 0x70 */
    int triangleCapacity;                 /* 0x74 */
    Chunk_82D45450 *m_chunks;             /* 0x78 */
} Mesh_82D45450;

void fn_82D45450(Mesh_82D45450 *self, unsigned int key, unsigned short info)
{
    unsigned int chunk = key >> self->m_bitsPerWIndex;
    if (chunk == 0) {
        self->m_bigTriangles[key & self->m_wIndexMask].m_weldingInfo = info;
    } else {
        unsigned int index = key & self->m_indexMask;
        unsigned short reference;
        --chunk;
        reference = self->m_chunks[chunk].m_reference;
        if (reference != 0xffff) {
            chunk = reference;
        }
        self->m_chunks[chunk].m_weldingInfo[index] = info;
    }
}
