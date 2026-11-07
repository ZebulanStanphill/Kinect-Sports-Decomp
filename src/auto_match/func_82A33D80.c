typedef struct {
    unsigned int v[6];
} Info_82A33D80;

typedef int (*QueryFn_82A33D80)(int, void *, void *, int, int);

int fn_82A33D80(int *param_1, int param_2, unsigned int param_3, unsigned int param_4)
{
    unsigned char buf[16];
    Info_82A33D80 info;
    unsigned int align;
    int hr;

    if ((param_1[0x61] & 1) == 0 && (*(unsigned int *)(param_2 + 0x28) & 8) != 0) {
        hr = ((QueryFn_82A33D80)(*(int *)(*param_1 + 0x1c)))(
            *(int *)(param_2 + 4), buf, &info, 0x18, 3);
        align = info.v[5];
        if (hr < 0) {
            align = 0x800;
        }
        if ((align - 1 & param_3) != 0 || (align - 1 & param_4) != 0) {
            return 0;
        }
    }
    return 1;
}
