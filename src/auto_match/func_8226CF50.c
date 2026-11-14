typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Matrix_8226CF50 {
    __vector4 r[4];
} Matrix_8226CF50;

typedef struct Obj_8226CF50 {
    char pad0[0x75];
    unsigned char dirty;
    char pad76[0x80 - 0x76];
    Matrix_8226CF50 world;
    Matrix_8226CF50 view;
    Matrix_8226CF50 proj;
    float nearZ;
    float farZ;
} Obj_8226CF50;

static __forceinline void Copy(Matrix_8226CF50 *d, const Matrix_8226CF50 *s)
{
    d->r[0] = s->r[0]; d->r[1] = s->r[1]; d->r[2] = s->r[2]; d->r[3] = s->r[3];
}
void fn_8226CF50(Obj_8226CF50 *self, const Matrix_8226CF50 *world, const Matrix_8226CF50 *view,
                 const Matrix_8226CF50 *proj, float nearZ, float farZ)
{
    self->dirty = 1;
    Copy(&self->world, world);
    Copy(&self->view, view);
    Copy(&self->proj, proj);
    self->nearZ = nearZ;
    self->farZ = farZ;
}
