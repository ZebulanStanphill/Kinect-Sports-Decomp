typedef unsigned char bool;
#define false 0
extern int fn_82BD7EF8();


bool fn_82BD7610(int param_1)
{
  unsigned int iVar1;
  int lVar2;
  unsigned int uVar3;
  unsigned *piVar4;

  if ((*(int *)(param_1 + 0x18) != 1) || (iVar1 = *(int *)(param_1 + 8), iVar1 == 0)) {
    return false;
  }
  uVar3 = 0;
  piVar4 = (unsigned *)(iVar1 + 0x10);
  while ((piVar4[-2] == 0 || (*(int *)piVar4 != 1))) {
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 1;
    if (uVar3 >= 2) {
      lVar2 = 0;
LAB_82bd7668:
      return 0 != lVar2;
    }
  }
  lVar2 = fn_82BD7EF8(*(unsigned int *)(iVar1 + 4) + 8);
  goto LAB_82bd7668;
}
