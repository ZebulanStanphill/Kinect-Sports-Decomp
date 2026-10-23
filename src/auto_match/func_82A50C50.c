typedef int (*code)();
extern int fn_82A4FBD8();

void fn_82A50C50(int param_1, int param_2, int param_3)
{
    (*(code *)(*(int *)(*(int *)(param_1 + 0x30) + 0x2c) + 8))(*(int *)(param_1 + 0x30) + 0x2c);
    fn_82A4FBD8(*(int *)(param_1 + 0x34), param_2, param_3);
    (*(code *)(*(int *)(*(int *)(param_1 + 0x30) + 0x2c) + 0x14))(*(int *)(param_1 + 0x30) + 0x2c);
}
