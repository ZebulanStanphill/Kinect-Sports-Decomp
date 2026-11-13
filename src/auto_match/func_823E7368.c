typedef unsigned char bool;
extern unsigned int *auStack_310;
extern unsigned int *auStack_360;
extern unsigned int *auStack_370;
extern unsigned int *auStack_380;
extern unsigned int fStack_394;
extern unsigned int fStack_3ac;
extern unsigned int fStack_3b4;
extern unsigned int fStack_3bc;
extern unsigned int fStack_3c4;
extern int fn_822ABA88();
extern int fn_822B4148();
extern int fn_822C6F10();
extern int fn_823D29A8();
extern int fn_823D98B8();
extern int fn_823E7870();
extern int fn_823E8BD8();
extern int fn_824FECB8();
extern int fn_824FEDF8();
extern unsigned int iStack_390;
extern unsigned int iStack_3a8;
extern unsigned int iStack_3b0;
extern unsigned int iStack_3b8;
extern unsigned int iStack_3c0;
extern unsigned int lbl_8218E2B0;
extern unsigned int lbl_82195530;
extern unsigned int lbl_821CA460;
extern unsigned int uStack_398;
extern unsigned int uStack_39c;
extern unsigned int uStack_3a0;


void fn_823E7368(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  unsigned int *puVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  int in_r0;
  int iVar8;
  float fVar9;
  int iVar10;
  unsigned int uVar11;
  float *pfVar12;
  int iVar13;
  bool bVar14;
  __int64 lVar15;
  double dVar16;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned int in_register_00010020;
  unsigned int in_register_00010024;
  unsigned int in_register_00010028;
  unsigned int in_vr2;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  float fStack_3c4;
  struct { int first; float second; } stack_pair_3c0;

  int iStack_3b8;
  float fStack_3b4;
  int iStack_3b0;
  struct { float first; int second; } stack_pair_3ac;

  struct { unsigned int first; unsigned int second; } stack_pair_3a0;

  unsigned int uStack_398;
  float fStack_394;
  int iStack_390;
  float afStack_38c [1];
  unsigned char auStack_380 [16];
  unsigned char auStack_370 [16];
  unsigned char auStack_360 [80];
  unsigned char auStack_310 [688];

  if (*(int *)(param_1 + 0x4c0) == 0) {
    fn_824FECB8(*(unsigned int *)(param_1 + 0xe10),auStack_380);
    puVar4 = (unsigned int *)((unsigned int)(auStack_360 + in_r0) & 0xfffffff0);
    *puVar4 = in_register_000104d0;
    puVar4[1] = in_register_000104d4;
    puVar4[2] = in_register_000104d8;
    puVar4[3] = in_vr77;
    puVar4 = (unsigned int *)((unsigned int)(auStack_380 + in_r0) & 0xfffffff0);
    *puVar4 = in_register_00010010;
    puVar4[1] = in_register_00010014;
    puVar4[2] = in_register_00010018;
    puVar4[3] = in_vr1;
    puVar4 = (unsigned int *)((unsigned int)(auStack_370 + in_r0) & 0xfffffff0);
    *puVar4 = in_register_00010020;
    puVar4[1] = in_register_00010024;
    puVar4[2] = in_register_00010028;
    puVar4[3] = in_vr2;
    fn_824FEDF8(auStack_380,auStack_310);
    fVar9 = lbl_82195530;
    pfVar12 = &fStack_3c4;
    lVar15 = 2;
    do {
      pfVar12[1] = 0.0;
      pfVar12 = pfVar12 + 2;
      *pfVar12 = fVar9;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    pfVar12 = &fStack_394;
    lVar15 = 2;
    do {
      pfVar12[1] = 0.0;
      pfVar12 = pfVar12 + 2;
      *pfVar12 = fVar9;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    pfVar12 = &fStack_3b4;
    lVar15 = 2;
    do {
      pfVar12[1] = 0.0;
      pfVar12 = pfVar12 + 2;
      *pfVar12 = fVar9;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    iVar8 = 0;
    iVar13 = 0;
    do {
      piVar3 = *(int **)(**(int **)(param_1 + 8) + iVar8);
      fn_823E8BD8(piVar3,auStack_310,&stack_pair_3a0.first);
      iVar10 = piVar3[4];
      iVar1 = *piVar3;
      *(float *)((int)afStack_38c + iVar13) = fStack_394;
      *(unsigned int *)((int)&stack_pair_3c0.second + iVar13) = stack_pair_3a0.second;
      *(unsigned int *)((int)&stack_pair_3c0.first + iVar13) = stack_pair_3a0.first;
      *(unsigned int *)((int)&iStack_390 + iVar13) = uStack_398;
      lVar15 = fn_822ABA88(*(unsigned int *)(iVar10 * 4 + iVar1),0);
      dVar16 = (double)fn_822C6F10(lVar15 + 0x80,lVar15 + 0xc0);
      iVar8 = iVar8 + 4;
      *(float *)((int)&stack_pair_3ac.first + iVar13) = (float)dVar16;
      *(int *)((int)&iStack_3b0 + iVar13) = (int)lVar15;
      fVar7 = lbl_821CA460;
      fVar9 = lbl_8218E2B0;
      iVar13 = iVar13 + 8;
    } while (iVar8 < 8);
    iVar13 = 0;
    iVar8 = 0;
    iVar10 = 0;
    piVar3 = (int *)**(int **)(param_1 + 0x20);
    lVar15 = 2;
    piVar2 = (int *)(*(int **)(param_1 + 0x20))[1];
    bVar14 = (piVar3[1] - *piVar3 >> 2 == 0) != (piVar2[1] - *piVar2 >> 2 == 0);
    do {
      bVar5 = iVar13 == 0;
      if (*(int *)(*(int *)((int)&stack_pair_3c0.first + iVar10) + 0x1ec) == 0) {
        fVar6 = fVar7;
        if ((bVar14) &&
           (piVar3 = *(int **)((unsigned int)bVar5 * 4 + *(int *)(param_1 + 0x20)),
           (piVar3[1] - *piVar3 & 0xfffffffcU) == 0)) {
          fVar6 = fVar9;
        }
        if ((&stack_pair_3ac.first)[(unsigned int)bVar5 * 2] * fVar6 < *(float *)((int)&stack_pair_3c0.second + iVar10)) {
          *(unsigned int *)((int)&stack_pair_3c0.first + iVar10) = 0;
        }
      }
      else {
        fVar6 = fVar7;
        if ((bVar14) &&
           (piVar3 = *(int **)(iVar8 + *(int *)(param_1 + 0x20)),
           (piVar3[1] - *piVar3 & 0xfffffffcU) == 0)) {
          fVar6 = fVar9;
        }
        if ((&stack_pair_3c0.second)[(unsigned int)bVar5 * 2] < *(float *)((int)&stack_pair_3c0.second + iVar10) * fVar6) {
          *(unsigned int *)((int)&stack_pair_3c0.first + iVar10) = 0;
          iVar1 = *(int *)((int)&iStack_390 + iVar10);
          if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1ec) == 0)) {
            *(int *)((int)&stack_pair_3c0.first + iVar10) = iVar1;
          }
        }
      }
      iVar13 = iVar13 + 1;
      iVar8 = iVar8 + 4;
      iVar10 = iVar10 + 8;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    iVar8 = fn_823D98B8(param_1,0);
    if (iVar8 == 0) {
      iVar8 = fn_823D98B8(param_1,1);
      iStack_3b0 = stack_pair_3c0.first;
      if (iVar8 != 0) {
        iStack_3b0 = 0;
        iStack_3b8 = stack_pair_3ac.second;
      }
    }
    else {
      iStack_3b8 = 0;
    }
    if (iStack_3b0 == 0) {
      uVar11 = 0xffffffff;
    }
    else {
      uVar11 = *(unsigned int *)(iStack_3b0 + 0x28);
    }
    *(unsigned int *)(param_2 + 0x40) = uVar11;
    if (iStack_3b8 == 0) {
      uVar11 = 0xffffffff;
    }
    else {
      uVar11 = *(unsigned int *)(iStack_3b8 + 0x28);
    }
    *(unsigned int *)(param_2 + 0x44) = uVar11;
    *(unsigned int *)(param_2 + 0x48) = 0xffffffff;
    if (((iStack_3b0 != 0) && (iStack_3b8 != 0)) &&
       (*(unsigned int *)(param_2 + 0x48) = 1, stack_pair_3c0.second < fStack_3b4)) {
      *(unsigned int *)(param_2 + 0x48) = 0;
    }
    stack_pair_3c0.first = 0;
    lVar15 = 0;
    stack_pair_3c0.second = 0.0;
    pfVar12 = &fStack_3c4;
    do {
      fn_822B4148(*(unsigned int *)(*(int *)(param_1 + 0x1c) + 8),lVar15);
      fVar9 = (float)fn_823D29A8();
      lVar15 = lVar15 + 1;
      pfVar12 = pfVar12 + 1;
      *pfVar12 = fVar9;
    } while ((int)lVar15 < 2);
    fn_823E7870(stack_pair_3c0.first,*(unsigned int *)**(unsigned int **)(param_1 + 8),0,0,param_2);
    fn_823E7870(stack_pair_3c0.second,*(unsigned int *)(**(int **)(param_1 + 8) + 4),0,0,param_2 + 0x20);
  }
  return;
}
