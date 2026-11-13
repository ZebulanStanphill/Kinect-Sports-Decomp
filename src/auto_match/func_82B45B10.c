typedef struct Arg_82B45B10 {
    int pad0;
    int type;
    int value;
    void *extra;
} Arg_82B45B10;

extern __declspec(noreturn) void fn_82AA66A8(void *ctx, int code);
extern unsigned char fn_82B458E0(void *ctx, int value, int *out);

int fn_82B45B10(void *ctx, Arg_82B45B10 *arg)
{
    int result;

    if (arg == 0) {
        fn_82AA66A8(ctx, 0xdff);
    }
    if (arg->type == 1) {
        if (arg->extra != 0) {
            fn_82AA66A8(ctx, 0xdff);
        }
        if (!fn_82B458E0(ctx, arg->value, &result)) {
            fn_82AA66A8(ctx, 0xdff);
        }
        return result;
    }
    fn_82AA66A8(ctx, 0x12c1);
}
