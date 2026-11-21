typedef struct Value_82697700 {
    unsigned char type; /* 0x0 */
    char pad1[0x8 - 0x1];
    unsigned int integer; /* 0x8 */
} Value_82697700;

extern const double lbl_82006280;
extern const double lbl_82006268;

double fabs(double x);

extern double fn_826972E0(Value_82697700 *value, void *env);
extern double fn_82F68918(double x);
extern double fn_82F6A7A0(double x, double y);

static __forceinline unsigned char IsNaNOrInfinite(double x)
{
    return (*(unsigned __int64 *)&x & 0x7ff0000000000000) == 0x7ff0000000000000;
}

unsigned int fn_82697700(Value_82697700 *value, void *env)
{
    double number;
    unsigned int result;
    double whole;

    if (value->type == 4) {
        return value->integer;
    }
    number = fn_826972E0(value, env);
    if (number == 0.0 || IsNaNOrInfinite(number)) {
        return 0;
    }
    if (number < 0.0 || number > lbl_82006280) {
        whole = fn_82F68918(fabs(number));
        result = (unsigned int)fn_82F6A7A0(whole, lbl_82006268);
        if (number < 0.0) {
            result = -result;
        }
        return result;
    }
    return (unsigned int)number;
}
