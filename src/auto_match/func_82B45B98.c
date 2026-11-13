typedef struct Arg_82B45B98 {
    int pad0;
    int type;      /* 0x04 */
    int value;     /* 0x08 */
    void *extra;   /* 0x0c */
} Arg_82B45B98;

extern __declspec(noreturn) void fn_82AA66A8(void *ctx, int code);
extern unsigned char fn_82B458E0(void *ctx, int value, int *out);
extern int fn_82B45B10(void *ctx, void *arg);

void fn_82B45B98(void *ctx, Arg_82B45B98 *arg, int *value, int *extra)
{
    if (arg == 0) {
        fn_82AA66A8(ctx, 0xdff);
    }
    if (arg->type == 1) {
        if (arg->extra == 0) {
            fn_82AA66A8(ctx, 0xdff);
        }
        if (!fn_82B458E0(ctx, arg->value, value)) {
            fn_82AA66A8(ctx, 0xdff);
        }
        *extra = fn_82B45B10(ctx, arg->extra);
        return;
    }
    fn_82AA66A8(ctx, 0x12c1);
}
