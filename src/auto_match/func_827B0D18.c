#define true 1
extern unsigned int *auStack_1b0;


void fn_827B0D18(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int (**param_4)())

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  char cVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  unsigned __int64 *puVar9;
  unsigned __int64 *puVar10;
  unsigned int *puVar11;
  __int64 lVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  unsigned int uVar15;
  unsigned __int64 uVar16;
  unsigned int uVar17;
  __int64 lVar18;
  __int64 lVar19;
  unsigned int auStack_1b0 [108];
  
  if ((param_3 - param_2 & 0xffffffff) < 2) {
    return;
  }
  puVar11 = auStack_1b0;
  do {
    while( true ) {
      uVar5 = (unsigned int)param_2;
      uVar4 = (unsigned int)param_3;
      uVar8 = uVar4 - uVar5;
      uVar14 = param_2 + 1;
      if ((int)uVar8 < 10) break;
      uVar2 = (unsigned int)((param_2 & 0xffffffff) >> 4) & 0xffffffc;
      lVar19 = (param_2 & 0x3f) * 8;
      uVar15 = ((int)uVar8 >> 1) + (unsigned int)((int)uVar8 < 0 && (uVar8 & 1) != 0) + uVar5;
      uVar16 = param_3 - 1;
      iVar1 = *(int *)(uVar2 + *(int *)(param_1 + 0xc));
      uVar8 = (unsigned int)((uVar14 & 0xffffffff) >> 4) & 0xffffffc;
      uVar13 = (uVar16 & 0xffffffff) >> 4 & 0xffffffc;
      lVar18 = (uVar14 & 0x3f) * 8;
      lVar12 = (uVar16 & 0x3f) * 8;
      iVar3 = (int)lVar19;
      uVar7 = *(unsigned __int64 *)(iVar1 + iVar3);
      puVar9 = (unsigned __int64 *)
               (*(int *)((uVar15 >> 4 & 0xffffffc) + *(int *)(param_1 + 0xc)) + (uVar15 & 0x3f) * 8)
      ;
      *(unsigned int *)(iVar1 + iVar3) = *(unsigned int *)puVar9;
      *(unsigned int *)(iVar1 + iVar3 + 4) = *(unsigned int *)((int)puVar9 + 4);
      *puVar9 = uVar7;
      iVar1 = (int)uVar13;
      cVar6 = (*param_4)((unsigned __int64)*(unsigned int *)(iVar1 + *(int *)(param_1 + 0xc)) + lVar12,
                         (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0xc) + uVar8) + lVar18);
      if (cVar6 != '\0') {
        puVar10 = (unsigned __int64 *)(*(int *)(*(int *)(param_1 + 0xc) + uVar8) + (int)lVar18);
        puVar9 = (unsigned __int64 *)(*(int *)(*(int *)(param_1 + 0xc) + iVar1) + (int)lVar12);
        uVar7 = *puVar9;
        *(unsigned int *)puVar9 = *(unsigned int *)puVar10;
        *(unsigned int *)((int)puVar9 + 4) = *(unsigned int *)((int)puVar10 + 4);
        *puVar10 = uVar7;
      }
      cVar6 = (*param_4)((unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0xc) + uVar2) + lVar19,
                         (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0xc) + uVar8) + lVar18);
      if (cVar6 != '\0') {
        puVar10 = (unsigned __int64 *)(*(int *)(*(int *)(param_1 + 0xc) + uVar8) + (int)lVar18);
        puVar9 = (unsigned __int64 *)(*(int *)(*(int *)(param_1 + 0xc) + uVar2) + iVar3);
        uVar7 = *puVar9;
        *(unsigned int *)puVar9 = *(unsigned int *)puVar10;
        *(unsigned int *)((int)puVar9 + 4) = *(unsigned int *)((int)puVar10 + 4);
        *puVar10 = uVar7;
      }
      cVar6 = (*param_4)((unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0xc) + iVar1) + lVar12,
                         (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0xc) + uVar2) + lVar19);
      if (cVar6 == '\0') goto LAB_827b0ea0;
      iVar1 = *(int *)(param_1 + 0xc);
      lVar18 = (unsigned __int64)*(unsigned int *)(iVar1 + uVar2) + lVar19;
      while( true ) {
        puVar10 = (unsigned __int64 *)lVar18;
        puVar9 = (unsigned __int64 *)(*(int *)(iVar1 + (int)uVar13) + (int)lVar12);
        uVar7 = *puVar9;
        *(unsigned int *)puVar9 = *(unsigned int *)puVar10;
        *(unsigned int *)((int)puVar9 + 4) = *(unsigned int *)((int)puVar10 + 4);
        *puVar10 = uVar7;
LAB_827b0ea0:
        do {
          uVar14 = uVar14 + 1;
          uVar13 = (uVar14 & 0xffffffff) >> 4 & 0xffffffc;
          lVar12 = (uVar14 & 0x3f) * 8;
          cVar6 = (*param_4)((unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0xc) + (int)uVar13) + lVar12,
                             (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0xc) + uVar2) + lVar19);
        } while (cVar6 != '\0');
        do {
          uVar16 = uVar16 - 1;
          uVar8 = (unsigned int)((uVar16 & 0xffffffff) >> 4) & 0xffffffc;
          lVar18 = (uVar16 & 0x3f) * 8;
          cVar6 = (*param_4)((unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0xc) + uVar2) + lVar19,
                             (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0xc) + uVar8) + lVar18);
        } while (cVar6 != '\0');
        iVar1 = *(int *)(param_1 + 0xc);
        uVar17 = (unsigned int)uVar16;
        uVar15 = (unsigned int)uVar14;
        if ((int)uVar17 < (int)uVar15) break;
        lVar18 = (unsigned __int64)*(unsigned int *)(iVar1 + uVar8) + lVar18;
      }
      puVar10 = (unsigned __int64 *)(*(int *)(iVar1 + uVar8) + (int)lVar18);
      puVar9 = (unsigned __int64 *)(*(int *)(iVar1 + uVar2) + iVar3);
      uVar7 = *puVar9;
      *(unsigned int *)puVar9 = *(unsigned int *)puVar10;
      *(unsigned int *)((int)puVar9 + 4) = *(unsigned int *)((int)puVar10 + 4);
      *puVar10 = uVar7;
      if ((int)(uVar4 - uVar15) < (int)(uVar17 - uVar5)) {
        *puVar11 = uVar5;
        puVar11[1] = uVar17;
        uVar16 = param_3;
        param_2 = uVar14;
      }
      else {
        puVar11[1] = uVar4;
        *puVar11 = uVar15;
      }
      param_3 = uVar16;
      puVar11 = puVar11 + 2;
    }
    while (uVar16 = uVar14, (int)uVar16 < (int)uVar4) {
      while( true ) {
        uVar8 = (unsigned int)((param_2 & 0xffffffff) >> 4) & 0xffffffc;
        uVar2 = (unsigned int)((param_2 + 1 & 0xffffffff) >> 4) & 0xffffffc;
        lVar12 = (param_2 + 1 & 0x3f) * 8;
        lVar18 = (param_2 & 0x3f) * 8;
        cVar6 = (*param_4)((unsigned __int64)*(unsigned int *)(uVar2 + *(int *)(param_1 + 0xc)) + lVar12,
                           (unsigned __int64)*(unsigned int *)(uVar8 + *(int *)(param_1 + 0xc)) + lVar18);
        if (cVar6 == '\0') break;
        puVar10 = (unsigned __int64 *)(*(int *)(uVar8 + *(int *)(param_1 + 0xc)) + (int)lVar18);
        puVar9 = (unsigned __int64 *)(*(int *)(uVar2 + *(int *)(param_1 + 0xc)) + (int)lVar12);
        uVar7 = *puVar9;
        *(unsigned int *)puVar9 = *(unsigned int *)puVar10;
        *(unsigned int *)((int)puVar9 + 4) = *(unsigned int *)((int)puVar10 + 4);
        *puVar10 = uVar7;
        if ((unsigned int)param_2 == uVar5) break;
        param_2 = param_2 - 1;
      }
      param_2 = uVar16;
      uVar14 = uVar16 + 1;
    }
    if (puVar11 <= auStack_1b0) {
      return;
    }
    param_2 = (unsigned __int64)puVar11[-2];
    param_3 = (unsigned __int64)puVar11[-1];
    puVar11 = puVar11 + -2;
  } while( true );
}

