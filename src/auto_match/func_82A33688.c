typedef int (*Fn_82A33688)(int, int, int, int, unsigned int *, int, int, int, int);

typedef struct Api_82A33688 {
    char pad[0x18];
    Fn_82A33688 fn18;
} Api_82A33688;

extern Api_82A33688 *lbl_8315D3D0;

int fn_82A33688(int param_1, int param_2, int param_3)
{
    unsigned int result;
    int hr;

    hr = lbl_8315D3D0->fn18(param_1, 0, 0, 0, &result, param_2, param_3, 0, 0);
    if (hr >= 0) {
        hr = result;
    }
    return hr;
}
