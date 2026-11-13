typedef unsigned char bool;
#define true 1
#define false 0


bool fn_82AE9578(unsigned __int64 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  
  piVar4 = (int *)(param_2 + 4);
  while (iVar1 = *piVar4, iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x10);
    if (iVar2 != 0) {
      if (((*(unsigned char *)(iVar2 + 0x10) & 1) == 0) && (iVar2 != param_3)) {
        if ((*(int *)(iVar2 + 0x1c) == 0) ||
           ((*(int *)(iVar2 + 0x1c) == *(int *)(param_2 + 0x1c) &&
            ((*(unsigned int *)(iVar2 + 8) & 0x3f80) != 0x3800)))) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (bVar3) break;
      }
    }
    piVar4 = (int *)(iVar1 + 8);
  }
  return iVar1 == 0;
}

