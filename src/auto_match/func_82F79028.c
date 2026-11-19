typedef struct MathError_82F79028 {
    int type;         /* 0x0 */
    const char *name; /* 0x4 */
    double arg1;      /* 0x8 */
    double arg2;      /* 0x10 */
    double retval;    /* 0x18 */
} MathError_82F79028;

typedef struct FunctionName_82F79028 {
    unsigned int opcode; /* 0x0 */
    const char *name;    /* 0x4 */
} FunctionName_82F79028;

extern FunctionName_82F79028 lbl_831BBCB0[29];
extern int _ctrlfp(unsigned int control, unsigned int mask);
extern int fn_82D7E470(MathError_82F79028 *error);
extern void fn_82F78F98(int type);

/* The doubles are copied as two 32-bit words each, as the original does. */
static __forceinline void CopyDouble_82F79028(double *dst, const double *src)
{
    ((unsigned int *)dst)[0] = ((const unsigned int *)src)[0];
    ((unsigned int *)dst)[1] = ((const unsigned int *)src)[1];
}

static __forceinline const char *FindName_82F79028(unsigned int opcode)
{
    int i;

    for (i = 0; i < 29; i++) {
        if (lbl_831BBCB0[i].opcode == opcode) {
            return lbl_831BBCB0[i].name;
        }
    }
    return 0;
}

double fn_82F79028(int type, unsigned int opcode, double arg1, double arg2, double retval,
                   unsigned int control)
{
    MathError_82F79028 error;

    error.name = FindName_82F79028(opcode);
    if (error.name != 0) {
        error.type = type;
        CopyDouble_82F79028(&error.arg1, &arg1);
        CopyDouble_82F79028(&error.arg2, &arg2);
        CopyDouble_82F79028(&error.retval, &retval);
        _ctrlfp(control, 0xc007feff);
        if (fn_82D7E470(&error) == 0) {
            fn_82F78F98(type);
        }
        return error.retval;
    }
    _ctrlfp(control, 0xc007feff);
    fn_82F78F98(type);
    return retval;
}
