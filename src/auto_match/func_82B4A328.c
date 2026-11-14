extern unsigned int strlen(const char *s);
extern __declspec(noreturn) void fn_82AA66A8(void *ctx, int code, ...);
extern char *fn_82B47730(void *ctx, unsigned int size, int flags);
extern int fn_82F6DCE0(char *buf, unsigned int size, const char *fmt, ...);
extern unsigned int fn_82B466F8(void *ctx, char *s);
extern char *lbl_83160F7C[];

void fn_82B4A328(void *ctx, unsigned int kind, unsigned int index)
{
    if (kind < 0xf && lbl_83160F7C[kind] != 0 && index <= 9) {
        unsigned int size = strlen(lbl_83160F7C[kind]) + 2;
        char *buf = fn_82B47730(ctx, size, 0);
        fn_82F6DCE0(buf, size, "%s%u", lbl_83160F7C[kind], index);
        fn_82B466F8(ctx, buf);
        return;
    }
    fn_82AA66A8(ctx, 0x12c1);
}
