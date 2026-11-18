extern void fn_828105C8(float *output, float x, float y, float z);
extern void fn_828102A8(float *source, float *output, float scale);

typedef struct PackedVertex_82859EF0 {
    int unknown0;          /* 0x0 */
    short position[3];     /* 0x4 */
    unsigned short weight; /* 0xa */
} PackedVertex_82859EF0;

typedef struct FullVertex_82859EF0 {
    int unknown0;    /* 0x0 */
    int position[3]; /* 0x4 */
    float weight;    /* 0x10 */
} FullVertex_82859EF0;

void fn_82859EF0(char *vertex, unsigned int format, float scale, float *output)
{
    switch (format) {
    case 0: {
        PackedVertex_82859EF0 *packed = (PackedVertex_82859EF0 *)vertex;
        fn_828105C8(output, (float)packed->position[0], (float)packed->position[1],
                    (float)packed->position[2]);
        fn_828102A8(output, output, scale);
        output[3] = (float)packed->weight * scale;
        break;
    }
    case 1: {
        FullVertex_82859EF0 *full = (FullVertex_82859EF0 *)vertex;
        ((int *)output)[0] = full->position[0];
        ((int *)output)[1] = full->position[1];
        ((int *)output)[2] = full->position[2];
        output[3] = full->weight;
        break;
    }
    }
}
