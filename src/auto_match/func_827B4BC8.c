#define true 1
extern unsigned int *auStack_1b0;


void fn_827B4BC8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int (**param_4)())

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  int iVar8;
  char cVar9;
  unsigned int *puVar10;
  unsigned int uVar11;
  unsigned int *puVar12;
  unsigned int *puVar13;
  __int64 lVar14;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  unsigned int uVar17;
  unsigned __int64 uVar18;
  unsigned int uVar19;
  __int64 lVar20;
  __int64 lVar21;
  unsigned int auStack_1b0 [108];
  
  if ((param_3 - param_2 & 0xffffffff) < 2) {
    return;
  }
  puVar13 = auStack_1b0;
  do {
    while( true ) {
      uVar7 = (unsigned int)param_2;
      uVar6 = (unsigned int)param_3;
      uVar11 = uVar6 - uVar7;
      uVar16 = param_2 + 1;
      if ((int)uVar11 < 10) break;
      uVar5 = (unsigned int)((param_2 & 0xffffffff) >> 6) & 0x3fffffc;
      uVar11 = ((int)uVar11 >> 1) + (unsigned int)((int)uVar11 < 0 && (uVar11 & 1) != 0) + uVar7;
      lVar21 = (param_2 & 0xff) * 0xc;
      uVar18 = param_3 - 1;
      puVar10 = (unsigned int *)
                (*(int *)((uVar11 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0xc)) +
                (uVar11 & 0xff) * 0xc);
      iVar8 = (int)lVar21;
      puVar12 = (unsigned int *)(*(int *)(uVar5 + *(int *)(param_1 + 0xc)) + iVar8);
      uVar11 = (unsigned int)((uVar16 & 0xffffffff) >> 6) & 0x3fffffc;
      lVar20 = (uVar16 & 0xff) * 0xc;
      uVar1 = *puVar12;
      uVar2 = puVar12[1];
      uVar3 = puVar12[2];
      *puVar12 = *puVar10;
      puVar12[1] = puVar10[1];
      uVar15 = (uVar18 & 0xffffffff) >> 6 & 0x3fffffc;
      puVar12[2] = puVar10[2];
      *puVar10 = uVar1;
      lVar14 = (uVar18 & 0xff) * 0xc;
      puVar10[1] = uVar2;
      puVar10[2] = uVar3;
      iVar4 = (int)uVar15;
      cVar9 = (*param_4)((unsigned __int64)*(unsigned int *)(iVar4 + *(int *)(param_1 + 0xc)) + lVar14,
                         (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0xc) + uVar11) + lVar20);
      if (cVar9 != '\0') {
        puVar10 = (unsigned int *)(*(int *)(*(int *)(param_1 + 0xc) + uVar11) + (int)lVar20);
        puVar12 = (unsigned int *)(*(int *)(*(int *)(param_1 + 0xc) + iVar4) + (int)lVar14);
        uVar1 = *puVar12;
        uVar2 = puVar12[1];
        uVar3 = puVar12[2];
        *puVar12 = *puVar10;
        puVar12[1] = puVar10[1];
        puVar12[2] = puVar10[2];
        *puVar10 = uVar1;
        puVar10[1] = uVar2;
        puVar10[2] = uVar3;
      }
      cVar9 = (*param_4)((unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0xc) + uVar5) + lVar21,
                         (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0xc) + uVar11) + lVar20);
      if (cVar9 != '\0') {
        puVar12 = (unsigned int *)(*(int *)(*(int *)(param_1 + 0xc) + uVar11) + (int)lVar20);
        puVar10 = (unsigned int *)(*(int *)(*(int *)(param_1 + 0xc) + uVar5) + iVar8);
        uVar1 = *puVar10;
        uVar2 = puVar10[1];
        uVar3 = puVar10[2];
        *puVar10 = *puVar12;
        puVar10[1] = puVar12[1];
        puVar10[2] = puVar12[2];
        *puVar12 = uVar1;
        puVar12[1] = uVar2;
        puVar12[2] = uVar3;
      }
      cVar9 = (*param_4)((unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0xc) + iVar4) + lVar14,
                         (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0xc) + uVar5) + lVar21);
      if (cVar9 == '\0') goto LAB_827b4dc0;
      iVar4 = *(int *)(param_1 + 0xc);
      lVar20 = (unsigned __int64)*(unsigned int *)(iVar4 + uVar5) + lVar21;
      while( true ) {
        puVar12 = (unsigned int *)lVar20;
        puVar10 = (unsigned int *)(*(int *)(iVar4 + (int)uVar15) + (int)lVar14);
        uVar1 = *puVar10;
        *puVar10 = *puVar12;
        uVar2 = puVar10[1];
        puVar10[1] = puVar12[1];
        uVar3 = puVar10[2];
        puVar10[2] = puVar12[2];
        puVar12[2] = uVar3;
        puVar12[1] = uVar2;
        *puVar12 = uVar1;
LAB_827b4dc0:
        do {
          uVar16 = uVar16 + 1;
          uVar15 = (uVar16 & 0xffffffff) >> 6 & 0x3fffffc;
          lVar14 = (uVar16 & 0xff) * 0xc;
          cVar9 = (*param_4)((unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0xc) + (int)uVar15) + lVar14,
                             (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0xc) + uVar5) + lVar21);
        } while (cVar9 != '\0');
        do {
          uVar18 = uVar18 - 1;
          uVar11 = (unsigned int)((uVar18 & 0xffffffff) >> 6) & 0x3fffffc;
          lVar20 = (uVar18 & 0xff) * 0xc;
          cVar9 = (*param_4)((unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0xc) + uVar5) + lVar21,
                             (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0xc) + uVar11) + lVar20);
        } while (cVar9 != '\0');
        iVar4 = *(int *)(param_1 + 0xc);
        uVar19 = (unsigned int)uVar18;
        uVar17 = (unsigned int)uVar16;
        if ((int)uVar19 < (int)uVar17) break;
        lVar20 = (unsigned __int64)*(unsigned int *)(iVar4 + uVar11) + lVar20;
      }
      puVar12 = (unsigned int *)(*(int *)(iVar4 + uVar11) + (int)lVar20);
      puVar10 = (unsigned int *)(*(int *)(iVar4 + uVar5) + iVar8);
      uVar1 = *puVar10;
      uVar2 = puVar10[1];
      uVar3 = puVar10[2];
      *puVar10 = *puVar12;
      puVar10[1] = puVar12[1];
      puVar10[2] = puVar12[2];
      *puVar12 = uVar1;
      puVar12[1] = uVar2;
      puVar12[2] = uVar3;
      if ((int)(uVar6 - uVar17) < (int)(uVar19 - uVar7)) {
        *puVar13 = uVar7;
        puVar13[1] = uVar19;
        uVar18 = param_3;
        param_2 = uVar16;
      }
      else {
        puVar13[1] = uVar6;
        *puVar13 = uVar17;
      }
      param_3 = uVar18;
      puVar13 = puVar13 + 2;
    }
    while (uVar18 = uVar16, (int)uVar18 < (int)uVar6) {
      while( true ) {
        uVar11 = (unsigned int)((param_2 & 0xffffffff) >> 6) & 0x3fffffc;
        uVar5 = (unsigned int)((param_2 + 1 & 0xffffffff) >> 6) & 0x3fffffc;
        lVar14 = (param_2 + 1 & 0xff) * 0xc;
        lVar20 = (param_2 & 0xff) * 0xc;
        cVar9 = (*param_4)((unsigned __int64)*(unsigned int *)(uVar5 + *(int *)(param_1 + 0xc)) + lVar14,
                           (unsigned __int64)*(unsigned int *)(uVar11 + *(int *)(param_1 + 0xc)) + lVar20);
        if (cVar9 == '\0') break;
        puVar10 = (unsigned int *)(*(int *)(uVar11 + *(int *)(param_1 + 0xc)) + (int)lVar20);
        puVar12 = (unsigned int *)(*(int *)(uVar5 + *(int *)(param_1 + 0xc)) + (int)lVar14);
        uVar1 = *puVar12;
        uVar2 = puVar12[1];
        uVar3 = puVar12[2];
        *puVar12 = *puVar10;
        puVar12[1] = puVar10[1];
        puVar12[2] = puVar10[2];
        *puVar10 = uVar1;
        puVar10[1] = uVar2;
        puVar10[2] = uVar3;
        if ((unsigned int)param_2 == uVar7) break;
        param_2 = param_2 - 1;
      }
      param_2 = uVar18;
      uVar16 = uVar18 + 1;
    }
    if (puVar13 <= auStack_1b0) {
      return;
    }
    param_2 = (unsigned __int64)puVar13[-2];
    param_3 = (unsigned __int64)puVar13[-1];
    puVar13 = puVar13 + -2;
  } while( true );
}

