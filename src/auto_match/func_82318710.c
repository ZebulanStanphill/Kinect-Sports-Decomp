extern int fn_822ABA88();


int fn_82318710(int param_1)

{
  int *piVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  
  piVar1 = *(int **)(param_1 + 0x1c);
  uVar3 = 0;
  uVar4 = (unsigned __int64)*(unsigned int *)(*(int *)(piVar1[4] * 4 + *piVar1) + 8);
  if (uVar4 != 0) {
    uVar5 = (unsigned __int64)*(unsigned int *)(piVar1[4] * 4 + *piVar1);
    do {
      iVar2 = fn_822ABA88(uVar5);
      if (*(int *)(*(int *)(iVar2 + 0x110) + 0x1c) == 3) {
        return iVar2;
      }
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xffffffff) < (uVar4 & 0xffffffff));
  }
  return 0;
}

