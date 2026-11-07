extern void *fn_82E1F690(char *s);
extern char *fn_82E1D888(void *ctx, void *str, int ch);
extern void fn_82E1DFA0(void *ctx, void *str, char *value);
extern void fn_82E1E0E8(void *ctx, void *str, char *value);
extern void fn_8265CA20(void *p);

int fn_82E1E1C8(void *ctx, char *s)
{
    char *p;
    int result;
    void *copy;

    result = 0;
    copy = fn_82E1F690(s);
    if (s != 0) {
        p = fn_82E1D888(ctx, copy, 0x3d);
        if (p != 0) {
            *p = 0;
            fn_82E1DFA0(ctx, copy, p + 1);
        } else {
            p = fn_82E1D888(ctx, copy, 0x3c);
            if (p == 0) {
                p = fn_82E1D888(ctx, copy, 0x2b);
                if (p == 0)
                    goto done;
            }
            *p = 0;
            fn_82E1E0E8(ctx, copy, p + 1);
        }
        result = 1;
    }
done:
    if (copy != 0) {
        fn_8265CA20(copy);
    }
    return result;
}
