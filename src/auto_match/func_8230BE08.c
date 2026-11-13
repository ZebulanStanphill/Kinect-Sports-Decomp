extern int fn_822ABA88();


unsigned __int64 fn_8230BE08(int param_1)

{
  int iVar1;
  int *piVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  
  iVar1 = *(int *)(param_1 + 0x10);
  uVar6 = (unsigned __int64)*(unsigned int *)(iVar1 + 0x9a0);
  piVar2 = *(int **)(((unsigned int)LZCOUNT(*(unsigned int *)(*(int *)(param_1 + 0xc) + 0x2c)) >> 3 & 4) +
                    **(int **)(iVar1 + 8));
  uVar3 = *(unsigned int *)(piVar2[4] * 4 + *piVar2);
  uVar8 = (unsigned __int64)uVar3;
  piVar2 = *(int **)(*(int *)(uVar3 + 0x10) * 4 + *(int *)(iVar1 + 0x20));
  if ((((piVar2[1] - *piVar2 >> 2 == 0) || (*(int *)(iVar1 + 0x58) != 3)) ||
      (*(int *)(iVar1 + 0xfa4) != 0)) ||
     ((uVar6 == 0 && (uVar6 = (unsigned __int64)*(unsigned int *)(iVar1 + 0x9a4), uVar6 == 0)))) {
    uVar7 = (unsigned __int64)*(unsigned int *)(uVar3 + 8);
    uVar5 = 0;
    if (uVar7 != 0) {
      do {
        uVar4 = fn_822ABA88(uVar8);
        iVar1 = *(int *)(*(int *)((int)uVar4 + 0x110) + 0x1c);
        if (((iVar1 == 0xc) || (iVar1 == 0xd)) || (iVar1 == 0x1d)) {
          uVar6 = uVar4;
        }
        uVar5 = uVar5 + 1;
      } while ((uVar5 & 0xffffffff) < (uVar7 & 0xffffffff));
    }
  }
  return uVar6;
}

