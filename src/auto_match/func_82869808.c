typedef struct Obj_82869808 {
    char pad[0xc];
    unsigned int value;
} Obj_82869808;

extern unsigned int fn_828766C8(void *ctx, Obj_82869808 *obj);

unsigned int fn_82869808(void *ctx, Obj_82869808 *obj)
{
    if (obj->value != 0) {
        return obj->value;
    }
    return fn_828766C8(ctx, obj);
}
