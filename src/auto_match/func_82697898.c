extern const double lbl_82005710;
extern double fn_826972E0(void *value, void *env);
extern double fn_826BC950(void);
extern double fn_826BC960(void);
extern double fn_826BC970(void);
extern void fn_82681898(void *value, double number);

void fn_82697898(void *self, void *env, void *other)
{
    double a = fn_826972E0(self, env);
    double b = fn_826972E0(other, env);
    double r;

    if (b == lbl_82005710) {
        if (a == lbl_82005710)
            r = fn_826BC950();
        else if (a >= lbl_82005710)
            r = fn_826BC960();
        else
            r = fn_826BC970();
    } else {
        r = a / b;
    }
    fn_82681898(self, r);
}
