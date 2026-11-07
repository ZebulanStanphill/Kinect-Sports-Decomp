typedef struct Obj_82B4B4F8 {
    unsigned int pad0 : 29;
    unsigned int flag : 1;
    unsigned int low : 2;
    int f4;
    int f8;
    int fC;
} Obj_82B4B4F8;

extern int fn_82ACA920(void *ctx, Obj_82B4B4F8 *obj, int v);
extern void fn_82AD1270(int r, int mode);
extern int fn_82AD17B0(void *ctx, int v);
extern int fn_82B47B90(void *ctx, Obj_82B4B4F8 *obj, Obj_82B4B4F8 *obj2);

int fn_82B4B4F8(void *ctx, Obj_82B4B4F8 *obj)
{
    int r;

    if ((unsigned char)obj->flag != 0) {
        r = fn_82B47B90(ctx, obj, obj);
        r = fn_82AD17B0(ctx, r);
    } else {
        r = fn_82ACA920(ctx, obj, obj->fC);
    }
    fn_82AD1270(r, 2);
    return r;
}
