extern int fn_82F84120(int a, int b, int *out);
extern int *_errno(void);

int fn_82F6E1C8(int param_1, int param_2)
{
    int r;
    int v;

    v = 0;
    r = fn_82F84120(param_1, param_2, &v);
    if (r == 0 && v != 0 && _errno() != 0) {
        *_errno() = v;
    }
    return r;
}
