extern int fn_82AD1978();
extern int fn_82B82378();
extern int fn_82B84350();


unsigned int fn_82B1E978(int param_1,unsigned int param_2,int param_3,int param_4,unsigned int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int *piVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int *puVar9;
  __int64 lVar10;
  unsigned int uVar11;
  int *piVar12;
  unsigned int uVar13;
  __int64 lVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  
  iVar1 = *(int *)((param_4 + 0xb) * 4 + param_2);
  iVar2 = *(int *)((param_3 + 0xb) * 4 + param_2);
  uVar7 = fn_82B84350(param_1,*(unsigned int *)(param_2 + 0x1c),0,
                            ((unsigned __int64)(*(unsigned int *)(param_2 + 8) >> 0x13) & 7) - 1);
  uVar11 = uVar7 & 0xfffffffe;
  puVar9 = (unsigned int *)((param_2 & 0xfffffffe) + 0x24);
  piVar12 = (int *)0x0;
  *(unsigned int *)(uVar11 + 0x24) = *puVar9;
  *(unsigned int *)(*puVar9 & 0xfffffffe) = uVar11;
  *(unsigned int *)(uVar11 + 0x28) = param_2 & 0xfffffffe;
  *puVar9 = uVar11 + 0x28;
  if (((~(unsigned __int64)*(unsigned int *)(param_1 + 0x28) & 0xffffffff) >> 0xe & 1) != 0) {
    for (piVar12 = *(int **)(param_2 + 0x10); (piVar12 != (int *)0x0 && (*piVar12 != 1));
        piVar12 = (int *)piVar12[1]) {
    }
  }
  uVar13 = 0;
  lVar14 = 0;
  lVar10 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar15 = 0;
  piVar6 = piVar12;
  for (uVar11 = 0; uVar11 < (*(unsigned int *)(param_2 + 8) >> 0x13 & 7); uVar11 = uVar11 + 1) {
    iVar3 = *(int *)(param_2 + 0x2c + uVar17);
    uVar13 = uVar13 & ~(3 << (uVar15 & 0x3f)) | (int)lVar14 << (uVar15 & 0x3f);
    if (iVar3 != iVar2) {
      if (iVar3 == iVar1) {
        lVar10 = lVar14;
      }
      uVar8 = fn_82AD1978(uVar7);
      *(unsigned int *)(uVar7 + 0x2c + uVar16) = uVar8;
      uVar4 = 0xf << (uVar16 & 0x3f);
      uVar5 = (*(unsigned short *)(param_2 + 0xe) >> (uVar17 & 0x3f) & 0xf) << (uVar16 & 0x3f);
      if ((*(unsigned int *)(uVar7 + 0xc) & uVar4 & 0xffff) != uVar5) {
        *(unsigned short *)(uVar7 + 0xe) = (unsigned short)*(unsigned int *)(uVar7 + 0xc) & ~(unsigned short)uVar4 | (unsigned short)uVar5;
      }
      if (piVar12 != (int *)0x0) {
        fn_82B82378(*(unsigned __int64 *)(piVar6 + 2),*(unsigned __int64 *)(piVar6 + 10),uVar7,lVar14);
      }
      lVar14 = lVar14 + 1;
      uVar16 = uVar16 + 4;
    }
    uVar15 = uVar15 + 2;
    uVar17 = uVar17 + 4;
    piVar6 = piVar6 + 2;
  }
  *param_5 = uVar13 & ~(3 << (param_3 << 1 & 0x3eU)) | (int)lVar10 << (param_3 << 1 & 0x3eU);
  return uVar7;
}

