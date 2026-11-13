extern int fn_822B1B90();
extern void __emit(unsigned int);
#define __lwsync() __emit(0x7C2004AC)

int *fn_82899120(int *param_1, unsigned int param_2)
{
  int iVar1;
  int *piVar2;
  int aiStack_20[4];

  *param_1 = (int)param_1;
  param_1[1] = (int)param_1;
  param_1[2] = (int)param_2;
  if (param_2 != 0) {
    fn_822B1B90(aiStack_20, param_2 + 4);
    piVar2 = (int *)(param_1[2] + 4);
    iVar1 = *piVar2;
    param_1[1] = (int)piVar2;
    *param_1 = iVar1;
    *(int **)(*piVar2 + 4) = param_1;
    *piVar2 = (int)param_1;
    __lwsync();
    *(int *)(aiStack_20[0] + 8) = 0;
  }
  return param_1;
}
