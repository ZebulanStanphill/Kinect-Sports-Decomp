extern int fn_827A9810();


void fn_826A30B8(int param_1,int param_2,__int64 param_3)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  __int64 lVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  int *piVar7;
  
  piVar7 = (int *)(param_1 + 0x34);
  uVar1 = *(unsigned int *)(param_1 + 0x38);
  fn_827A9810(piVar7,(unsigned __int64)uVar1 + param_3);
  if (uVar1 != 0) {
    iVar3 = param_2 + (int)param_3;
    uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0x38) - 1;
    if (iVar3 <= (int)uVar6) {
      lVar4 = (uVar6 & 0x3fffffff) << 2;
      lVar5 = (uVar6 - param_3 & 0x3fffffff) << 2;
      do {
        uVar6 = uVar6 - 1;
        iVar2 = (int)lVar5;
        lVar5 = lVar5 + -4;
        *(unsigned int *)((int)lVar4 + *piVar7) = *(unsigned int *)(iVar2 + *piVar7);
        lVar4 = lVar4 + -4;
      } while (iVar3 <= (int)uVar6);
    }
  }
  if (0 < (int)param_3) {
    param_2 = param_2 << 2;
    do {
      *(unsigned int *)(param_2 + *piVar7) = 0;
      param_2 = param_2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

