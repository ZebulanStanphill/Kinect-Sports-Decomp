extern unsigned int lbl_8315D960;


unsigned int fn_82A49C98(short *param_1)

{
  short sVar1;
  unsigned short uVar2;
  unsigned int uVar3;
  unsigned short *puVar4;
  int iVar5;
  
  sVar1 = *param_1;
  uVar3 = 0;
  if (sVar1 == 0x165) {
    iVar5 = 0;
    if ((unsigned short)param_1[4] == 0) {
      return uVar3;
    }
    puVar4 = (unsigned short *)(param_1 + 5);
    do {
      puVar4 = puVar4 + 10;
      iVar5 = iVar5 + 1;
      uVar3 = *puVar4 & 0xff | (unsigned int)(*puVar4 >> 8) | uVar3;
    } while (iVar5 < (int)(unsigned int)(unsigned short)param_1[4]);
    return uVar3;
  }
  if ((sVar1 == 0x166) || (sVar1 == -2)) {
    return *(unsigned int *)(param_1 + 10);
  }
  uVar2 = param_1[1];
  if (uVar2 == 1) {
    return 4;
  }
  if (uVar2 == 2) {
    return 3;
  }
  if (uVar2 == 0) {
    return 0;
  }
  if (8 < uVar2) {
    return 0;
  }
  return *(unsigned int *)(&lbl_8315D960 + (unsigned int)uVar2 * 4);
}

