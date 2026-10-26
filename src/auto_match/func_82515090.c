typedef int (*code)();
extern unsigned int fn_825154B8();
extern int fn_825156F8();

void fn_82515090(int param_1)
{
  int uVar1;
  unsigned int uVar2;
  int iVar3;

  uVar1 = *(int *)(param_1 + 0x28);
  uVar2 = fn_825154B8();
  iVar3 = fn_825156F8(uVar2, uVar1);
  (*(code *)(iVar3 + 0x2c))(param_1);
}
