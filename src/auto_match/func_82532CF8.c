typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vmrghw(__vector4 a, __vector4 b);
__vector4 __vmrglw(__vector4 a, __vector4 b);

typedef struct Matrix_82532CF8 {
    __vector4 rows[4];
} Matrix_82532CF8;

typedef struct Storage_82532CF8 {
    Matrix_82532CF8 *primary;   /* 0x0 */
    Matrix_82532CF8 *alternate; /* 0x4 */
} Storage_82532CF8;

void fn_82532CF8(Storage_82532CF8 *self, unsigned int index, Matrix_82532CF8 matrix)
{
    Matrix_82532CF8 *data = self->alternate;
    __vector4 high02;
    __vector4 low02;
    __vector4 high13;
    __vector4 low13;
    if (data == 0) {
        data = self->primary;
    }
    high02 = __vmrghw(matrix.rows[0], matrix.rows[2]);
    low02 = __vmrglw(matrix.rows[0], matrix.rows[2]);
    high13 = __vmrghw(matrix.rows[1], matrix.rows[3]);
    low13 = __vmrglw(matrix.rows[1], matrix.rows[3]);
    data[index].rows[0] = __vmrghw(high02, high13);
    data[index].rows[1] = __vmrglw(high02, high13);
    data[index].rows[2] = __vmrghw(low02, low13);
    data[index].rows[3] = __vmrglw(low02, low13);
}
