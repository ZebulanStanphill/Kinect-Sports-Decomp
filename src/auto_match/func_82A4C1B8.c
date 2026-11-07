extern int fn_82A4ADB8(int a, int b, int c);
extern int fn_82A4B670(int a, int b, int c, int d);
extern int fn_82A4BDA8(int a, int b);
extern int fn_82A5C0A8(int a, int b, int c);

typedef struct Inner_82A4C1B8 {
    int pad0[4];
    int f10;
    int pad14[27];
    int mode;
} Inner_82A4C1B8;

typedef struct Outer_82A4C1B8 {
    int pad0[17];
    Inner_82A4C1B8 *inner;
} Outer_82A4C1B8;

int fn_82A4C1B8(Outer_82A4C1B8 *param_1, int param_2, int param_3, int param_4)
{
    int hr;
    int mode;
    Inner_82A4C1B8 *in;

    hr = fn_82A4BDA8((int)param_1 - 4, param_3);
    if (hr >= 0) {
        in = param_1->inner;
        mode = in->mode;
        if (mode != 0) {
            hr = fn_82A5C0A8(param_3, mode != 2 ? 2 : 0, in->f10);
        }
        if (hr >= 0) {
            if (param_1->inner->mode != 0) {
                hr = fn_82A4B670((int)param_1 - 4, param_2, param_3, param_4);
            } else {
                hr = fn_82A4ADB8((int)param_1 - 4, param_2, param_3);
            }
        }
    }
    return hr;
}
