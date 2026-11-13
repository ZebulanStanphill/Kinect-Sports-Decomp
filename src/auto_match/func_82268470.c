extern int fn_82268638();
extern int fn_82537A58();
extern int fn_8265C9E0();


void fn_82268470(int param_1)

{
  char cVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  unsigned int *puVar11;
  __int64 lVar12;
  unsigned int *puVar13;
  unsigned int *puVar14;
  
  iVar8 = 0;
  for (piVar6 = *(int **)(param_1 + 0x6e0); (piVar6 != (int *)0x0 && (*piVar6 != 0));
      piVar6 = (int *)(-(unsigned int)(piVar6[1] != 0) & (unsigned int)(piVar6 + 1))) {
    iVar8 = iVar8 + 1;
  }
  iVar9 = 0;
  for (piVar6 = *(int **)(param_1 + 0x6e4); (piVar6 != (int *)0x0 && (*piVar6 != 0));
      piVar6 = (int *)(-(unsigned int)(piVar6[1] != 0) & (unsigned int)(piVar6 + 1))) {
    iVar9 = iVar9 + 1;
  }
  lVar12 = 0;
  puVar13 = (unsigned int *)(*(int *)(param_1 + 0x5d8) * 0x38 + *(int *)(param_1 + 0x6e8) + 8);
  iVar10 = param_1 + 0x638;
  puVar11 = (unsigned int *)(param_1 + 0x61c);
  puVar14 = (unsigned int *)(param_1 + 0x70);
  do {
    if (puVar13 + -2 == *(unsigned int **)(param_1 + 0x6ec)) break;
    if (puVar13[7] == 0x4d5308c9) {
      puVar14[-1] = *(unsigned int *)
                     ((int)((lVar12 - (__int64)((int)lVar12 / iVar8) * (__int64)iVar8 &
                            0xffffffffU) << 2) + *(int *)(param_1 + 0x6e0));
      *puVar14 = *(unsigned int *)
                  ((int)((lVar12 - (__int64)((int)lVar12 / iVar9) * (__int64)iVar9 & 0xffffffffU)
                        << 2) + *(int *)(param_1 + 0x6e4));
      puVar14[-2] = 1;
    }
    else {
      puVar14[-1] = 0;
      *puVar14 = 0;
      puVar14[-2] = 0;
    }
    uVar2 = fn_8265C9E0(0x38);
    if ((uVar2 & 0xffffffff) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = fn_82537A58(uVar2,*(unsigned int *)(param_1 + 0x4b0),*(unsigned __int64 *)(puVar13 + -2)
                               );
    }
    *puVar11 = uVar3;
    puVar4 = puVar13;
    if (0xf < (unsigned int)puVar13[5]) {
      puVar4 = (unsigned int *)*puVar13;
    }
    pcVar7 = (char *)(puVar14 + -0x1c);
    iVar5 = (int)puVar4 - (int)pcVar7;
    do {
      if (puVar14 + -0xc <= pcVar7) break;
      cVar1 = pcVar7[iVar5];
      *pcVar7 = cVar1;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    if (pcVar7 == (char *)(puVar14 + -0xc)) {
      pcVar7[-1] = '\0';
    }
    fn_82268638(iVar10,puVar13 + -2);
    lVar12 = lVar12 + 1;
    puVar13 = puVar13 + 0xe;
    puVar11 = puVar11 + 1;
    puVar14 = puVar14 + 0x3c;
    iVar10 = iVar10 + 0x38;
  } while ((int)lVar12 < 3);
  *(unsigned int *)(param_1 + 0x628) = 2;
  return;
}

