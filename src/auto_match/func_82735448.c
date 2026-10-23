typedef int (*code)();
extern int fn_826C1328();

void fn_82735448(int param_1)
{
    (*(code *)*(int *)(param_1 + 0x30))(param_1 + 0x30, 0);
    (*(code *)*(int *)(param_1 + 0x5c))(param_1 + 0x5c, 0);
    fn_826C1328(param_1);
}
