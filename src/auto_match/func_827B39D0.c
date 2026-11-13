#define true 1
extern unsigned int *auStack_1a0;


void fn_827B39D0(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,int (**param_4)())

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  char cVar8;
  unsigned int uVar9;
  unsigned int *puVar10;
  unsigned int *puVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  unsigned int uVar14;
  __int64 lVar15;
  __int64 lVar16;
  unsigned int auStack_1a0 [104];
  
  if ((param_3 - param_2 & 0xffffffff) < 2) {
    return;
  }
  puVar11 = auStack_1a0;
  do {
    while( true ) {
      uVar7 = (unsigned int)param_2;
      uVar6 = (unsigned int)param_3;
      uVar9 = uVar6 - uVar7;
      if ((int)uVar9 < 10) break;
      iVar1 = *param_1;
      uVar12 = param_2 + 1;
      uVar13 = param_3 - 1;
      iVar5 = (int)(((__int64)((int)uVar9 >> 1) + (unsigned __int64)((int)uVar9 < 0 && (uVar9 & 1) != 0) +
                     param_2 & 0xffffffff) << 2);
      iVar4 = (int)((param_2 & 0x3fffffff) << 2);
      uVar3 = *(unsigned int *)(iVar4 + iVar1);
      lVar16 = (uVar12 & 0x3fffffff) << 2;
      lVar15 = (uVar13 & 0x3fffffff) << 2;
      *(unsigned int *)(iVar4 + iVar1) = *(unsigned int *)(iVar5 + iVar1);
      *(unsigned int *)(iVar5 + iVar1) = uVar3;
      iVar1 = (int)lVar16;
      iVar5 = (int)lVar15;
      cVar8 = (*param_4)(*(unsigned int *)(iVar5 + *param_1),*(unsigned int *)(iVar1 + *param_1));
      if (cVar8 != '\0') {
        iVar2 = *param_1;
        uVar3 = *(unsigned int *)(iVar5 + iVar2);
        *(unsigned int *)(iVar5 + iVar2) = *(unsigned int *)(iVar1 + iVar2);
        *(unsigned int *)(iVar1 + iVar2) = uVar3;
      }
      cVar8 = (*param_4)(*(unsigned int *)(iVar4 + *param_1),*(unsigned int *)(iVar1 + *param_1));
      if (cVar8 != '\0') {
        iVar2 = *param_1;
        uVar3 = *(unsigned int *)(iVar4 + iVar2);
        *(unsigned int *)(iVar4 + iVar2) = *(unsigned int *)(iVar1 + iVar2);
        *(unsigned int *)(iVar1 + iVar2) = uVar3;
      }
      cVar8 = (*param_4)(*(unsigned int *)(iVar5 + *param_1),*(unsigned int *)(iVar4 + *param_1));
      if (cVar8 != '\0') {
        iVar1 = *param_1;
        uVar3 = *(unsigned int *)(iVar5 + iVar1);
        *(unsigned int *)(iVar5 + iVar1) = *(unsigned int *)(iVar4 + iVar1);
        *(unsigned int *)(iVar4 + iVar1) = uVar3;
      }
      while( true ) {
        do {
          lVar16 = lVar16 + 4;
          uVar12 = uVar12 + 1;
          cVar8 = (*param_4)(*(unsigned int *)((int)lVar16 + *param_1),
                             *(unsigned int *)(iVar4 + *param_1));
        } while (cVar8 != '\0');
        do {
          lVar15 = lVar15 + -4;
          uVar13 = uVar13 - 1;
          cVar8 = (*param_4)(*(unsigned int *)(iVar4 + *param_1),
                             *(unsigned int *)((int)lVar15 + *param_1));
        } while (cVar8 != '\0');
        iVar1 = *param_1;
        uVar14 = (unsigned int)uVar13;
        uVar9 = (unsigned int)uVar12;
        if ((int)uVar14 < (int)uVar9) break;
        lVar15 = (uVar13 & 0x3fffffff) << 2;
        lVar16 = (uVar12 & 0x3fffffff) << 2;
        uVar3 = *(unsigned int *)((int)lVar16 + iVar1);
        *(unsigned int *)((int)lVar16 + iVar1) = *(unsigned int *)((int)lVar15 + iVar1);
        *(unsigned int *)((int)lVar15 + iVar1) = uVar3;
      }
      iVar5 = (int)((uVar13 & 0xffffffff) << 2);
      uVar3 = *(unsigned int *)(iVar4 + iVar1);
      *(unsigned int *)(iVar4 + iVar1) = *(unsigned int *)(iVar5 + iVar1);
      *(unsigned int *)(iVar5 + iVar1) = uVar3;
      if ((int)(uVar6 - uVar9) < (int)(uVar14 - uVar7)) {
        *puVar11 = uVar7;
        puVar11[1] = uVar14;
        uVar13 = param_3;
        param_2 = uVar12;
      }
      else {
        puVar11[1] = uVar6;
        *puVar11 = uVar9;
      }
      param_3 = uVar13;
      puVar11 = puVar11 + 2;
    }
LAB_827b3be4:
    uVar13 = param_2;
    param_2 = uVar13 + 1;
    if ((int)param_2 < (int)uVar6) {
      while( true ) {
        iVar1 = (int)((uVar13 & 0x3fffffff) << 2);
        puVar10 = (unsigned int *)(*param_1 + iVar1);
        cVar8 = (*param_4)(puVar10[1],*puVar10);
        if (cVar8 == '\0') break;
        puVar10 = (unsigned int *)(*param_1 + iVar1);
        uVar3 = puVar10[1];
        puVar10[1] = *puVar10;
        *puVar10 = uVar3;
        if ((unsigned int)uVar13 == uVar7) break;
        uVar13 = uVar13 - 1;
      }
      goto LAB_827b3be4;
    }
    if (puVar11 <= auStack_1a0) {
      return;
    }
    param_2 = (unsigned __int64)puVar11[-2];
    param_3 = (unsigned __int64)puVar11[-1];
    puVar11 = puVar11 + -2;
  } while( true );
}

