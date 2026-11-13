#define true 1
extern unsigned int *auStack_1a0;
extern int fn_82788788();
extern unsigned int stack0x00000028;
extern unsigned int uStack00000028;


void fn_82789240(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned int *puVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  char cVar9;
  unsigned int uVar10;
  unsigned int *puVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  unsigned int uVar14;
  __int64 lVar15;
  __int64 lVar16;
  unsigned __int64 uStack00000028;
  unsigned int auStack_1a0 [104];
  
  if ((param_3 - param_2 & 0xffffffff) < 2) {
    return;
  }
  puVar11 = auStack_1a0;
  uStack00000028 = param_4;
  do {
    while( true ) {
      uVar8 = (unsigned int)param_2;
      uVar7 = (unsigned int)param_3;
      uVar10 = uVar7 - uVar8;
      if ((int)uVar10 < 10) break;
      iVar1 = *param_1;
      uVar12 = param_2 + 1;
      uVar13 = param_3 - 1;
      iVar4 = (int)(((__int64)((int)uVar10 >> 1) +
                     (unsigned __int64)((int)uVar10 < 0 && (uVar10 & 1) != 0) + param_2 & 0xffffffff) << 2)
      ;
      iVar3 = (int)((param_2 & 0x3fffffff) << 2);
      uVar2 = *(unsigned int *)(iVar3 + iVar1);
      lVar16 = (uVar12 & 0x3fffffff) << 2;
      lVar15 = (uVar13 & 0x3fffffff) << 2;
      *(unsigned int *)(iVar3 + iVar1) = *(unsigned int *)(iVar4 + iVar1);
      *(unsigned int *)(iVar4 + iVar1) = uVar2;
      iVar1 = *param_1;
      iVar4 = (int)lVar16;
      iVar5 = (int)lVar15;
      cVar9 = fn_82788788(&stack0x00000028,*(unsigned int *)(iVar5 + iVar1),
                            *(unsigned int *)(iVar4 + iVar1));
      if (cVar9 != '\0') {
        uVar2 = *(unsigned int *)(iVar5 + iVar1);
        *(unsigned int *)(iVar5 + iVar1) = *(unsigned int *)(iVar4 + iVar1);
        *(unsigned int *)(iVar4 + iVar1) = uVar2;
      }
      iVar1 = *param_1;
      cVar9 = fn_82788788(&stack0x00000028,*(unsigned int *)(iVar3 + iVar1),
                            *(unsigned int *)(iVar4 + iVar1));
      if (cVar9 != '\0') {
        uVar2 = *(unsigned int *)(iVar3 + iVar1);
        *(unsigned int *)(iVar3 + iVar1) = *(unsigned int *)(iVar4 + iVar1);
        *(unsigned int *)(iVar4 + iVar1) = uVar2;
      }
      iVar1 = *param_1;
      cVar9 = fn_82788788(&stack0x00000028,*(unsigned int *)(iVar5 + iVar1),
                            *(unsigned int *)(iVar3 + iVar1));
      if (cVar9 != '\0') {
        uVar2 = *(unsigned int *)(iVar5 + iVar1);
        *(unsigned int *)(iVar5 + iVar1) = *(unsigned int *)(iVar3 + iVar1);
        *(unsigned int *)(iVar3 + iVar1) = uVar2;
      }
      while( true ) {
        iVar1 = *param_1;
        do {
          lVar16 = lVar16 + 4;
          uVar2 = *(unsigned int *)(iVar3 + iVar1);
          uVar12 = uVar12 + 1;
          cVar9 = fn_82788788(&stack0x00000028,*(unsigned int *)((int)lVar16 + iVar1),uVar2);
        } while (cVar9 != '\0');
        do {
          lVar15 = lVar15 + -4;
          uVar13 = uVar13 - 1;
          cVar9 = fn_82788788(&stack0x00000028,uVar2,*(unsigned int *)((int)lVar15 + iVar1));
        } while (cVar9 != '\0');
        uVar14 = (unsigned int)uVar13;
        uVar10 = (unsigned int)uVar12;
        if ((int)uVar14 < (int)uVar10) break;
        lVar15 = (uVar13 & 0x3fffffff) << 2;
        lVar16 = (uVar12 & 0x3fffffff) << 2;
        uVar2 = *(unsigned int *)((int)lVar16 + iVar1);
        *(unsigned int *)((int)lVar16 + iVar1) = *(unsigned int *)((int)lVar15 + iVar1);
        *(unsigned int *)((int)lVar15 + iVar1) = uVar2;
      }
      iVar4 = (int)((uVar13 & 0xffffffff) << 2);
      uVar2 = *(unsigned int *)(iVar3 + iVar1);
      *(unsigned int *)(iVar3 + iVar1) = *(unsigned int *)(iVar4 + iVar1);
      *(unsigned int *)(iVar4 + iVar1) = uVar2;
      if ((int)(uVar7 - uVar10) < (int)(uVar14 - uVar8)) {
        *puVar11 = uVar8;
        puVar11[1] = uVar14;
        uVar13 = param_3;
        param_2 = uVar12;
      }
      else {
        puVar11[1] = uVar7;
        *puVar11 = uVar10;
      }
      param_3 = uVar13;
      puVar11 = puVar11 + 2;
    }
LAB_8278943c:
    uVar13 = param_2;
    param_2 = uVar13 + 1;
    if ((int)param_2 < (int)uVar7) {
      while( true ) {
        iVar1 = (int)((uVar13 & 0x3fffffff) << 2);
        puVar6 = (unsigned int *)(iVar1 + *param_1);
        cVar9 = fn_82788788(&stack0x00000028,puVar6[1],*(unsigned int *)(iVar1 + *param_1));
        if (cVar9 == '\0') break;
        uVar2 = puVar6[1];
        puVar6[1] = *puVar6;
        *puVar6 = uVar2;
        if ((unsigned int)uVar13 == uVar8) break;
        uVar13 = uVar13 - 1;
      }
      goto LAB_8278943c;
    }
    if (puVar11 <= auStack_1a0) {
      return;
    }
    param_2 = (unsigned __int64)puVar11[-2];
    param_3 = (unsigned __int64)puVar11[-1];
    puVar11 = puVar11 + -2;
  } while( true );
}

