extern int fn_822ABA88();
extern int fn_822CEFA0();


unsigned __int64 fn_823737B8(int param_1,int param_2)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned __int64 uVar6;
  
  uVar6 = 0;
  piVar2 = *(int **)(**(int **)(param_1 + 8) + param_2 * 4);
  uVar1 = *(unsigned int *)(*(int *)(piVar2[4] * 4 + *piVar2) + 8);
  if (uVar1 != 0) {
    uVar3 = *(unsigned int *)(piVar2[4] * 4 + *piVar2);
    do {
      uVar4 = fn_822ABA88(uVar3,uVar6);
      iVar5 = fn_822CEFA0();
      if (iVar5 != 0) {
        return uVar4;
      }
      uVar6 = uVar6 + 1;
    } while ((uVar6 & 0xffffffff) < (unsigned __int64)uVar1);
  }
  return 0;
}

