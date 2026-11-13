typedef struct Obj_8269A678 {
    char pad0[4];
    unsigned int value;     /* 0x04 */
    char pad8[4];
    char sub[4];            /* 0x0c */
} Obj_8269A678;

extern unsigned int fn_826F5BA0(void *ctx, void *sub);

unsigned int fn_8269A678(Obj_8269A678 *obj, void *ctx)
{
    if (obj->value != 0) {
        return obj->value;
    }
    return fn_826F5BA0(ctx, obj->sub);
}
