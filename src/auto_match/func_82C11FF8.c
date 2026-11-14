typedef struct Child_82C11FF8 Child_82C11FF8; /* 0x210-byte object made by fn_82C10DA0 */

typedef struct Obj_82C11FF8 {
    void *ctx;              /* 0x00 */
    int f4;                 /* 0x04 */
    char pad8[0x48 - 0x8];
    Child_82C11FF8 *child;  /* 0x48 */
    char pad4c[0x68 - 0x4c];
} Obj_82C11FF8;

extern int fn_82C10AD0(void *ctx, int pool, unsigned int size, Obj_82C11FF8 **out);
extern void fn_82C10B28(void *ctx, int pool, Obj_82C11FF8 **p);
extern int fn_82C10DA0(void *ctx, void *b, void *c, int d, Child_82C11FF8 **out);
extern void fn_82C11D80(void);
extern void *memset(void *dst, int value, unsigned int size);

int fn_82C11FF8(void *ctx, Obj_82C11FF8 **out)
{
    Obj_82C11FF8 *obj = 0;
    int hr;

    hr = fn_82C10AD0(ctx, 0x20, sizeof(Obj_82C11FF8), &obj);
    if (hr >= 0) {
        memset(obj, 0, sizeof(Obj_82C11FF8));
        obj->ctx = ctx;
        obj->f4 = 0;
        hr = fn_82C10DA0(ctx, fn_82C11D80, obj, 0x30, &obj->child);
        if (hr >= 0) {
            *out = obj;
            return hr;
        }
    }
    if (obj != 0) {
        fn_82C10B28(ctx, 0x20, &obj);
    }
    return hr;
}
