extern int fn_830250C0();


void fn_83036648(int *param_1,unsigned int param_2,int param_3,unsigned int *param_4,unsigned int *param_5)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  
  uVar5 = 0;
  *param_4 = 0;
  *param_5 = 0;
  if ((param_2 & 0xff) < (unsigned int)*(unsigned char *)(param_1 + 3)) {
    uVar3 = (unsigned int)*(unsigned char *)((int)param_1 + 0xd);
    if (uVar3 != 0) {
      iVar4 = 0;
      iVar2 = *param_1;
      do {
        if (*(int *)(iVar2 + 8) == param_3) break;
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0x10;
        iVar2 = iVar4 + *param_1;
      } while (uVar5 < uVar3);
    }
    if (uVar5 != uVar3) {
      iVar2 = *param_1;
      iVar1 = ((unsigned int)*(unsigned char *)((int)param_1 + 0xd) * (param_2 & 0xff) + uVar5) * 0x10;
      iVar4 = *(int *)(iVar1 + iVar2);
      if (iVar4 != 0) {
        fn_830250C0(iVar4,param_4);
      }
      iVar2 = *(int *)(iVar1 + iVar2 + 4);
      if (iVar2 != 0) {
        fn_830250C0(iVar2,param_5);
      }
    }
  }
  return;
}

