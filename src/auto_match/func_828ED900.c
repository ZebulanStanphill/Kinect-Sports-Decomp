unsigned int fn_828ED900(int param_1,int param_2,int param_3,unsigned char *param_4)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x10) + 4) + param_2 * 0x5c;
  iVar3 = 0;
  iVar1 = *(int *)(iVar4 + 0x50);
  if (0 < iVar1) {
    iVar4 = *(int *)(iVar4 + 0x58);
    iVar5 = 0;
    do {
      if (*(int *)(iVar5 + iVar4) == param_3) {
        iVar4 = iVar3 * 8 + iVar4;
        if (iVar4 != 0) {
          uVar2 = *(unsigned int *)(iVar4 + 4);
          if (param_4 == (unsigned char *)0x0) {
            return uVar2;
          }
          *param_4 = 1;
          return uVar2;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 8;
    } while (iVar3 < iVar1);
  }
  if (param_4 != (unsigned char *)0x0) {
    *param_4 = 0;
  }
  return 0;
}

