typedef struct Encoder_82E25660 {
    unsigned char pad0[0x464];
    int config; /* 0x464 */
} Encoder_82E25660;

extern int fn_82E4DAA8(Encoder_82E25660 *self, int mode, int arg3, int arg4, double arg5, double arg6,
                       double arg7, __int64 arg8, int arg9, int arg10, int arg11, int arg12, int arg13,
                       int arg14, int arg15, int arg16, int arg17, int arg18, int arg19, int arg20, int arg21,
                       int arg22, int arg23, int arg24, int arg25, int arg26, int arg27, int arg28, int arg29,
                       int arg30, int arg31);
extern void fn_82E4BEC0(Encoder_82E25660 *self, int value);

int fn_82E25660(Encoder_82E25660 *self, int mode, int arg3, int arg4, double arg5, double arg6, double arg7,
                int arg8, int arg9, int arg10, int arg11, int arg12, int arg13, int arg14, int arg15,
                unsigned char flag16, unsigned char flag17, unsigned char flag18, int arg19, int arg20,
                int arg21, int arg22, int arg23, unsigned char flag24)
{
    if (self == 0) {
        return 1;
    }
    if (flag16 != 0) {
        return 5;
    }
    if (arg12 > 2) {
        return 5;
    }
    if (flag18 != 0) {
        return 5;
    }
    if (mode != 2 && mode != 5) {
        return 5;
    }
    if (fn_82E4DAA8(self, mode, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg11, arg12, arg13,
                    arg14, arg15, 0, flag17, 0, arg19, arg20, arg21, flag24, arg22, 0, 0, self->config, arg3,
                    arg4, 0, self->config) != 0) {
        return 2;
    }
    fn_82E4BEC0(self, arg23);
    return 0;
}
