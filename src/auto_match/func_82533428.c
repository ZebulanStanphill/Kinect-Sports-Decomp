typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Matrix_82533428 {
    __vector4 rows[4];
} Matrix_82533428;

typedef struct Camera_82533428 {
    char pad0[0x60];
    Matrix_82533428 transform; /* 0x60 */
    __vector4 position;        /* 0xa0 */
    char padb0[0x33];
    unsigned char dirty; /* 0xe3 */
    char pade4[0xcc];
    int target; /* 0x1b0 */
} Camera_82533428;

extern void fn_82590DB8(int target, int value, int flag);

int fn_82533428(Camera_82533428 *self, Matrix_82533428 transform, int value, __vector4 *position)
{
    Matrix_82533428 *matrix;
    int target;

    target = self->target;
    self->dirty = 1;
    matrix = &self->transform;
    matrix->rows[0] = transform.rows[0];
    matrix->rows[1] = transform.rows[1];
    matrix->rows[2] = transform.rows[2];
    matrix->rows[3] = transform.rows[3];
    fn_82590DB8(target, value, 1);
    if (position != 0) {
        *position = self->position;
    }
    return 1;
}
