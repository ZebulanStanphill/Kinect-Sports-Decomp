typedef void (*LogCb_82B9A9A8)(void *ctx, const char *fmt, int file, int line,
                               int value, int result);

extern unsigned int fn_82AB71F0(int a, int code, int value);
extern void fn_82AB7550(void *obj, int code, int value, int result);
extern int lbl_8316E480[];

int fn_82B9A9A8(int param_1, int param_2, void *param_3, LogCb_82B9A9A8 param_4,
                void *param_5)
{
    if (fn_82AB71F0(param_1, 0x1b, param_2) == 1) {
        if (param_3 != 0) {
            fn_82AB7550(param_3, 8, param_2, 1);
        }
        if (param_4 != 0 && param_5 != 0) {
            param_4(param_5, "%s (%d) %d : %d\n", lbl_8316E480[14], 0xe, param_2, 1);
        }
        return 1;
    }
    else {
        if (param_3 != 0) {
            fn_82AB7550(param_3, 8, param_2, 0);
        }
        if (param_4 != 0 && param_5 != 0) {
            param_4(param_5, "%s (%d) %d : %d\n", lbl_8316E480[14], 0xe, param_2, 0);
        }
        return 0;
    }
}
