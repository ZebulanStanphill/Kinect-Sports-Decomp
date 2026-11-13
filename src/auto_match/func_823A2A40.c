extern int fn_822ABA88();
extern int fn_82399CB8();
extern int fn_824A5DE0();
extern int fn_824CCFC8();


unsigned __int64 fn_823A2A40(int param_1)

{
  int *piVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  
  iVar2 = fn_82399CB8(*(unsigned int *)(param_1 + 8));
  uVar4 = 0;
  piVar1 = *(int **)(**(int **)(*(int *)(param_1 + 8) + 8) + iVar2 * 4);
  iVar2 = *(int *)(piVar1[4] * 4 + *piVar1);
  if (*(int *)(iVar2 + 8) != 0) {
    do {
      iVar2 = fn_822ABA88(iVar2,uVar4);
      uVar3 = (unsigned __int64)*(unsigned int *)(iVar2 + 0x24);
      if ((((uVar3 != 0) && (*(int *)(*(unsigned int *)(iVar2 + 0x24) + 0x124) != 0)) &&
          (iVar2 = fn_824A5DE0(), iVar2 != 0)) && (iVar2 = fn_824CCFC8(uVar3), iVar2 != 0)
         ) {
        return 1;
      }
      uVar4 = uVar4 + 1;
      iVar2 = *(int *)(piVar1[4] * 4 + *piVar1);
    } while ((uVar4 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar2 + 8));
  }
  return 0;
}

