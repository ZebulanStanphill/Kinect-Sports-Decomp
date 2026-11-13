extern unsigned int uStack_464;
extern unsigned int uStack_864;


void fn_83082E08(__int64 param_1,int param_2,__int64 param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  unsigned int *puVar11;
  int iVar12;
  int iVar13;
  unsigned int *puVar15;
  __int64 lVar14;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  __int64 lVar20;
  int aiStack_1060 [256];
  int aiStack_c60 [255];
  unsigned int uStack_864;
  int aiStack_860 [255];
  unsigned int uStack_464;
  int aiStack_460 [280];
  
  puVar15 = &uStack_864;
  lVar20 = 0x40;
  iVar17 = 0;
  do {
    puVar15[1] = 0;
    puVar15[2] = 0;
    puVar15[3] = 0;
    puVar15 = puVar15 + 4;
    *puVar15 = 0;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  puVar15 = &uStack_464;
  lVar20 = 0x40;
  do {
    puVar15[1] = 0;
    puVar15[2] = 0;
    puVar15[3] = 0;
    puVar15 = puVar15 + 4;
    *puVar15 = 0;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  if (0 < param_2) {
    lVar14 = param_1 + 0x400;
    lVar20 = (unsigned __int64)(param_2 - 1U >> 2) + 1;
    do {
      iVar13 = (int)lVar14;
      bVar1 = *(unsigned char *)(iVar13 + -0x400);
      iVar18 = aiStack_460[bVar1];
      aiStack_860[*(unsigned char *)(iVar13 + -0x3ff)] = aiStack_860[*(unsigned char *)(iVar13 + -0x3ff)] + 1;
      aiStack_460[bVar1] = iVar18 + 1;
      dataCacheBlockTouch(lVar14);
      bVar1 = *(unsigned char *)(iVar13 + -0x3fc);
      iVar18 = aiStack_460[bVar1];
      aiStack_860[*(unsigned char *)(iVar13 + -0x3fb)] = aiStack_860[*(unsigned char *)(iVar13 + -0x3fb)] + 1;
      aiStack_460[bVar1] = iVar18 + 1;
      dataCacheBlockTouch(lVar14 + (param_3 - param_1));
      bVar1 = *(unsigned char *)(iVar13 + -0x3f3);
      bVar2 = *(unsigned char *)(iVar13 + -0x3f4);
      bVar3 = *(unsigned char *)(iVar13 + -0x3f7);
      lVar14 = lVar14 + 0x10;
      iVar18 = aiStack_860[bVar3];
      aiStack_460[*(unsigned char *)(iVar13 + -0x3f8)] = aiStack_460[*(unsigned char *)(iVar13 + -0x3f8)] + 1;
      iVar13 = aiStack_460[bVar2];
      aiStack_860[bVar3] = iVar18 + 1;
      aiStack_860[bVar1] = aiStack_860[bVar1] + 1;
      aiStack_460[bVar2] = iVar13 + 1;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
  }
  aiStack_c60[0] = (int)param_3;
  aiStack_1060[0] = (int)param_1;
  lVar20 = 0x33;
  do {
    iVar18 = *(int *)((int)aiStack_460 + iVar17);
    iVar13 = *(int *)((int)aiStack_1060 + iVar17);
    iVar16 = *(int *)((int)aiStack_860 + iVar17) * 4 + *(int *)((int)aiStack_c60 + iVar17);
    *(int *)((int)aiStack_c60 + iVar17 + 4) = iVar16;
    iVar13 = iVar18 * 4 + iVar13;
    iVar18 = *(int *)((int)aiStack_860 + iVar17 + 0xc);
    iVar16 = *(int *)((int)aiStack_860 + iVar17 + 4) * 4 + iVar16;
    iVar12 = *(int *)((int)aiStack_460 + iVar17 + 4) * 4 + iVar13;
    iVar8 = *(int *)((int)aiStack_860 + iVar17 + 0x10);
    iVar19 = *(int *)((int)aiStack_460 + iVar17 + 8);
    *(int *)((int)aiStack_c60 + iVar17 + 8) = iVar16;
    iVar9 = *(int *)((int)aiStack_460 + iVar17 + 0xc);
    iVar16 = *(int *)((int)aiStack_860 + iVar17 + 8) * 4 + iVar16;
    iVar10 = *(int *)((int)aiStack_460 + iVar17 + 0x10);
    *(int *)((int)aiStack_1060 + iVar17 + 4) = iVar13;
    iVar13 = iVar19 * 4 + iVar12;
    *(int *)((int)aiStack_1060 + iVar17 + 8) = iVar12;
    iVar19 = iVar18 * 4 + iVar16;
    *(int *)((int)aiStack_c60 + iVar17 + 0xc) = iVar16;
    iVar18 = iVar9 * 4 + iVar13;
    *(int *)((int)aiStack_1060 + iVar17 + 0xc) = iVar13;
    *(int *)((int)aiStack_c60 + iVar17 + 0x10) = iVar19;
    *(int *)((int)aiStack_1060 + iVar17 + 0x10) = iVar18;
    *(int *)((int)aiStack_c60 + iVar17 + 0x14) = iVar8 * 4 + iVar19;
    *(int *)((int)aiStack_1060 + iVar17 + 0x14) = iVar10 * 4 + iVar18;
    iVar17 = iVar17 + 0x14;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  if (0 < param_2) {
    param_1 = param_1 + -4;
    lVar20 = (unsigned __int64)(param_2 - 1U >> 2) + 1;
    do {
      iVar17 = (int)param_1;
      bVar1 = *(unsigned char *)(iVar17 + 9);
      bVar2 = *(unsigned char *)(iVar17 + 0x11);
      bVar3 = *(unsigned char *)(iVar17 + 0xd);
      uVar4 = *(unsigned int *)(iVar17 + 4);
      uVar5 = *(unsigned int *)(iVar17 + 8);
      uVar6 = *(unsigned int *)(iVar17 + 0xc);
      puVar15 = (unsigned int *)aiStack_c60[*(unsigned char *)(iVar17 + 5)];
      param_1 = param_1 + 0x10;
      uVar7 = *(unsigned int *)param_1;
      aiStack_c60[*(unsigned char *)(iVar17 + 5)] = (int)(puVar15 + 1);
      puVar11 = (unsigned int *)aiStack_c60[bVar1];
      *puVar15 = uVar4;
      aiStack_c60[bVar1] = (int)(puVar11 + 1);
      puVar15 = (unsigned int *)aiStack_c60[bVar3];
      *puVar11 = uVar5;
      *puVar15 = uVar6;
      aiStack_c60[bVar3] = (int)(puVar15 + 1);
      puVar15 = (unsigned int *)aiStack_c60[bVar2];
      aiStack_c60[bVar2] = (int)(puVar15 + 1);
      *puVar15 = uVar7;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    if (0 < param_2) {
      param_3 = param_3 + -4;
      lVar20 = (unsigned __int64)(param_2 - 1U >> 2) + 1;
      do {
        iVar17 = (int)param_3;
        bVar1 = *(unsigned char *)(iVar17 + 8);
        bVar2 = *(unsigned char *)(iVar17 + 0x10);
        bVar3 = *(unsigned char *)(iVar17 + 0xc);
        uVar4 = *(unsigned int *)(iVar17 + 4);
        uVar5 = *(unsigned int *)(iVar17 + 8);
        uVar6 = *(unsigned int *)(iVar17 + 0xc);
        puVar15 = (unsigned int *)aiStack_1060[*(unsigned char *)(iVar17 + 4)];
        param_3 = param_3 + 0x10;
        uVar7 = *(unsigned int *)param_3;
        aiStack_1060[*(unsigned char *)(iVar17 + 4)] = (int)(puVar15 + 1);
        puVar11 = (unsigned int *)aiStack_1060[bVar1];
        aiStack_1060[bVar1] = (int)(puVar11 + 1);
        *puVar15 = uVar4;
        puVar15 = (unsigned int *)aiStack_1060[bVar3];
        *puVar11 = uVar5;
        *puVar15 = uVar6;
        aiStack_1060[bVar3] = (int)(puVar15 + 1);
        puVar15 = (unsigned int *)aiStack_1060[bVar2];
        aiStack_1060[bVar2] = (int)(puVar15 + 1);
        *puVar15 = uVar7;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
    }
  }
  return;
}

