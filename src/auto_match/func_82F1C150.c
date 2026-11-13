void fn_82F1C150(int param_1,int param_2,int param_3,int param_4,short *param_5,short *param_6,
                  unsigned int *param_7,int param_8)

{
  short sVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  short sVar5;
  unsigned short *puVar6;
  short *psVar7;
  unsigned short *puVar8;
  unsigned char *puVar9;
  __int64 lVar10;
  __int64 lVar11;
  int in_stack_00000054;
  
  uVar2 = *param_7;
  lVar10 = 0x3f;
  uVar3 = param_7[1];
  *param_5 = (short)param_7[10] * *param_6;
  psVar7 = param_5;
  do {
    psVar7 = psVar7 + 1;
    sVar1 = *(short *)(((int)param_6 - (int)param_5) + (int)psVar7);
    if (sVar1 == 0) {
      *psVar7 = 0;
    }
    else {
      sVar5 = (short)uVar3;
      if (sVar1 < 1) {
        sVar5 = -(short)uVar3;
      }
      *psVar7 = sVar1 * (short)uVar2 + sVar5;
    }
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  (**(int (***)())(param_1 + 0x1f98))(param_4,param_5,8,0xff);
  if (param_8 != 0) {
    puVar8 = (unsigned short *)(param_4 + -2);
    puVar6 = (unsigned short *)(param_8 + -2);
    lVar10 = 8;
    do {
      puVar8 = puVar8 + 1;
      puVar6 = puVar6 + 1;
      *puVar6 = *puVar8;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    puVar8 = (unsigned short *)(param_4 + 0xe);
    lVar10 = 8;
    puVar6 = (unsigned short *)(in_stack_00000054 * 2 + param_8 + -2);
    do {
      puVar8 = puVar8 + 1;
      puVar6 = puVar6 + 1;
      *puVar6 = *puVar8;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    puVar8 = (unsigned short *)(param_4 + 0x1e);
    puVar6 = (unsigned short *)(in_stack_00000054 * 4 + param_8 + -2);
    lVar10 = 8;
    do {
      puVar8 = puVar8 + 1;
      puVar6 = puVar6 + 1;
      *puVar6 = *puVar8;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    puVar8 = (unsigned short *)(param_4 + 0x2e);
    lVar10 = 8;
    puVar6 = (unsigned short *)(in_stack_00000054 * 6 + param_8 + -2);
    do {
      puVar8 = puVar8 + 1;
      puVar6 = puVar6 + 1;
      *puVar6 = *puVar8;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    puVar8 = (unsigned short *)(param_4 + 0x3e);
    puVar6 = (unsigned short *)(in_stack_00000054 * 8 + param_8 + -2);
    lVar10 = 8;
    do {
      puVar8 = puVar8 + 1;
      puVar6 = puVar6 + 1;
      *puVar6 = *puVar8;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    puVar8 = (unsigned short *)(param_4 + 0x4e);
    lVar10 = 8;
    puVar6 = (unsigned short *)(in_stack_00000054 * 10 + param_8 + -2);
    do {
      puVar8 = puVar8 + 1;
      puVar6 = puVar6 + 1;
      *puVar6 = *puVar8;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    puVar8 = (unsigned short *)(param_4 + 0x5e);
    lVar10 = 8;
    puVar6 = (unsigned short *)(in_stack_00000054 * 0xc + param_8 + -2);
    do {
      puVar8 = puVar8 + 1;
      puVar6 = puVar6 + 1;
      *puVar6 = *puVar8;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    puVar8 = (unsigned short *)(param_4 + 0x6e);
    puVar6 = (unsigned short *)(in_stack_00000054 * 0xe + param_8 + -2);
    lVar10 = 8;
    do {
      puVar8 = puVar8 + 1;
      puVar6 = puVar6 + 1;
      *puVar6 = *puVar8;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  if ((*(int *)(param_1 + 0xaf0) == 0) || (*(int *)(param_1 + 0xaf0) == 4)) {
    lVar10 = 8;
    iVar4 = param_2;
    do {
      puVar9 = (unsigned char *)(iVar4 + -1);
      lVar11 = 8;
      do {
        puVar9 = puVar9 + 1;
        *puVar9 = 0x80;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      lVar10 = lVar10 + -1;
      iVar4 = iVar4 + param_3;
    } while (lVar10 != 0);
  }
  (**(int (***)())(param_1 + 0x1fb4))(param_1,param_2,param_4,param_3,8);
  return;
}

