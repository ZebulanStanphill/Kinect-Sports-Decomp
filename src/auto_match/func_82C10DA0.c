typedef struct Obj_82C10DA0 {
    char pad0[0x1fc];
    void *owner;            /* 0x1fc */
    int f200;
    int d;                  /* 0x204 */
    int b;                  /* 0x208 */
    int c;                  /* 0x20c */
} Obj_82C10DA0;

extern int fn_82C10AD0(void *ctx, int pool, unsigned int size, Obj_82C10DA0 **out);
extern void fn_82C10B28(void *ctx, int pool, Obj_82C10DA0 **p);
extern void *memset(void *dst, int value, unsigned int size);

int fn_82C10DA0(void *ctx, int b, int c, int d, Obj_82C10DA0 **out)
{
    Obj_82C10DA0 *obj;
    int hr;

    *out = 0;
    obj = 0;
    hr = fn_82C10AD0(ctx, 2, sizeof(Obj_82C10DA0), &obj);
    if (hr >= 0) {
        memset(obj, 0, sizeof(Obj_82C10DA0));
        obj->owner = ctx;
        obj->b = b;
        obj->c = c;
        obj->d = d;
        *out = obj;
    } else if (obj != 0) {
        fn_82C10B28(ctx, 2, &obj);
    }
    return hr;
}
