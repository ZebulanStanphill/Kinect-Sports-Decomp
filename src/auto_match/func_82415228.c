typedef unsigned char bool;
#define true 1
#define false 0


unsigned __int64 fn_82415228(int param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  piVar1 = *(int **)(param_1 + 8);
  if ((piVar1 == (int *)0x0) || (bVar3 = true, piVar1[2] == 0)) {
    bVar3 = false;
  }
  if (bVar3) {
    if ((piVar1 == (int *)0x0) || (bVar3 = true, *piVar1 != 10)) {
      bVar3 = false;
    }
    if (!bVar3) {
      if ((((*(int **)(param_1 + 4) == (int *)0x0) || (iVar2 = **(int **)(param_1 + 4), iVar2 == 10)
           ) || (piVar1 == (int *)0x0)) || (bVar3 = true, *piVar1 + iVar2 != 10)) {
        bVar3 = false;
      }
      if ((!bVar3) && (*(int *)(*(int **)(param_1 + 8))[2] + **(int **)(param_1 + 8) == 10)) {
        return 1;
      }
    }
  }
  return 0;
}

