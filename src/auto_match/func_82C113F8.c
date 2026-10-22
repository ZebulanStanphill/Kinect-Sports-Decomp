extern int fn_82C10F40(int, unsigned char, void **);
extern int fn_82C112A8(int, __int64 *);

int fn_82C113F8(int param_1, __int64 *param_2, __int64 *param_3)
{
    int hr;
    void *obj;

    obj = 0;
    *param_3 = 0;
    *param_2 = 0;
    hr = fn_82C10F40(*(int *)(param_1 + 0x48), *(unsigned char *)(param_1 + 0x10), &obj);
    if (hr >= 0) {
        if (*(void **)((char *)obj + 0x18) == 0) {
            hr = 0x8050000b;
        } else {
            *param_3 = *(__int64 *)(param_1 + 0x20);
            hr = fn_82C112A8(param_1, param_2);
            if (hr < 0) {
                *param_3 = 0;
                *param_2 = 0;
            } else if (*param_3 < *param_2) {
                *param_3 = *param_2;
            }
        }
    }
    return hr;
}
