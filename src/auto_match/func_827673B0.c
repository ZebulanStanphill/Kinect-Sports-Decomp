#define true 1
extern unsigned int *auStack_170;


void fn_827673B0(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned int uVar10;
  __int64 lVar11;
  __int64 lVar12;
  unsigned short *puVar13;
  unsigned int uVar14;
  unsigned int *puVar15;
  unsigned short *puVar16;
  unsigned int *puVar17;
  unsigned int *puVar18;
  unsigned int auStack_170 [92];
  
  if ((param_3 - param_2 & 0xffffffff) < 2) {
    return;
  }
  puVar18 = auStack_170;
  do {
    while( true ) {
      uVar7 = (unsigned int)param_2;
      uVar6 = (unsigned int)param_3;
      uVar14 = uVar6 - uVar7;
      if ((int)uVar14 < 10) break;
      iVar1 = *param_1;
      iVar3 = uVar7 * 4;
      uVar9 = param_3 - 1;
      uVar2 = *(unsigned int *)(iVar3 + iVar1);
      uVar8 = param_2 + 1;
      puVar15 = (unsigned int *)
                ((((int)uVar14 >> 1) + (unsigned int)((int)uVar14 < 0 && (uVar14 & 1) != 0) + uVar7) * 4 +
                iVar1);
      lVar11 = (uVar9 & 0x3fffffff) << 2;
      lVar12 = (uVar8 & 0x3fffffff) * 4;
      *(unsigned short *)(iVar3 + iVar1) = *(unsigned short *)puVar15;
      *(unsigned short *)(iVar3 + iVar1 + 2) = *(unsigned short *)((int)puVar15 + 2);
      *puVar15 = uVar2;
      puVar13 = (unsigned short *)((int)lVar11 + *param_1);
      puVar16 = (unsigned short *)((int)lVar12 + *param_1);
      if (*puVar13 < *puVar16) {
        uVar2 = *(unsigned int *)puVar13;
        *puVar13 = *puVar16;
        puVar13[1] = puVar16[1];
        *(unsigned int *)puVar16 = uVar2;
      }
      puVar16 = (unsigned short *)((int)lVar12 + *param_1);
      puVar13 = (unsigned short *)(iVar3 + *param_1);
      if (*puVar13 < *puVar16) {
        uVar2 = *(unsigned int *)puVar13;
        *puVar13 = *puVar16;
        puVar13[1] = puVar16[1];
        *(unsigned int *)puVar16 = uVar2;
      }
      puVar16 = (unsigned short *)((int)lVar11 + *param_1);
      puVar13 = (unsigned short *)(iVar3 + *param_1);
      if (*puVar16 < *puVar13) {
        uVar2 = *(unsigned int *)puVar16;
        *puVar16 = *puVar13;
        puVar16[1] = puVar13[1];
        *(unsigned int *)puVar13 = uVar2;
      }
      while( true ) {
        iVar1 = *param_1;
        puVar15 = (unsigned int *)(iVar3 + iVar1);
        do {
          lVar12 = lVar12 + 4;
          uVar8 = uVar8 + 1;
        } while (*(unsigned short *)((int)lVar12 + iVar1) < *(unsigned short *)(iVar3 + iVar1));
        do {
          lVar11 = lVar11 + -4;
          uVar9 = uVar9 - 1;
        } while (*(unsigned short *)(iVar3 + iVar1) < *(unsigned short *)((int)lVar11 + iVar1));
        uVar10 = (unsigned int)uVar9;
        uVar14 = (unsigned int)uVar8;
        if ((int)uVar10 < (int)uVar14) break;
        lVar11 = (uVar9 & 0x3fffffff) << 2;
        lVar12 = (uVar8 & 0x3fffffff) << 2;
        iVar4 = (int)lVar11;
        iVar5 = (int)lVar12;
        uVar2 = *(unsigned int *)(iVar5 + iVar1);
        *(unsigned short *)(iVar5 + iVar1) = *(unsigned short *)(iVar4 + iVar1);
        *(unsigned short *)(iVar5 + iVar1 + 2) = *(unsigned short *)(iVar4 + iVar1 + 2);
        *(unsigned int *)(iVar4 + iVar1) = uVar2;
      }
      uVar2 = *puVar15;
      puVar17 = (unsigned int *)(uVar10 * 4 + iVar1);
      *(unsigned short *)puVar15 = *(unsigned short *)puVar17;
      *(unsigned short *)((int)puVar15 + 2) = *(unsigned short *)((int)puVar17 + 2);
      *puVar17 = uVar2;
      if ((int)(uVar6 - uVar14) < (int)(uVar10 - uVar7)) {
        *puVar18 = uVar7;
        puVar18[1] = uVar10;
        uVar9 = param_3;
        param_2 = uVar8;
      }
      else {
        puVar18[1] = uVar6;
        *puVar18 = uVar14;
      }
      param_3 = uVar9;
      puVar18 = puVar18 + 2;
    }
LAB_827675d0:
    uVar9 = param_2;
    param_2 = uVar9 + 1;
    if ((int)param_2 < (int)uVar6) {
      while (puVar13 = (unsigned short *)((int)((uVar9 & 0xffffffff) << 2) + *param_1),
            puVar13[2] < *puVar13) {
        uVar2 = *(unsigned int *)(puVar13 + 2);
        puVar13[2] = *puVar13;
        puVar13[3] = puVar13[1];
        *(unsigned int *)puVar13 = uVar2;
        if ((unsigned int)uVar9 == uVar7) break;
        uVar9 = uVar9 - 1;
      }
      goto LAB_827675d0;
    }
    if (puVar18 <= auStack_170) {
      return;
    }
    param_2 = (unsigned __int64)puVar18[-2];
    param_3 = (unsigned __int64)puVar18[-1];
    puVar18 = puVar18 + -2;
  } while( true );
}

