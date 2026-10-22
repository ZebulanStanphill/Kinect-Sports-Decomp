typedef int (*GetFn)(void *, unsigned __int64 *);

extern void fn_82E50CB8(int *);
extern void fn_82E50F10(int *);

int fn_82E4A0D0(int *param_1, int *param_2)
{
    int hr;
    unsigned __int64 val;

    val = 0;
    fn_82E50CB8(param_1 + 0x16);
    if (param_2 == 0) {
        hr = 0x80070057;
    } else if (param_1[0x27] == -1) {
        hr = 0xc00d36b2;
    } else {
        hr = (*(GetFn *)(*param_1 + 0x10))(param_1, &val);
        if (hr >= 0) {
            if (*(unsigned __int64 *)(param_1 + 0x32) < val) {
                *param_2 = 0;
            } else {
                *param_2 = 1;
            }
        }
    }
    fn_82E50F10(param_1 + 0x16);
    return hr;
}
