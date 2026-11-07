typedef unsigned char U8;

extern void fn_82A3AA60(int p);
extern int fn_82A39E40(int p);

int fn_82A39260(int param_1, int param_2, int param_3, int *param_4, int param_5)
{
    int result;

    *(int *)(param_1 + 0x984) = param_2;
    *(int *)(param_1 + 0x988) = param_3;
    *(int *)(param_1 + 0x86c) = param_5;
    fn_82A3AA60(param_1);
    if (*(U8 *)(param_1 + 0x19) != 0) {
        result = 2;
        *param_4 = 0;
    } else {
        *param_4 = fn_82A39E40(param_1);
        result = 0;
    }
    return result;
}
