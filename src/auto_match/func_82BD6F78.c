typedef int (*code)();
extern int *fn_82BD6300();

int fn_82BD6F78(int param_1, int param_2, int param_3, int param_4, int param_5)
{
  int *piVar1;
  int uVar2;

  uVar2 = 0x80070057;
  piVar1 = fn_82BD6300();
  if (piVar1 != 0) {
    uVar2 = (*(code *)(*piVar1 + 0x1c))(piVar1, param_3, param_4, param_5);
  }
  return uVar2;
}
