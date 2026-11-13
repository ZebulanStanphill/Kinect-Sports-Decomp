typedef struct Vec3_83050640 { float x, y, z; } Vec3_83050640;
typedef struct Out_83050640 {
    float a;
    Vec3_83050640 v;
    unsigned char flag;
} Out_83050640;
typedef struct Inner_83050640 { char pad[0x10]; float a; Vec3_83050640 v; } Inner_83050640;

void fn_83050640(Inner_83050640 *self, Out_83050640 *out)
{
    out->a = self->a;
    out->v = self->v;
    out->flag = ((unsigned char *)self)[-8];
}
