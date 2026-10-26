typedef int (*code)();
extern int *lbl_83231E24;

void fn_82C3CD68(int param_1, int param_2, int param_3, int param_4)
{
    (*(code *)(*lbl_83231E24 + 0x1c))(lbl_83231E24, param_1, param_3, param_2, 0x10, param_4 == 1);
}
