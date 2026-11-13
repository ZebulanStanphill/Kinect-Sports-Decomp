typedef struct Arg_82B45C18 {
    int pad0;
    int type;
    int value;
    void *extra;
} Arg_82B45C18;

extern __declspec(noreturn) void fn_82AA66A8(void *ctx, int code);
extern unsigned char fn_82B45A50(void *ctx, int value, unsigned char *out);

unsigned char fn_82B45C18(void *ctx, Arg_82B45C18 *arg)
{
    unsigned char result;

    if (arg == 0) {
        fn_82AA66A8(ctx, 0xe19);
    }
    if (arg->type == 1) {
        if (arg->extra != 0) {
            fn_82AA66A8(ctx, 0xe19);
        }
        if (!fn_82B45A50(ctx, arg->value, &result)) {
            fn_82AA66A8(ctx, 0xe19);
        }
        return result;
    }
    fn_82AA66A8(ctx, 0x12c1);
}
