void fn_8308B0C0(int param_1,unsigned int param_2)

{
  unsigned short uVar1;
  int iVar2;
  short sVar3;
  unsigned short *puVar4;
  short *psVar5;
  unsigned int uVar6;
  unsigned short uVar7;
  unsigned short uVar8;
  short *psVar9;
  
  iVar2 = *(int *)(param_1 + 0xa0);
  puVar4 = (unsigned short *)(param_2 * 0x10 + iVar2);
  uVar6 = (unsigned int)puVar4[4];
  psVar9 = (short *)(uVar6 * 4 + *(int *)(param_1 + 0xac));
  psVar5 = psVar9 + -2;
  uVar8 = puVar4[4];
  if (*psVar9 == psVar9[-2]) {
    do {
      uVar7 = (unsigned short)uVar6;
      uVar1 = psVar5[1];
      uVar8 = uVar7;
      if (uVar1 <= param_2) break;
      uVar6 = uVar6 - 1;
      uVar8 = (unsigned short)uVar6;
      *(unsigned int *)psVar9 = *(unsigned int *)psVar5;
      *(unsigned short *)((unsigned int)uVar1 * 0x10 + iVar2 + 8) = uVar7;
      psVar9 = psVar9 + -2;
      psVar5 = psVar5 + -2;
    } while (*psVar9 == *psVar5);
  }
  sVar3 = (short)param_2;
  psVar9[1] = sVar3;
  puVar4[4] = uVar8;
  uVar6 = (unsigned int)puVar4[5];
  psVar9 = (short *)(uVar6 * 4 + *(int *)(param_1 + 0xac));
  psVar5 = psVar9 + -2;
  uVar8 = puVar4[5];
  if (*psVar9 == psVar9[-2]) {
    do {
      uVar7 = (unsigned short)uVar6;
      uVar1 = psVar5[1];
      uVar8 = uVar7;
      if (uVar1 <= param_2) break;
      uVar6 = uVar6 - 1;
      uVar8 = (unsigned short)uVar6;
      *(unsigned int *)psVar9 = *(unsigned int *)psVar5;
      *(unsigned short *)((unsigned int)uVar1 * 0x10 + iVar2 + 10) = uVar7;
      psVar9 = psVar9 + -2;
      psVar5 = psVar5 + -2;
    } while (*psVar9 == *psVar5);
  }
  psVar9[1] = sVar3;
  puVar4[5] = uVar8;
  uVar6 = (unsigned int)*puVar4;
  psVar5 = (short *)(uVar6 * 4 + *(int *)(param_1 + 0xb8));
  psVar9 = psVar5 + -2;
  uVar8 = *puVar4;
  if (*psVar5 == psVar5[-2]) {
    do {
      uVar7 = (unsigned short)uVar6;
      uVar1 = psVar9[1];
      uVar8 = uVar7;
      if (uVar1 <= param_2) break;
      uVar6 = uVar6 - 1;
      uVar8 = (unsigned short)uVar6;
      *(unsigned int *)psVar5 = *(unsigned int *)psVar9;
      *(unsigned short *)((unsigned int)uVar1 * 0x10 + iVar2) = uVar7;
      psVar9 = psVar9 + -2;
      psVar5 = psVar5 + -2;
    } while (*psVar5 == *psVar9);
  }
  psVar5[1] = sVar3;
  *puVar4 = uVar8;
  uVar6 = (unsigned int)puVar4[2];
  psVar5 = (short *)(uVar6 * 4 + *(int *)(param_1 + 0xb8));
  psVar9 = psVar5 + -2;
  uVar8 = puVar4[2];
  if (*psVar5 == psVar5[-2]) {
    do {
      uVar7 = (unsigned short)uVar6;
      uVar1 = psVar9[1];
      uVar8 = uVar7;
      if (uVar1 <= param_2) break;
      uVar6 = uVar6 - 1;
      uVar8 = (unsigned short)uVar6;
      *(unsigned int *)psVar5 = *(unsigned int *)psVar9;
      *(unsigned short *)((unsigned int)uVar1 * 0x10 + iVar2 + 4) = uVar7;
      psVar9 = psVar9 + -2;
      psVar5 = psVar5 + -2;
    } while (*psVar5 == *psVar9);
  }
  psVar5[1] = sVar3;
  puVar4[2] = uVar8;
  uVar6 = (unsigned int)puVar4[1];
  psVar5 = (short *)(uVar6 * 4 + *(int *)(param_1 + 0xc4));
  psVar9 = psVar5 + -2;
  uVar8 = puVar4[1];
  if (*psVar5 == psVar5[-2]) {
    do {
      uVar7 = (unsigned short)uVar6;
      uVar1 = psVar9[1];
      uVar8 = uVar7;
      if (uVar1 <= param_2) break;
      uVar6 = uVar6 - 1;
      uVar8 = (unsigned short)uVar6;
      *(unsigned int *)psVar5 = *(unsigned int *)psVar9;
      *(unsigned short *)((unsigned int)uVar1 * 0x10 + iVar2 + 2) = uVar7;
      psVar9 = psVar9 + -2;
      psVar5 = psVar5 + -2;
    } while (*psVar5 == *psVar9);
  }
  psVar5[1] = sVar3;
  puVar4[1] = uVar8;
  uVar6 = (unsigned int)puVar4[3];
  psVar5 = (short *)(uVar6 * 4 + *(int *)(param_1 + 0xc4));
  psVar9 = psVar5 + -2;
  uVar8 = puVar4[3];
  if (*psVar5 == psVar5[-2]) {
    do {
      uVar7 = (unsigned short)uVar6;
      uVar1 = psVar9[1];
      uVar8 = uVar7;
      if (uVar1 <= param_2) break;
      uVar6 = uVar6 - 1;
      uVar8 = (unsigned short)uVar6;
      *(unsigned int *)psVar5 = *(unsigned int *)psVar9;
      *(unsigned short *)((unsigned int)uVar1 * 0x10 + iVar2 + 6) = uVar7;
      psVar9 = psVar9 + -2;
      psVar5 = psVar5 + -2;
    } while (*psVar5 == *psVar9);
  }
  psVar5[1] = sVar3;
  puVar4[3] = uVar8;
  return;
}

