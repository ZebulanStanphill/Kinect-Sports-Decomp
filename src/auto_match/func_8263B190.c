void fn_8263B190(int param_1,int *param_2,int *param_3,int *param_4)

{
  unsigned int uVar1;
  int iVar2;
  
  iVar2 = (*(unsigned int *)(param_1 + 0xc) >> 0x1e & 2) + 1;
  uVar1 = *(unsigned int *)(param_1 + 0x14) >> 9 & 3;
  if (uVar1 == 0) {
    *param_2 = (*(unsigned int *)(param_1 + 8) & 0xffffff) + iVar2;
    *param_3 = 1;
    *param_4 = 1;
    return;
  }
  if (uVar1 == 2) {
    *param_2 = (*(unsigned int *)(param_1 + 8) & 0x7ff) + iVar2;
    *param_3 = (*(unsigned int *)(param_1 + 8) >> 0xb & 0x7ff) + iVar2;
    iVar2 = (*(unsigned int *)(param_1 + 8) >> 0x16) + iVar2;
  }
  else {
    *param_2 = (*(unsigned int *)(param_1 + 8) & 0x1fff) + iVar2;
    *param_3 = (*(unsigned int *)(param_1 + 8) >> 0xd & 0x1fff) + iVar2;
    iVar2 = (*(unsigned int *)(param_1 + 8) >> 0x1a) + 1;
  }
  *param_4 = iVar2;
  return;
}

