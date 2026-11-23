typedef struct Point_826CDE90 {
    float x;
    float y;
} Point_826CDE90;

typedef struct Matrix_826CDE90 {
    float m[2][3];
} Matrix_826CDE90;

class Character_826CDE90
{
  public:
    virtual void Slot00();
    virtual void Slot04();
    virtual void Slot08();
    virtual void Slot0C();
    virtual void Slot10();
    virtual void Slot14();
    virtual void Slot18();
    virtual void Slot1C();
    virtual void Slot20();
    virtual void Slot24();
    virtual void Slot28();
    virtual void Slot2C();
    virtual unsigned char HitTest(const Point_826CDE90 *point, int shapes); /* 0x30 */

    unsigned char pad4[0x10];
    int depth; /* 0x14 */
    unsigned char pad18[0x2c];
    Matrix_826CDE90 matrix; /* 0x44 */
    unsigned char pad5c[8];
    unsigned short clipDepth; /* 0x64 */
};

typedef struct Container_826CDE90 {
    unsigned char pad0[0xa8];
    Character_826CDE90 **children; /* 0xa8 */
    unsigned int childCount;       /* 0xac */
} Container_826CDE90;

typedef struct ByteArray_826CDE90 {
    unsigned char *data; /* 0x00 */
    unsigned int size;   /* 0x04 */
} ByteArray_826CDE90;

extern "C" void fn_826CD200(ByteArray_826CDE90 *array, unsigned int size);
extern "C" Point_826CDE90 *fn_8268D008(const Matrix_826CDE90 *matrix, Point_826CDE90 *out,
                                       const Point_826CDE90 *in);
extern "C" void *memset(void *dst, int value, unsigned int size);

static __forceinline unsigned char *At(ByteArray_826CDE90 *array, unsigned int index)
{
    return &array->data[index];
}

extern "C" void fn_826CDE90(Container_826CDE90 *self, ByteArray_826CDE90 *visible,
                            const Point_826CDE90 *point)
{
    unsigned int count;
    unsigned int i;
    unsigned int j;
    Character_826CDE90 *mask;
    Character_826CDE90 *child;
    Matrix_826CDE90 matrix;
    Point_826CDE90 local;

    count = self->childCount;
    for (i = 0; i < count; i++) {
        mask = self->children[i];
        if (mask->clipDepth != 0) {
            if (visible->size == 0) {
                fn_826CD200(visible, count);
                memset(visible->data, 1, count);
            }
            matrix.m[0][0] = mask->matrix.m[0][0];
            matrix.m[0][1] = mask->matrix.m[0][1];
            matrix.m[0][2] = mask->matrix.m[0][2];
            matrix.m[1][0] = mask->matrix.m[1][0];
            matrix.m[1][1] = mask->matrix.m[1][1];
            matrix.m[1][2] = mask->matrix.m[1][2];
            fn_8268D008(&matrix, &local, point);
            *At(visible, i) = mask->HitTest(&local, 1);
            for (j = i + 1; j < count; j++) {
                child = self->children[j];
                if (child != 0 && child->depth > mask->clipDepth) {
                    break;
                }
                visible->data[j] = visible->data[i];
            }
            i = j - 1;
        }
    }
}
