typedef unsigned char bool;
#define true 1
#define false 0
#define NAN(x) ((x) != (x))
extern unsigned int *auStack_80;
extern unsigned int fStack_88;
extern unsigned int fStack_8c;
extern unsigned int fStack_90;
extern int fn_82250A18();
extern int fn_822C18B8();
extern int fn_822CD140();
extern int fn_82417FC0();
extern int fn_8241CE30();
extern int fn_8241CEB8();
extern int fn_825354B8();
extern int fn_82535F50();
extern int fn_82536288();
extern int fn_82539560();
extern int fn_82864898();
extern int fn_82864988();
extern unsigned int lbl_82005748;
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


void fn_824118B0(double param_1,int param_2)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  bool bVar5;
  bool bVar6;
  int in_r0;
  int iVar8;
  unsigned __int64 uVar7;
  int *piVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  int iVar12;
  unsigned __int64 uVar13;
  int *piVar14;
  double dVar15;
  double extraout_f1;
  double extraout_f1_00;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  unsigned int uVar21;
  unsigned int uVar22;
  unsigned int uVar23;
  int aiStack_b0 [4];
  struct { unsigned int first; unsigned int second; } stack_pair_a0;

  unsigned int uStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  unsigned char auStack_80 [128];
  
  iVar8 = *(int *)(param_2 + 0x2c);
  piVar9 = *(int **)(param_2 + 0x24);
  if (iVar8 == 0) {
    piVar14 = (int *)(*piVar9 + 0x14c4);
  }
  else if (iVar8 == 6) {
    piVar14 = (int *)(*piVar9 + 0x14c0);
  }
  else {
    iVar12 = *piVar9;
    if (*(int *)(param_2 + 0x88) == 0) {
      piVar14 = (int *)(iVar12 + 0x14b4);
    }
    else if (*(int *)(param_2 + 0x88) == 1) {
      piVar14 = (int *)(iVar12 + 0x14b8);
    }
    else {
      piVar14 = (int *)(iVar12 + 0x14bc);
    }
  }
  uVar13 = (unsigned __int64)*(unsigned int *)(*(int *)(param_2 + 0x28) + 0x380);
  uVar10 = 0;
  uVar11 = (unsigned __int64)*(unsigned int *)(*(int *)(param_2 + 0x28) + 900);
  dVar20 = (double)ltcg_pool_0_0f;
  bVar6 = true;
  if (((uVar13 == uVar11) || (iVar8 == 7)) || (iVar8 == 8)) {
    if (dVar20 < (double)*(float *)(param_2 + 0x10)) {
      dVar15 = (double)(float)((double)*(float *)(param_2 + 0x10) - param_1);
      bVar6 = true;
      dVar18 = -dVar15;
      dVar16 = dVar20;
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((dVar18 < dVar20) << 2) | (unsigned int)(NAN(dVar18) || NAN(dVar20)) << 2)
                    ) < 0.0) {
        dVar16 = dVar15;
      }
      *(float *)(param_2 + 0x10) = (float)dVar16;
      uVar13 = uVar10;
      if (dVar16 != dVar20) {
LAB_824119a8:
        bVar6 = false;
        uVar10 = uVar13;
      }
    }
  }
  else {
    for (; (uVar13 & 0xffffffff) < uVar11; uVar13 = uVar13 + 0xd0) {
      if ((*(unsigned int *)((int)uVar13 + 0x9c) & 1) != 0) goto LAB_824119a8;
    }
  }
  if (*(int *)(param_2 + 8) != 0) {
    if (*(int *)(param_2 + 0x284) == 0) {
      iVar8 = fn_8241CEB8(piVar9,param_2,0);
      param_1 = extraout_f1;
      if (iVar8 != 0) {
        *(unsigned int *)(param_2 + 0x284) = 1;
      }
    }
    else {
      iVar8 = fn_8241CEB8(piVar9,param_2,1);
      param_1 = extraout_f1_00;
      if (iVar8 != 0) {
        *(unsigned int *)(param_2 + 0x284) = 0;
      }
    }
  }
  if (((uVar10 & 0xffffffff) != 0) || (*(int *)(param_2 + 0x284) != 0)) {
    iVar8 = *(int *)(param_2 + 0xc) + 1;
    *(unsigned int *)(param_2 + 0x10) = *(unsigned int *)(**(int **)(param_2 + 0x24) + 0x8b8);
    iVar12 = *(int *)(**(int **)(param_2 + 0x24) + 0x8c0) + 1;
    if (iVar12 <= iVar8) {
      iVar8 = iVar12;
    }
    *(int *)(param_2 + 0xc) = iVar8;
  }
  uVar13 = (unsigned __int64)*(unsigned int *)(param_2 + 0x28);
  piVar9 = *(int **)(param_2 + 0x24);
  puVar3 = (unsigned int *)(*(unsigned int *)(param_2 + 0x28) + 0xe0 & 0xfffffff0);
  uVar21 = puVar3[1];
  uVar22 = puVar3[2];
  uVar23 = puVar3[3];
  puVar4 = (unsigned int *)((int)&fStack_90 + in_r0 & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar21;
  puVar4[2] = uVar22;
  puVar4[3] = uVar23;
  iVar8 = *piVar9;
  dVar16 = (double)*(float *)(iVar8 + 0x8bc);
  if (((dVar16 < ABS((double)fStack_90)) || (dVar16 < ABS((double)fStack_8c))) ||
     (bVar5 = false, dVar16 < ABS((double)fStack_88))) {
    bVar5 = true;
  }
  dVar17 = ABS((double)fStack_8c);
  dVar15 = ABS((double)fStack_90);
  dVar19 = ABS((double)fStack_88);
  dVar18 = (double)(float)(dVar15 - dVar17);
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((dVar18 < dVar20) << 2) | (unsigned int)(NAN(dVar18) || NAN(dVar20)) << 2)) <
      0.0) {
    dVar15 = dVar17;
  }
  dVar18 = (double)(float)(dVar15 - dVar19);
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((dVar18 < dVar20) << 2) | (unsigned int)(NAN(dVar18) || NAN(dVar20)) << 2)) <
      0.0) {
    dVar15 = dVar19;
  }
  if (*(int *)(param_2 + 0x1c) == 0) {
    if (bVar5) {
      if ((((*(int *)(iVar8 + 0x8b4) == 0) || (bVar6)) ||
          (*(int *)(param_2 + 0xc) <= *(int *)(iVar8 + 0x8c0))) && (*(int *)(param_2 + 0x284) == 0))
      {
        return;
      }
      *(unsigned int *)(param_2 + 0xc) = 0;
      stack_pair_a0.first = 0;
      stack_pair_a0.second = 0;
      uStack_98 = 0;
      *(int **)(param_2 + 0x20) = piVar14;
      *(unsigned int *)(param_2 + 0x1c) = 1;
      fStack_90 = 0.0;
      fStack_8c = 0.0;
      fStack_88 = 0.0;
      fn_82417FC0(piVar9,&stack_pair_a0.first);
      aiStack_b0[0] = *piVar14;
      piVar9 = (int *)fn_825354B8(aiStack_b0,uVar13 + 0x50,0,
                                        **(unsigned int **)(*piVar9 + 0x2b58),&fStack_90,&stack_pair_a0.first);
      fn_822C18B8(&stack_pair_a0.first);
      fn_822CD140(&fStack_90);
      *(int **)(param_2 + 0x18) = piVar9;
      dVar16 = (double)fn_82539560(dVar15,(double)*(float *)(**(int **)(param_2 + 0x24) + 0x8bc),
                                    (double)*(float *)(**(int **)(param_2 + 0x24) + 0x8c4),dVar20,
                                    (double)lbl_82005748);
      *(float *)(param_2 + 0x14) = (float)dVar16;
      if (piVar9 != (int *)0x0) {
        iVar8 = *piVar9;
        uVar7 = fn_82864988(auStack_80,0xffffffff821b8204);
        (**(int (***)())(iVar8 + 0x10))(dVar16,piVar9,uVar7);
        fn_82864898(auStack_80);
      }
      iVar8 = lbl_832975B0;
      if (lbl_832975B0 == 0) {
        iVar8 = fn_82250A18();
      }
      if (*(char *)(iVar8 + 4) == '\0') {
        return;
      }
      if (*(int *)(param_2 + 0x2c) == 0) {
        return;
      }
      fn_8241CE30(dVar20,*(unsigned int *)(param_2 + 0x24),param_2,0);
      return;
    }
  }
  else {
    if ((!bVar5) || (bVar6)) {
      *(float *)(param_2 + 0x14) =
           -(float)((double)*(float *)(iVar8 + 0x8c8) * param_1 - (double)*(float *)(param_2 + 0x14)
                   );
    }
    else {
      dVar16 = (double)fn_82539560(dVar15,dVar16,(double)*(float *)(iVar8 + 0x8c4),dVar20,
                                    (double)lbl_82005748);
      *(float *)(param_2 + 0x14) = (float)dVar16;
    }
    puVar3 = *(unsigned int **)(param_2 + 0x18);
    piVar9 = (int *)(param_2 + 0x18);
    if (dVar20 < (double)*(float *)(param_2 + 0x14)) {
      if (**(int **)(param_2 + 0x20) == *piVar14) {
        fn_82535F50(puVar3,uVar13 + 0x50);
      }
      else {
        if (puVar3 != (unsigned int *)0x0) {
          (**(int (***)())*puVar3)();
        }
        fn_82536288(piVar9);
        stack_pair_a0.first = 0;
        stack_pair_a0.second = 0;
        uStack_98 = 0;
        uVar1 = *(unsigned int *)(param_2 + 0x28);
        fStack_90 = 0.0;
        fStack_8c = 0.0;
        fStack_88 = 0.0;
        piVar2 = *(int **)(param_2 + 0x24);
        fn_82417FC0(piVar2,&stack_pair_a0.first);
        aiStack_b0[0] = *piVar14;
        iVar8 = fn_825354B8(aiStack_b0,(unsigned __int64)uVar1 + 0x50,0,
                                  **(unsigned int **)(*piVar2 + 0x2b58),&fStack_90,&stack_pair_a0.first);
        fn_822C18B8(&stack_pair_a0.first);
        fn_822CD140(&fStack_90);
        *piVar9 = iVar8;
        *(int **)(param_2 + 0x20) = piVar14;
      }
      piVar9 = (int *)*piVar9;
      dVar20 = (double)*(float *)(param_2 + 0x14);
      if (piVar9 == (int *)0x0) {
        return;
      }
      iVar8 = *piVar9;
      uVar7 = fn_82864988(auStack_80,0xffffffff821b8204);
      (**(int (***)())(iVar8 + 0x10))(dVar20,piVar9,uVar7);
      fn_82864898(auStack_80);
      return;
    }
    if (puVar3 != (unsigned int *)0x0) {
      (**(int (***)())*puVar3)();
    }
    fn_82536288(piVar9);
    iVar8 = lbl_832975B0;
    if (lbl_832975B0 == 0) {
      iVar8 = fn_82250A18();
    }
    if ((*(char *)(iVar8 + 4) != '\0') && (*(int *)(param_2 + 0x2c) != 0)) {
      fn_8241CE30(dVar20,*(unsigned int *)(param_2 + 0x24),param_2,1);
    }
    *(float *)(param_2 + 0x10) = (float)dVar20;
    *(unsigned int *)(param_2 + 0x1c) = 0;
  }
  *(unsigned int *)(param_2 + 0xc) = 0;
  return;
}

