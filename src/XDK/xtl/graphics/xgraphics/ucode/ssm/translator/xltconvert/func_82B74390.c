extern int fn_82B6EA60();


unsigned int * fn_82B74390(int param_1,unsigned short *param_2,unsigned int *param_3)

{
  int iVar1;
  unsigned short uVar2;
  unsigned short uVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  uVar3 = fn_82B6EA60();
  uVar2 = *param_2 & 7;
  if (uVar2 < 4) {
    *(unsigned short *)((int)param_3 + 2) = 0x56;
    *param_3 = (unsigned int)uVar2 << 0x10 | *param_3 & 0xe000ffff;
    *(unsigned short *)((int)param_3 + 6) = uVar3;
    param_3[1] = param_3[1] & 0xff00ffff | 0x40000;
    param_3[2] = *(unsigned int *)(param_2 + 8);
    puVar4 = param_3 + 3;
    if ((*(unsigned int *)(param_2 + 8) & 0x400000) != 0) {
      *puVar4 = *(unsigned int *)(param_2 + 0xe);
      puVar4 = param_3 + 4;
    }
    if ((*(unsigned int *)(param_2 + 8) & 0x800000) != 0) {
      *puVar4 = *(unsigned int *)(param_2 + 0x14);
      puVar4 = puVar4 + 1;
    }
    param_3 = puVar4 + 1;
    *puVar4 = *(unsigned int *)(param_2 + 10);
    if ((*(unsigned int *)(param_2 + 10) & 0x400000) != 0) {
      *param_3 = *(unsigned int *)(param_2 + 0x10);
      param_3 = puVar4 + 2;
    }
    if ((*(unsigned int *)(param_2 + 10) & 0x800000) == 0) goto LAB_82b74528;
    uVar5 = *(unsigned int *)(param_2 + 0x16);
  }
  else {
    if (5 < uVar2) goto LAB_82b74528;
    if (uVar2 == 4) {
      *(unsigned short *)((int)param_3 + 2) = 0x56;
      *param_3 = *param_3 & 0xe000ffff | 0x20000;
    }
    else {
      *(unsigned short *)((int)param_3 + 2) = 0x56;
      *param_3 = *param_3 & 0xe000ffff | 0x30000;
    }
    *(unsigned short *)((int)param_3 + 6) = uVar3;
    param_3[1] = param_3[1] & 0xff00ffff | 0x40000;
    param_3[2] = *(unsigned int *)(param_2 + 10);
    puVar4 = param_3 + 3;
    if ((*(unsigned int *)(param_2 + 10) & 0x400000) != 0) {
      *puVar4 = *(unsigned int *)(param_2 + 0x10);
      puVar4 = param_3 + 4;
    }
    if ((*(unsigned int *)(param_2 + 10) & 0x800000) != 0) {
      *puVar4 = *(unsigned int *)(param_2 + 0x16);
      puVar4 = puVar4 + 1;
    }
    param_3 = puVar4 + 1;
    *puVar4 = *(unsigned int *)(param_2 + 8);
    if ((*(unsigned int *)(param_2 + 8) & 0x400000) != 0) {
      *param_3 = *(unsigned int *)(param_2 + 0xe);
      param_3 = puVar4 + 2;
    }
    if ((*(unsigned int *)(param_2 + 8) & 0x800000) == 0) goto LAB_82b74528;
    uVar5 = *(unsigned int *)(param_2 + 0x14);
  }
  *param_3 = uVar5;
  param_3 = param_3 + 1;
LAB_82b74528:
  *(unsigned short *)((int)param_3 + 2) = 0x6c;
  *param_3 = *param_3 & 0xe000ffff;
  *(short *)((int)param_3 + 6) = (short)*(unsigned int *)(iVar1 + 0x5b40);
  param_3[1] = param_3[1] & 0xff00ffff | 0x40000;
  *(short *)((int)param_3 + 10) = (short)*(unsigned int *)(iVar1 + 0x5b40);
  param_3[2] = param_3[2] & 0xff00ffff | 0x40000;
  *(unsigned short *)((int)param_3 + 0xe) = uVar3;
  param_3[3] = param_3[3] & 0xff00ffff | 0x40000;
  *(unsigned short *)((int)param_3 + 0x12) = 0x70;
  param_3[4] = param_3[4] & 0xe000ffff;
  *(short *)((int)param_3 + 0x16) = (short)*(unsigned int *)(iVar1 + 0x5b40);
  param_3[5] = param_3[5] & 0xff00ffff | 0x40000;
  *(short *)((int)param_3 + 0x1a) = (short)*(unsigned int *)(iVar1 + 0x5b40);
  param_3[6] = param_3[6] & 0xff00ffff | 0x40000;
  *(unsigned short *)((int)param_3 + 0x1e) = 0x6f;
  param_3[7] = param_3[7] & 0xe000ffff;
  *(short *)((int)param_3 + 0x22) = (short)*(unsigned int *)(iVar1 + 0x5b40);
  param_3[8] = param_3[8] & 0xff00ffff | 0x40000;
  *(short *)((int)param_3 + 0x26) = (short)*(unsigned int *)(iVar1 + 0x5b40);
  param_3[9] = param_3[9] & 0xff00ffff | 0x40000;
  return param_3 + 10;
}

