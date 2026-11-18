typedef struct Matrix_82759900 {
    float m[6];
} Matrix_82759900;

typedef struct Ref_82759900 {
    int weak;  /* 0x00 */
    void *ptr; /* 0x04 */
} Ref_82759900;

typedef struct Fill_82759900 {
    unsigned char type;    /* 0x00 */
    unsigned char subtype; /* 0x01 */
    unsigned char pad02[6];
    Ref_82759900 image;     /* 0x08 */
    Matrix_82759900 matrix; /* 0x10 */
} Fill_82759900;

extern void fn_827594F8(Fill_82759900 *fill, unsigned char type);
extern Ref_82759900 *fn_82759580(Ref_82759900 *ref, void *object);

void fn_82759900(Fill_82759900 *fill, unsigned char type, void *image, const Matrix_82759900 *matrix)
{
    Matrix_82759900 *m;

    fn_827594F8(fill, type);
    fill->subtype = 2;
    m = &fill->matrix;
    m->m[0] = matrix->m[0];
    m->m[1] = matrix->m[1];
    m->m[2] = matrix->m[2];
    m->m[3] = matrix->m[3];
    m->m[4] = matrix->m[4];
    m->m[5] = matrix->m[5];
    m->m[0] *= 20.0f;
    m->m[1] *= 20.0f;
    m->m[2] *= 20.0f;
    m->m[3] *= 20.0f;
    m->m[4] *= 20.0f;
    m->m[5] *= 20.0f;
    fn_82759580(&fill->image, image);
}
