extern unsigned int _ctrlfp(unsigned int newcw, unsigned int mask);
extern int fn_82F71860(double x);
extern double fn_82F6DF48(double x, double sign);
extern double fn_82F788F0(double x);
extern double fn_82F79130(int op, double x, unsigned int cw);
extern double fn_82F79238(int flags, int op, double x, double result, unsigned int cw);
extern unsigned int lbl_831BB908;
extern double lbl_831BB920; /* indefinite NaN */
extern double lbl_82005710; /* 0.0 */

double fn_82F6FC80(double x, double *iptr)
{
    unsigned int savedcw;
    unsigned short hi;
    double frac;
    double ip;

    savedcw = _ctrlfp(0, 0);
    _ctrlfp(lbl_831BB908, 0xc007feff);
    hi = *(unsigned short *)&x;
    if ((hi & 0x7ff0) == 0x7ff0) {
        *iptr = lbl_831BB920;
        switch (fn_82F71860(x)) {
        case 1:
        case 2:
            *iptr = x;
            frac = fn_82F6DF48(lbl_82005710, x);
            _ctrlfp(savedcw, 0xc007feff);
            return frac;
        case 3:
            *iptr = x;
            return fn_82F79130(0x1c, x, savedcw);
        default:
            ip = x + 1.0;
            *iptr = ip;
            return fn_82F79238(8, 0x1c, x, ip, savedcw);
        }
    } else {
        ip = fn_82F788F0(x);
        frac = x - ip;
        *iptr = ip;
        if (frac == lbl_82005710) {
            *(unsigned short *)&frac |= hi & 0x8000;
        }
    }
    _ctrlfp(savedcw, 0xc007feff);
    return frac;
}
