typedef int (*code)();
extern int fn_8267C498();

void fn_82711878(int *param_1)
{
  int iVar1;

  (*(code *)(*param_1 + 0x68))();
  iVar1 = param_1[3];
  if (*(unsigned int *)(iVar1 + 4) != 0) {
    fn_8267C498(*(unsigned int *)(iVar1 + 4));
  }
  *(unsigned int *)(iVar1 + 4) = 0;
}
