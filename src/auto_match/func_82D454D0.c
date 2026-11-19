typedef struct BigTriangle_82D454D0 {
    unsigned short m_a;           /* 0x00 */
    unsigned short m_b;           /* 0x02 */
    unsigned short m_c;           /* 0x04 */
    unsigned short padding6;      /* 0x06 */
    unsigned int m_material;      /* 0x08 */
    unsigned short m_weldingInfo; /* 0x0c */
    unsigned short paddingE;      /* 0x0e */
} BigTriangle_82D454D0;

typedef struct Chunk_82D454D0 {
    char padding0[0x40];             /* 0x00 */
    unsigned int m_materialInfo;     /* 0x40 */
    unsigned short m_reference;      /* 0x44 */
    unsigned short m_transformIndex; /* 0x46 */
    char padding48[8];               /* 0x48 */
} Chunk_82D454D0;

typedef struct Mesh_82D454D0 {
    char padding0[0x1c];                  /* 0x00 */
    int m_bitsPerWIndex;                  /* 0x1c */
    int m_wIndexMask;                     /* 0x20 */
    int m_indexMask;                      /* 0x24 */
    float m_radius;                       /* 0x28 */
    unsigned char m_weldingType;          /* 0x2c */
    unsigned char m_materialType;         /* 0x2d */
    char padding2E[2];                    /* 0x2e */
    unsigned int *m_materials;            /* 0x30 */
    int materialsSize;                    /* 0x34 */
    int materialsCapacity;                /* 0x38 */
    unsigned short *m_materials16;        /* 0x3c */
    int materials16Size;                  /* 0x40 */
    int materials16Capacity;              /* 0x44 */
    unsigned char *m_materials8;          /* 0x48 */
    int materials8Size;                   /* 0x4c */
    int materials8Capacity;               /* 0x50 */
    char padding54[0x6c - 0x54];          /* 0x54 */
    BigTriangle_82D454D0 *m_bigTriangles; /* 0x6c */
    int bigTrianglesSize;                 /* 0x70 */
    int bigTrianglesCapacity;             /* 0x74 */
    Chunk_82D454D0 *m_chunks;             /* 0x78 */
    char padding7C[0xc0 - 0x7c];          /* 0x7c */
    char *m_meshMaterials;                /* 0xc0 */
    unsigned short m_materialStriding;    /* 0xc4 */
    unsigned short m_numMaterials;        /* 0xc6 */
} Mesh_82D454D0;

void *fn_82D454D0(Mesh_82D454D0 *self, unsigned int key)
{
    char *materials;
    int chunkId;
    unsigned int index;
    unsigned int chunk;
    unsigned int materialInfo;
    unsigned int materialIndex;

    materials = self->m_meshMaterials;
    if (materials != 0) {
        chunkId = key >> self->m_bitsPerWIndex;
        index = key & self->m_indexMask;
        if (chunkId == 0) {
            materialIndex = self->m_bigTriangles[index].m_material;
        } else {
            unsigned short reference;

            if (chunkId == (1 << (32 - self->m_bitsPerWIndex)) - 1) {
                return 0;
            }
            reference = self->m_chunks[chunkId - 1].m_reference;
            if (reference != 0xffff) {
                chunk = reference;
            } else {
                chunk = chunkId - 1;
            }
            materialInfo = self->m_chunks[chunk].m_materialInfo;
            switch (self->m_materialType) {
            case 1:
                materialIndex = materialInfo;
                break;
            case 4:
                materialIndex = self->m_materials[materialInfo + index];
                break;
            case 3:
                materialIndex = self->m_materials16[materialInfo + index];
                break;
            case 2:
                materialIndex = self->m_materials8[materialInfo + index];
                break;
            default:
                return 0;
            }
        }
        return materials + materialIndex * self->m_materialStriding;
    }
    return 0;
}
