extern int fn_822ABA88();
extern int fn_82372F88();
extern int fn_824A5DE0();
extern int fn_824CCFC8();


unsigned __int64 fn_8238A4F0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar2 = fn_82372F88(iVar3);
  uVar5 = 0;
  piVar1 = *(int **)(iVar2 * 4 + **(int **)(iVar3 + 8));
  iVar3 = *(int *)(piVar1[4] * 4 + *piVar1);
  if (*(int *)(iVar3 + 8) != 0) {
    do {
      iVar3 = fn_822ABA88(iVar3,uVar5);
      uVar4 = (unsigned __int64)*(unsigned int *)(iVar3 + 0x24);
      if ((((uVar4 != 0) && (*(int *)(*(unsigned int *)(iVar3 + 0x24) + 0x158) != 0)) &&
          (iVar3 = fn_824A5DE0(), iVar3 != 0)) && (iVar3 = fn_824CCFC8(uVar4), iVar3 != 0)
         ) {
        return 1;
      }
      uVar5 = uVar5 + 1;
      iVar3 = *(int *)(piVar1[4] * 4 + *piVar1);
    } while ((uVar5 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar3 + 8));
  }
  return 0;
}

