typedef struct { char pad[0x15]; unsigned char flag; } R;
extern void fn_8268CC00(float *v);
extern int fn_826E8488(R *r, int n);
extern int fn_826E8560(R *r);
extern int fn_826E8610(R *r, int n);
extern float lbl_82054148;

void fn_826E8AF0(R *r, float *v)
{
    float scale;
    int n;
    int ok;

    r->flag = 0;
    fn_8268CC00(v);
    ok = fn_826E8560(r);
    scale = lbl_82054148;
    if (ok != 0) {
        n = fn_826E8488(r, 5);
        v[0] = (float)fn_826E8610(r, n) * scale;
        v[4] = (float)fn_826E8610(r, n) * scale;
    }
    if (fn_826E8560(r) != 0) {
        n = fn_826E8488(r, 5);
        v[3] = (float)fn_826E8610(r, n) * scale;
        v[1] = (float)fn_826E8610(r, n) * scale;
    }
    n = fn_826E8488(r, 5);
    if (n > 0) {
        v[2] = (float)fn_826E8610(r, n);
        v[5] = (float)fn_826E8610(r, n);
    }
}
