typedef struct Type_82B45880 {
    int pad0;
    int kind;
    struct Type_82B45880 *base;
    void *extra;
} Type_82B45880;

extern Type_82B45880 *fn_82AA66A8(void *ctx, int code);

Type_82B45880 *fn_82B45880(void *ctx, Type_82B45880 *type)
{
    Type_82B45880 *base;
    if (type->kind == 3)
        return type;
    if (type->kind == 1) {
        if (type->extra != 0)
            return fn_82AA66A8(ctx, 0x12c1);
        base = type->base;
        if (base != 0 && base->kind == 3)
            return base;
        return fn_82AA66A8(ctx, 0x12c1);
    }
    return fn_82AA66A8(ctx, 0x12c1);
}
