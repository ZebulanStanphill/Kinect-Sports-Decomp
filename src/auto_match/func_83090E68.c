extern int fn_83095920();


void fn_83090E68(int param_1,unsigned int *param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned short *puVar2;
  unsigned __int64 uVar3;
  unsigned short *puVar4;
  unsigned int *puVar5;
  int *piVar6;
  __int64 lVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  unsigned int *puVar10;
  
  puVar8 = param_3 + 9;
  uVar3 = (unsigned __int64)(unsigned int)param_2[1] + 1 & 0x7fffffff;
  uVar1 = (unsigned int)(uVar3 << 1);
  if (param_3 != (unsigned int *)0x0) {
    *param_3 = (unsigned int)puVar8;
    param_3[1] = 0;
    param_3[2] = uVar1 | 0x80000000;
  }
  puVar10 = param_3 + 3;
  if (puVar10 != (unsigned int *)0x0) {
    param_3[4] = 0;
    param_3[5] = uVar1 | 0x80000000;
    *puVar10 = (int)(uVar3 << 3) + (int)puVar8;
  }
  puVar9 = param_3 + 6;
  if (puVar9 != (unsigned int *)0x0) {
    param_3[7] = 0;
    param_3[8] = uVar1 | 0x80000000;
    *puVar9 = (int)(uVar3 << 4) + (int)puVar8;
  }
  puVar5 = (unsigned int *)(param_3[1] * 4 + *param_3);
  if (puVar5 != (unsigned int *)0x0) {
    *puVar5 = 0;
  }
  param_3[1] = param_3[1] + 1;
  puVar5 = (unsigned int *)(param_3[4] * 4 + *puVar10);
  if (puVar5 != (unsigned int *)0x0) {
    *puVar5 = 0;
  }
  param_3[4] = param_3[4] + 1;
  puVar5 = (unsigned int *)(param_3[7] * 4 + *puVar9);
  if (puVar5 != (unsigned int *)0x0) {
    *puVar5 = 0;
  }
  param_3[7] = param_3[7] + 1;
  uVar3 = (unsigned __int64)(unsigned int)param_2[1];
  piVar6 = (int *)*param_2;
  while (uVar3 = uVar3 - 1, -1 < (__int64)uVar3) {
    puVar4 = (unsigned short *)(param_3[1] * 4 + *param_3);
    puVar2 = (unsigned short *)((unsigned int)*(unsigned short *)(*piVar6 + 8) * 4 + *(int *)(param_1 + 0xac));
    if (puVar4 != (unsigned short *)0x0) {
      *puVar4 = *puVar2;
      puVar4[1] = puVar2[1];
    }
    uVar1 = param_3[1];
    param_3[1] = uVar1 + 1;
    puVar4 = (unsigned short *)((uVar1 + 1) * 4 + *param_3);
    puVar2 = (unsigned short *)((unsigned int)*(unsigned short *)(*piVar6 + 10) * 4 + *(int *)(param_1 + 0xac));
    if (puVar4 != (unsigned short *)0x0) {
      *puVar4 = *puVar2;
      puVar4[1] = puVar2[1];
    }
    param_3[1] = param_3[1] + 1;
    puVar4 = (unsigned short *)(param_3[4] * 4 + *puVar10);
    puVar2 = (unsigned short *)((unsigned int)*(unsigned short *)*piVar6 * 4 + *(int *)(param_1 + 0xb8));
    if (puVar4 != (unsigned short *)0x0) {
      *puVar4 = *puVar2;
      puVar4[1] = puVar2[1];
    }
    uVar1 = param_3[4];
    param_3[4] = uVar1 + 1;
    puVar4 = (unsigned short *)((uVar1 + 1) * 4 + *puVar10);
    puVar2 = (unsigned short *)((unsigned int)*(unsigned short *)(*piVar6 + 4) * 4 + *(int *)(param_1 + 0xb8));
    if (puVar4 != (unsigned short *)0x0) {
      *puVar4 = *puVar2;
      puVar4[1] = puVar2[1];
    }
    param_3[4] = param_3[4] + 1;
    puVar4 = (unsigned short *)(param_3[7] * 4 + *puVar9);
    puVar2 = (unsigned short *)((unsigned int)*(unsigned short *)(*piVar6 + 2) * 4 + *(int *)(param_1 + 0xc4));
    if (puVar4 != (unsigned short *)0x0) {
      *puVar4 = *puVar2;
      puVar4[1] = puVar2[1];
    }
    uVar1 = param_3[7];
    param_3[7] = uVar1 + 1;
    puVar4 = (unsigned short *)((uVar1 + 1) * 4 + *puVar9);
    puVar2 = (unsigned short *)((unsigned int)*(unsigned short *)(*piVar6 + 6) * 4 + *(int *)(param_1 + 0xc4));
    if (puVar4 != (unsigned short *)0x0) {
      *puVar4 = *puVar2;
      puVar4[1] = puVar2[1];
    }
    piVar6 = piVar6 + 1;
    param_3[7] = param_3[7] + 1;
  }
  lVar7 = 3;
  puVar8 = param_3;
  do {
    if (1 < (int)(puVar8[1] - 1)) {
      fn_83095920((unsigned __int64)*puVar8 + 4,0,(unsigned __int64)puVar8[1] - 2,0);
    }
    lVar7 = lVar7 + -1;
    puVar8 = puVar8 + 3;
  } while (lVar7 != 0);
  puVar5 = (unsigned int *)(param_3[1] * 4 + *param_3);
  if (puVar5 != (unsigned int *)0x0) {
    *puVar5 = 0xfffc0000;
  }
  param_3[1] = param_3[1] + 1;
  puVar5 = (unsigned int *)(param_3[4] * 4 + *puVar10);
  if (puVar5 != (unsigned int *)0x0) {
    *puVar5 = 0xfffc0000;
  }
  param_3[4] = param_3[4] + 1;
  puVar5 = (unsigned int *)(param_3[7] * 4 + *puVar9);
  if (puVar5 != (unsigned int *)0x0) {
    *puVar5 = 0xfffc0000;
  }
  param_3[7] = param_3[7] + 1;
  return;
}

