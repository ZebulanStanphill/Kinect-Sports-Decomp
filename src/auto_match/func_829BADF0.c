void fn_829BADF0(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  unsigned int uVar11;
  __int64 lVar10;
  unsigned int *puVar13;
  __int64 lVar12;
  unsigned int *puVar14;
  int iVar15;
  int *piVar16;
  unsigned int uVar17;
  
  iVar15 = 0;
  iVar1 = *(int *)(param_1 + 0x1ac);
  iVar2 = *(int *)(param_1 + 0x140);
  if (0 < *(int *)(param_1 + 0x24)) {
    iVar9 = 0;
    piVar16 = (int *)(*(int *)(param_1 + 0xdc) + 0xc);
    do {
      uVar11 = *piVar16 * piVar16[6];
      uVar3 = *(unsigned int *)(param_1 + 0x140);
      iVar4 = *(int *)(iVar1 + 8 + iVar9);
      puVar5 = *(unsigned int **)(iVar9 + *(int *)(iVar1 + 0x38));
      puVar14 = *(unsigned int **)(iVar9 + *(int *)(iVar1 + 0x3c));
      uVar17 = (int)uVar11 / (int)uVar3;
      trapWord(6,(unsigned __int64)uVar3,0);
      lVar10 = (__int64)(iVar2 + 2) * (__int64)(int)uVar17;
      trapWord(5,(unsigned __int64)uVar3 &
                 ~((((unsigned __int64)uVar11 & 0x7fffffff) << 1 | (unsigned __int64)(uVar11 >> 0x1f)) - 1),0xffff
              );
      if (0 < lVar10) {
        puVar13 = puVar14;
        do {
          uVar6 = *(unsigned int *)((iVar4 - (int)puVar14) + (int)puVar13);
          *puVar13 = uVar6;
          *(unsigned int *)(((int)puVar5 - (int)puVar14) + (int)puVar13) = uVar6;
          puVar13 = puVar13 + 1;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      lVar10 = ((unsigned __int64)uVar17 & 0x7fffffff) << 1;
      lVar12 = 0;
      if (0 < (int)lVar10) {
        do {
          iVar7 = (int)(((__int64)(int)uVar17 * (__int64)iVar2 + lVar12 & 0xffffffffU) << 2);
          iVar8 = (int)(((__int64)(iVar2 + -2) * (__int64)(int)uVar17 + lVar12 & 0xffffffffU) << 2
                       );
          lVar12 = lVar12 + 1;
          *(unsigned int *)(iVar8 + (int)puVar14) = *(unsigned int *)(iVar7 + iVar4);
          *(unsigned int *)(iVar7 + (int)puVar14) = *(unsigned int *)(iVar8 + iVar4);
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      if (0 < (int)uVar17) {
        puVar14 = puVar5 + -(uVar17 + 1 & 0x3fffffff);
        do {
          puVar14 = puVar14 + 1;
          *puVar14 = *puVar5;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
      iVar15 = iVar15 + 1;
      iVar9 = iVar9 + 4;
      piVar16 = piVar16 + 0x15;
    } while (iVar15 < *(int *)(param_1 + 0x24));
  }
  return;
}

