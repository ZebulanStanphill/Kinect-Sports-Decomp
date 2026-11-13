extern int fn_822ABA88();


void fn_823738F0(unsigned __int64 param_1)

{
  int *piVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  __int64 lVar6;
  
  piVar1 = *(int **)((int)param_1 + 8);
  lVar6 = (__int64)(piVar1[1] - *piVar1 >> 2);
  if (0 < lVar6) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      piVar1 = *(int **)(**(int **)((int)param_1 + 8) + (int)lVar5);
      uVar4 = (unsigned __int64)*(unsigned int *)(*(int *)(piVar1[4] * 4 + *piVar1) + 8);
      if (uVar4 != 0) {
        do {
          piVar1 = *(int **)(**(int **)((int)param_1 + 8) + (int)lVar5);
          iVar2 = fn_822ABA88(*(unsigned int *)(piVar1[4] * 4 + *piVar1));
          uVar3 = uVar3 + 1;
          *(unsigned int *)(iVar2 + 0x2ac) = 0;
        } while ((uVar3 & 0xffffffff) < (uVar4 & 0xffffffff));
      }
      lVar6 = lVar6 + -1;
      lVar5 = lVar5 + 4;
    } while (lVar6 != 0);
  }
  return;
}

