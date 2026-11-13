void fn_82D8EE48(unsigned int *param_1,int *param_2,int param_3,__int64 param_4,int *param_5)

{
  unsigned short uVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  
  if (0 < (int)param_4) {
    iVar2 = 0;
    do {
      *(unsigned int *)(iVar2 + *param_5) = 0;
      iVar2 = iVar2 + 4;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  iVar2 = 0;
  if (0 < param_2[1]) {
    iVar3 = 0;
    do {
      uVar1 = *(unsigned short *)(*(int *)(*param_2 + iVar3) + 0xec);
      uVar4 = (unsigned int)uVar1;
      if ((unsigned int)*(unsigned char *)(param_3 + 0x306) == (int)(unsigned int)uVar1 >> 0xe) {
        uVar4 = (int)(unsigned int)uVar1 >> 7;
      }
      uVar1 = *(unsigned short *)(*(int *)(*param_2 + iVar3) + 0xea);
      uVar5 = (unsigned int)uVar1;
      if ((unsigned int)*(unsigned char *)(param_3 + 0x305) == (int)(unsigned int)uVar1 >> 0xe) {
        uVar5 = (int)(unsigned int)uVar1 >> 7;
      }
      uVar6 = uVar4 & 0x7f;
      if ((uVar4 & 0x7f) < (uVar5 & 0x7f)) {
        uVar6 = uVar5 & 0x7f;
      }
      if (uVar6 < 6) {
        *(unsigned int *)(*(int *)(*(int *)*param_1 + iVar3) * 4 + *param_5) = 1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < param_2[1]);
  }
  return;
}

