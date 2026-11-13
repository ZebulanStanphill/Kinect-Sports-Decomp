void fn_82D8EF28(unsigned int *param_1,int *param_2,int *param_3,int *param_4,unsigned char *param_5)

{
  unsigned short uVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = 0;
  if (0 < param_2[1]) {
    iVar8 = 0;
    do {
      iVar2 = *(int *)(*param_2 + iVar8);
      uVar1 = *(unsigned short *)(iVar2 + 0xec);
      uVar4 = (unsigned int)uVar1;
      iVar3 = *(int *)(*(int *)*param_1 + iVar8);
      if ((unsigned int)param_5[1] == (int)(unsigned int)uVar1 >> 0xe) {
        uVar4 = (int)(unsigned int)uVar1 >> 7;
      }
      uVar1 = *(unsigned short *)(iVar2 + 0xea);
      uVar5 = (unsigned int)uVar1;
      if ((unsigned int)*param_5 == (int)(unsigned int)uVar1 >> 0xe) {
        uVar5 = (int)(unsigned int)uVar1 >> 7;
      }
      uVar6 = uVar4 & 0x7f;
      if ((uVar4 & 0x7f) < (uVar5 & 0x7f)) {
        uVar6 = uVar5 & 0x7f;
      }
      if (uVar6 < 6) {
        *(unsigned int *)(iVar3 * 4 + *param_3) = 1;
      }
      uVar4 = (unsigned int)*(unsigned short *)(iVar2 + 0xb0);
      if (*(unsigned short *)(iVar2 + 0xb0) == 0) {
        uVar4 = 1;
      }
      iVar3 = iVar3 * 4;
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 4;
      *(unsigned int *)(iVar3 + *param_4) = *(int *)(iVar3 + *param_4) + uVar4;
    } while (iVar7 < param_2[1]);
  }
  return;
}

