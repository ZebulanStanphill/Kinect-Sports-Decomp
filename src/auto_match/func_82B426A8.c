extern unsigned int *auStack_60;
extern int fn_82ABDD90();
extern int fn_82ABE2E0();
extern int fn_82AC68F0();
extern int fn_82AD17B0();
extern int fn_82AD1978();
extern int fn_82B42280();
extern int fn_82B44B88();
extern int fn_82B4B9A8();
extern int fn_82B841E8();
extern int fn_82B8AB60();
extern int fn_82B8AC10();
extern int fn_82B8F328();
extern unsigned int uStack_5c;


void fn_82B426A8(int param_1,int *param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  int iVar5;
  unsigned int uVar6;
  char cVar8;
  int iVar7;
  unsigned __int64 uVar4;
  unsigned int *puVar9;
  unsigned int uVar10;
  unsigned int *puVar11;
  unsigned int *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  unsigned char auStack_60 [4];
  unsigned int uStack_5c;
  
  iVar5 = fn_82ABDD90(param_1,0x70,0,1);
  puVar12 = (unsigned int *)((int)param_2 + iVar5 + -8);
  uVar3 = *puVar12 & 0x7fff;
  puVar11 = (unsigned int *)(*(int *)(param_1 + 0xc) + uVar3 * 0x28);
  if (((puVar11[1] & 2) == 0) &&
     (((uVar6 = *puVar11 & 7, uVar6 == 3 && ((*(unsigned int *)(param_2[7] + 0x4c) & 0x7ffff) == 0)) ||
      (uVar6 == 1)))) {
    *(unsigned int *)(param_1 + 0x234) = -(unsigned int)((*(unsigned int *)(param_1 + 4) & 1) == 0) & *(unsigned int *)(param_1 + 4)
    ;
    fn_82B8AB60(auStack_60,param_1,uVar3,*puVar12 >> 0xf & 0x3fff);
    puVar11 = (unsigned int *)(param_2 + 1);
    while (puVar1 = (unsigned int *)*puVar11, puVar1 != (unsigned int *)0x0) {
      if ((puVar1[4] != 0) && ((*(unsigned int *)(puVar1[4] + 8) & 0x3f80) != 0x3800)) {
        uVar6 = fn_82B4B9A8(param_1,auStack_60);
        puVar9 = (unsigned int *)(puVar1[3] + 4);
        for (puVar2 = (unsigned int *)*puVar9; puVar2 != puVar1; puVar2 = (unsigned int *)puVar2[2]) {
          puVar9 = puVar2 + 2;
        }
        *puVar9 = puVar1[2];
        puVar1[2] = *(unsigned int *)(uVar6 + 4);
        *(unsigned int **)(uVar6 + 4) = puVar1;
        puVar1[3] = uVar6;
        uVar6 = *puVar1;
        uVar10 = uStack_5c >> 2 & 0x3f1b | 0xe4;
        *puVar1 = ((((uVar10 >> (uVar6 >> 10 & 6) & 3) << 2 | uVar10 >> (uVar6 >> 8 & 6) & 3) << 2 |
                   uVar10 >> (uVar6 >> 6 & 6) & 3) << 2 | uVar10 >> (uVar6 >> 4 & 6) & 3) << 5 |
                  uVar6 & 0xffffe01f;
      }
      if ((unsigned int *)*puVar11 == puVar1) {
        puVar11 = puVar1 + 2;
      }
    }
    cVar8 = fn_82ABE2E0(param_2);
    if ((cVar8 != '\0') && (param_2[1] == 0)) {
      fn_82B8AC10(param_1,param_2,0,1);
      return;
    }
  }
  uVar6 = param_2[7];
  iVar5 = *(int *)(uVar6 + 8);
  if ((*(unsigned int *)(uVar6 + 0x30) >> 0x15 & 1) == 0) {
    for (; iVar5 != 0; iVar5 = *(int *)(iVar5 + 0xc)) {
      fn_82B42280(param_1,param_2,*(unsigned int *)(iVar5 + 4),0,0);
    }
  }
  else {
    iVar7 = 0;
    iVar14 = 0;
    for (; iVar5 != 0; iVar5 = *(int *)(iVar5 + 0xc)) {
      iVar13 = *(int *)(iVar5 + 4);
      for (piVar16 = *(int **)(iVar13 + 0xc); piVar16 != (int *)0x0; piVar16 = (int *)piVar16[2]) {
        iVar15 = *piVar16;
        if ((*(unsigned int *)(iVar15 + 0x30) >> 0x13 & 1) != 0) goto LAB_82b428f4;
      }
      fn_82B42280(param_1,param_2,iVar13,0,0);
      iVar13 = iVar7;
      iVar15 = iVar14;
LAB_82b428f4:
      iVar7 = iVar13;
      iVar14 = iVar15;
    }
    piVar16 = (int *)(*(int *)(iVar14 + 0x74) + 0x10);
    if (*(int *)(*(int *)(iVar14 + 0x74) + 0x10) != 0) {
      for (; piVar16 != (int *)0x0; piVar16 = (int *)piVar16[1]) {
        iVar5 = *piVar16;
        if (((*(unsigned int *)(iVar5 + 0x30) >> 0x16 & 1) == 0) &&
           ((*(unsigned int *)(iVar5 + 0x30) >> 0x14 & 1) != 0)) {
          iVar13 = iVar7;
          iVar15 = iVar14;
          if (((*(unsigned int *)(*(int *)(param_1 + 0xc) + uVar3 * 0x28 + 4) & 0x8000000) != 0) &&
             (iVar13 = 0, uVar3 != *(unsigned int *)(*(int *)(*(int *)(iVar14 + 0x74) + 4) + 0x10))) {
            iVar5 = iVar7;
            iVar15 = 0;
          }
          fn_82B42280(param_1,param_2,iVar5,iVar15,iVar13);
        }
      }
    }
    if (*param_2 == 0) {
      for (iVar5 = *(int *)(uVar6 + 8); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0xc)) {
        uVar10 = *(unsigned int *)(iVar5 + 4);
        if ((*(unsigned int *)(*(int *)(uVar10 + 0x28) + 4) & 1) != 0) goto LAB_82b42a00;
      }
      uVar10 = fn_82AC68F0(param_1);
      puVar11 = (unsigned int *)(uVar6 & 0xfffffffe);
      puVar1 = (unsigned int *)(uVar10 & 0xfffffffe);
      *puVar1 = *puVar11;
      *(unsigned int **)(*puVar11 & 0xfffffffe) = puVar1;
      puVar1[1] = (unsigned int)puVar11;
      *puVar11 = (unsigned int)(puVar1 + 1);
      fn_82B8F328(uVar10,uVar6,param_1);
      fn_82B44B88(param_1);
LAB_82b42a00:
      iVar5 = fn_82B841E8(param_1,uVar10,uVar10 + 0x10,0x74,0,1);
      iVar7 = fn_82ABDD90(param_1,0x74,0,1);
      puVar11 = (unsigned int *)(iVar7 + iVar5 + -4);
      uVar6 = *puVar11;
      *puVar11 = uVar3 | uVar6 & 0xffff8000;
      *puVar11 = uVar3 | uVar6 & 0xe0000000 | *puVar12 & 0x1fff8000;
      uVar4 = fn_82AD17B0(param_1,iVar5);
      fn_82AD1978(param_2,uVar4);
    }
  }
  return;
}

