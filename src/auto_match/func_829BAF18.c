void fn_829BAF18(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  unsigned int uVar10;
  __int64 lVar11;
  unsigned int *puVar12;
  __int64 lVar13;
  unsigned int *puVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  
  iVar15 = 0;
  iVar2 = *(int *)(param_1 + 0x1ac);
  iVar3 = *(int *)(param_1 + 0x140);
  if (0 < *(int *)(param_1 + 0x24)) {
    iVar17 = 0;
    piVar16 = (int *)(*(int *)(param_1 + 0xdc) + 0xc);
    do {
      lVar11 = 0;
      uVar4 = *(unsigned int *)(param_1 + 0x140);
      uVar10 = *piVar16 * piVar16[6];
      puVar6 = *(unsigned int **)(iVar17 + *(int *)(iVar2 + 0x3c));
      iVar7 = *(int *)(iVar17 + *(int *)(iVar2 + 0x38));
      iVar1 = (int)uVar10 / (int)uVar4;
      lVar13 = (__int64)iVar1;
      trapWord(6,(unsigned __int64)uVar4,0);
      trapWord(5,(unsigned __int64)uVar4 &
                 ~((((unsigned __int64)uVar10 & 0x7fffffff) << 1 | (unsigned __int64)(uVar10 >> 0x1f)) - 1),0xffff
              );
      if (0 < iVar1) {
        puVar14 = puVar6 + -iVar1;
        puVar12 = puVar6;
        do {
          iVar8 = (int)(((__int64)(iVar3 + 1) * (__int64)iVar1 + lVar11 & 0xffffffffU) << 2);
          iVar9 = (int)(((__int64)(iVar3 + 2) * (__int64)iVar1 + lVar11 & 0xffffffffU) << 2);
          lVar11 = lVar11 + 1;
          *(unsigned int *)((iVar7 - (int)puVar6) + (int)puVar14) = *(unsigned int *)(iVar8 + iVar7);
          *puVar14 = *(unsigned int *)(iVar8 + (int)puVar6);
          puVar14 = puVar14 + 1;
          *(unsigned int *)(iVar9 + iVar7) = *(unsigned int *)((iVar7 - (int)puVar6) + (int)puVar12);
          uVar5 = *puVar12;
          puVar12 = puVar12 + 1;
          *(unsigned int *)(iVar9 + (int)puVar6) = uVar5;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      iVar15 = iVar15 + 1;
      iVar17 = iVar17 + 4;
      piVar16 = piVar16 + 0x15;
    } while (iVar15 < *(int *)(param_1 + 0x24));
  }
  return;
}

