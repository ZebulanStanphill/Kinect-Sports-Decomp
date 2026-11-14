typedef struct Vec3_8285AEA0 {
    float x;
    float y;
    float z;
} Vec3_8285AEA0;

typedef struct Ctx_8285AEA0 {
    char pad0[0x10];
    char xform[0x84];
    void *transform;
} Ctx_8285AEA0;

typedef struct Obj_8285AEA0 {
    char pad0[0x64];
    char *base;
    int pad68;
    char tree[4];
} Obj_8285AEA0;

extern void *fn_8305C3F0(void *tree);
extern void *fn_8305C550(void *tree, Vec3_8285AEA0 *pos);
extern void fn_8280AD30(void *xform, Vec3_8285AEA0 *in, Vec3_8285AEA0 *out);

int fn_8285AEA0(Obj_8285AEA0 *self, int offset, Vec3_8285AEA0 *pos)
{
    Ctx_8285AEA0 *ctx = (Ctx_8285AEA0 *)(self->base + offset);
    Vec3_8285AEA0 tmp;

    if (fn_8305C3F0(self->tree) != 0) {
        if (ctx->transform != 0) {
            fn_8280AD30(ctx->xform, pos, &tmp);
        } else {
            tmp = *pos;
        }
        if (fn_8305C550(self->tree, &tmp) != 0) {
            return 1;
        }
    }
    return 0;
}
