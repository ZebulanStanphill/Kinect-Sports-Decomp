typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Matrix_8280CB70 {
    __vector4 rows[4];
} Matrix_8280CB70;

typedef struct Transform_8226C6A8 {
    Matrix_8280CB70 world; /* 0x00 */
    Matrix_8280CB70 local; /* 0x40 */
    unsigned char padding0[0x10];
    float offset[3]; /* 0x90 */
    unsigned char padding1[0x14];
    float rotation[4]; /* 0xb0 */
    float angle;       /* 0xc0 */
    unsigned char padding2[0x0c];
    __vector4 axis; /* 0xd0 */
    unsigned char padding3[0x10];
} Transform_8226C6A8;

typedef struct Context_8226C6A8 {
    unsigned char padding0[0x40];
    Transform_8226C6A8 *transforms; /* 0x40 */
    unsigned char padding1[0x14];
    unsigned int *indices; /* 0x58 */
} Context_8226C6A8;

typedef struct Object_8226C6A8 {
    unsigned char padding[0x2e];
    unsigned short index; /* 0x2e */
} Object_8226C6A8;

extern void fn_8280CB70(const Matrix_8280CB70 *, const Matrix_8280CB70 *, Matrix_8280CB70 *);
extern void fn_8280D2A0(Matrix_8280CB70 *, const float *, float);
extern void fn_8280E890(const float *, Matrix_8280CB70 *);

void fn_8226C6A8(Context_8226C6A8 *self, const Object_8226C6A8 *object, int unused1, int unused2,
                 const Matrix_8280CB70 *left, const Matrix_8280CB70 *right, Matrix_8280CB70 *result)
{
    float axis[3];
    __vector4 vector;
    Matrix_8280CB70 partial;
    Matrix_8280CB70 rotation;
    Matrix_8280CB70 angle;
    Transform_8226C6A8 *entry = &self->transforms[self->indices[object->index]];
    float x;
    float z;

    fn_8280CB70(left, right, result);
    fn_8280CB70(&entry->local, result, &partial);

    vector = entry->axis;
    z = vector.vector4_f32[1];
    x = vector.vector4_f32[0];
    axis[1] = 0.0f;
    axis[0] = x;
    axis[2] = z;
    fn_8280D2A0(&angle, axis, entry->angle);
    fn_8280E890(entry->rotation, &rotation);
    fn_8280CB70(&rotation, &angle, &rotation);
    fn_8280CB70(&rotation, &partial, &partial);
    partial.rows[3].vector4_f32[0] = entry->offset[0] + partial.rows[3].vector4_f32[0];
    partial.rows[3].vector4_f32[1] = entry->offset[2] + partial.rows[3].vector4_f32[1];
    partial.rows[3].vector4_f32[2] = entry->offset[1] + partial.rows[3].vector4_f32[2];
    fn_8280CB70(&entry->world, &partial, result);
}
