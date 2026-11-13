typedef unsigned char bool;
#define true 1
#define false 0


void fn_824601C0(int param_1,unsigned int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  unsigned int uVar5;
  
  if ((*(int *)(param_1 + 0x70) != 0) || (bVar4 = false, *(int *)(param_1 + 0x80) != 0)) {
    bVar4 = true;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 0x9c);
  *param_2 = 0;
  if (*(int *)(iVar1 + 4) == 0) {
    iVar1 = *(int *)(param_1 + 0x68);
    iVar3 = (iVar1 + 7) * 0x10;
    if (*(int *)(iVar3 + param_1) != 0) {
      return;
    }
    if (bVar4) {
      if (iVar1 == 0) {
        *param_2 = *(unsigned int *)(iVar2 + 0x18);
      }
      else {
        *param_2 = *(unsigned int *)(iVar2 + 0x1c);
      }
    }
    else {
      if (iVar1 == 0) {
        uVar5 = *(unsigned int *)(iVar2 + 0x10);
      }
      else {
        uVar5 = *(unsigned int *)(iVar2 + 0x14);
      }
      *param_2 = uVar5;
    }
    *(unsigned int *)(iVar3 + param_1) = 1;
    return;
  }
  *param_2 = *(unsigned int *)(iVar2 + 0xc);
  return;
}

