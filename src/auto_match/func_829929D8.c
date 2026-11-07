typedef struct Ctx_829929D8 {
    int data[0x2F6];
    int *owner;
} Ctx_829929D8;

extern int fn_82F68780(int a, int b);
extern void fn_82F688E8(void);
extern int fn_828F5D48(int a, int b);
extern int fn_82980DE8(int *obj, int a, int b);
extern int fn_82991420(Ctx_829929D8 *ctx);
extern int fn_828F8E78(int a);
void *memset(void *dst, int c, unsigned int n);

int fn_829929D8(int *obj, int p2, int p3, unsigned int *out, int p5)
{
    Ctx_829929D8 ctx;
    int saved;
    int hr;
    int v;

    saved = fn_82F68780(0, 0);
    fn_82F68780(-1, 0x8001F);
    fn_82F68780(0, 0x30000);
    if (out == 0) {
        hr = (int)0x8876086C;
    } else {
        *out = 0;
        obj[0] = p3;
        obj[1] = p2;
        obj[0x1E] = p5;
        obj[2] = 0;
        obj[5] = 0;
        obj[6] = 0;
        obj[8] = 0;
        obj[9] = 0;
        obj[7] = 0;
        obj[4] = 0;
        obj[0x12] = 0;
        obj[0x13] = 0;
        obj[0x14] = 0;
        obj[0x15] = 1;
        obj[0x16] = 0;
        obj[0x17] = 0;
        obj[0x18] = 0;
        obj[0x19] = 0;
        obj[0x1A] = 0;
        obj[0x1B] = 0;
        obj[0x1C] = 0;
        hr = fn_828F5D48(p2, 1);
        if (hr >= 0) {
            fn_82980DE8(obj, 0, 0);
            memset(&ctx, 0, sizeof(ctx));
            ctx.owner = obj;
            if (fn_82991420(&ctx) != 0) {
                obj[0x12] = 1;
            }
            hr = fn_828F8E78(obj[1]);
            if (hr >= 0 && obj[0x12] == 0) {
                *out = *(unsigned int *)(obj[2] + 8);
                *(int *)(obj[2] + 8) = 0;
            }
        }
    }
    fn_82F688E8();
    fn_82F68780(saved, 0xB001F);
    if (hr < 0) {
        return hr;
    }
    if (obj[0x12] != 0) {
        v = obj[0x14];
        if (v < 0) {
            return v;
        }
        return (int)0x80004005;
    }
    return 0;
}
