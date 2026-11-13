typedef unsigned char bool;
#define true 1
#define false 0


unsigned __int64 fn_8272D8D8(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  unsigned int uVar6;
  
  iVar1 = *(int *)(param_1 + 0xd0);
  if (iVar1 != 0) {
    uVar6 = 0;
    if (*(unsigned int *)(iVar1 + 8) != 0) {
      iVar4 = 0;
      do {
        piVar5 = (int *)(*(int *)(iVar1 + 4) + iVar4);
        iVar2 = *piVar5;
        if ((*param_3 + param_3[1] + -1 < iVar2) ||
           (bVar3 = true, piVar5[1] + iVar2 + -1 < *param_3)) {
          bVar3 = false;
        }
        if ((bVar3) && (*(int *)((param_2 + 2) * 8 + iVar1) != uVar6 + 1)) {
          return 0;
        }
        uVar6 = uVar6 + 1;
        iVar4 = iVar4 + 0x14;
      } while (uVar6 < *(unsigned int *)(iVar1 + 8));
    }
  }
  return 1;
}

