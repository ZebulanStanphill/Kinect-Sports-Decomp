extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int *auStack_50;
extern unsigned int fStack_54;
extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern unsigned int fStack_64;
extern unsigned int fStack_68;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern int fn_825279F8();
extern int fn_8253C548();
extern int fn_8255AA78();
extern int fn_82809D40();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_82195628;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_82444B90(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int in_r0;
  int iVar6;
  int iVar7;
  float *pfVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  unsigned int uVar19;
  unsigned int uVar20;
  unsigned int uVar21;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  unsigned char auStack_50 [56];
  
  iVar6 = fn_82F6A544();
  iVar6 = **(int **)(iVar6 + -4);
  if (iVar6 == 0) goto LAB_82444ee8;
  *(unsigned int *)(iVar6 + 0x894) = 0;
  puVar4 = (unsigned int *)(iVar6 + 0x50U & 0xfffffff0);
  uVar19 = puVar4[1];
  uVar20 = puVar4[2];
  uVar21 = puVar4[3];
  puVar5 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar5 = *puVar4;
  puVar5[1] = uVar19;
  puVar5[2] = uVar20;
  puVar5[3] = uVar21;
  iVar7 = fn_825279F8(iVar6);
  if (iVar7 == 0) {
    puVar4 = (unsigned int *)(iVar6 + 0xc0U & 0xfffffff0);
    uVar19 = puVar4[1];
    uVar20 = puVar4[2];
    uVar21 = puVar4[3];
    puVar5 = (unsigned int *)((int)&fStack_60 + in_r0 & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar19;
    puVar5[2] = uVar20;
    puVar5[3] = uVar21;
    dVar15 = (double)fStack_54;
    dVar9 = (double)lbl_821916FC;
    dVar18 = (double)fStack_60;
    dVar17 = (double)fStack_5c;
    dVar12 = (double)(float)((double)fStack_58 * dVar9);
    dVar13 = (double)(float)(dVar17 * dVar9);
    fVar1 = (float)(dVar18 * (double)(float)(dVar18 * dVar9));
    dVar11 = (double)(float)(dVar15 * (double)(float)(dVar18 * dVar9));
    fVar2 = (float)(dVar17 * dVar13);
    dVar10 = dVar15 * dVar12;
    dVar17 = dVar12 * dVar17 - dVar11;
    dVar14 = dVar13 * dVar18;
    dVar16 = (double)fStack_58 * dVar12;
    dVar13 = (double)(float)(dVar15 * dVar13 + (double)(float)(dVar12 * dVar18));
    dVar12 = (double)(lbl_821CA460 - (fVar2 + fVar1));
    dVar9 = dVar12 * dVar12 + (double)(float)(dVar13 * dVar13);
LAB_82444e3c:
    dVar17 = (double)(float)dVar17;
    dVar9 = (double)SQRT((float)dVar9);
    if (dVar9 <= (double)lbl_82195628) {
      dVar10 = (double)fn_82809D40(-(double)((float)dVar14 - (float)dVar10),
                                    (double)(lbl_821CA460 - ((float)dVar16 + fVar2)),dVar11);
      fStack_68 = (float)dVar10;
      dVar9 = (double)fn_82809D40(-dVar17,dVar9);
      fStack_70 = (float)dVar9;
      fStack_6c = ltcg_pool_0_0f;
    }
    else {
      dVar10 = (double)fn_82809D40((double)((float)dVar14 + (float)dVar10),
                                    (double)(lbl_821CA460 - ((float)dVar16 + fVar1)));
      fStack_68 = (float)dVar10;
      dVar9 = (double)fn_82809D40(-dVar17,dVar9);
      fStack_70 = (float)dVar9;
      dVar9 = (double)fn_82809D40(dVar13,dVar12);
      fStack_6c = (float)dVar9;
    }
  }
  else {
    if (*(int *)(iVar6 + 0x1b4) != 0) {
      puVar4 = (unsigned int *)(iVar6 + 0xc0U & 0xfffffff0);
      uVar19 = puVar4[1];
      uVar20 = puVar4[2];
      uVar21 = puVar4[3];
      puVar5 = (unsigned int *)((int)&fStack_60 + in_r0 & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar19;
      puVar5[2] = uVar20;
      puVar5[3] = uVar21;
      dVar17 = (double)fStack_5c;
      dVar15 = (double)fStack_54;
      dVar9 = (double)lbl_821916FC;
      dVar18 = (double)fStack_60;
      dVar12 = (double)(float)(dVar17 * dVar9);
      dVar13 = (double)(float)((double)fStack_58 * dVar9);
      fVar1 = (float)(dVar18 * (double)(float)(dVar18 * dVar9));
      dVar11 = (double)(float)(dVar15 * (double)(float)(dVar18 * dVar9));
      fVar2 = (float)(dVar17 * dVar12);
      dVar10 = dVar15 * dVar13;
      dVar17 = dVar13 * dVar17 - dVar11;
      dVar14 = dVar12 * dVar18;
      dVar16 = (double)fStack_58 * dVar13;
      dVar13 = (double)(float)(dVar15 * dVar12 + (double)(float)(dVar13 * dVar18));
      dVar12 = (double)(lbl_821CA460 - (fVar2 + fVar1));
      dVar9 = dVar12 * dVar12 + (double)(float)(dVar13 * dVar13);
      goto LAB_82444e3c;
    }
    iVar7 = *(int *)(iVar6 + 0x1b8);
    pfVar8 = (float *)fn_8255AA78(&fStack_60,*(unsigned __int64 *)(iVar7 + 0x10),
                                        *(unsigned __int64 *)(iVar7 + 0x18),*(unsigned __int64 *)(iVar7 + 0x20),
                                        *(unsigned __int64 *)(iVar7 + 0x28),*(unsigned __int64 *)(iVar7 + 0x30),
                                        *(unsigned __int64 *)(iVar7 + 0x38),*(unsigned __int64 *)(iVar7 + 0x40))
    ;
    fVar3 = pfVar8[1];
    puVar4 = (unsigned int *)(iVar6 + 0xc0U & 0xfffffff0);
    uVar19 = puVar4[1];
    uVar20 = puVar4[2];
    uVar21 = puVar4[3];
    puVar5 = (unsigned int *)((int)&fStack_70 + in_r0 & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar19;
    puVar5[2] = uVar20;
    puVar5[3] = uVar21;
    dVar14 = (double)fStack_68;
    dVar16 = (double)fStack_64;
    dVar9 = (double)lbl_821916FC;
    fStack_68 = pfVar8[2];
    dVar12 = (double)fStack_70;
    dVar11 = (double)fStack_6c;
    dVar17 = (double)(float)(dVar11 * dVar9);
    dVar10 = (double)(float)(dVar14 * dVar9);
    fVar1 = (float)(dVar12 * (double)(float)(dVar12 * dVar9));
    dVar9 = (double)(float)(dVar16 * (double)(float)(dVar12 * dVar9));
    dVar13 = (double)(float)(dVar10 * dVar11 - dVar9);
    fVar2 = (float)(dVar14 * dVar10);
    dVar18 = (double)(float)(dVar16 * dVar17 + (double)(float)(dVar10 * dVar12));
    dVar15 = (double)(lbl_821CA460 - ((float)(dVar11 * dVar17) + fVar1));
    dVar14 = (double)SQRT((float)(dVar15 * dVar15 + (double)(float)(dVar18 * dVar18)));
    fStack_70 = *pfVar8;
    fStack_6c = fVar3;
    if (dVar14 <= (double)lbl_82195628) {
      dVar9 = (double)fn_82809D40(-(double)((float)(dVar17 * dVar12) - (float)(dVar16 * dVar10)),
                                   (double)(lbl_821CA460 - (fVar2 + (float)(dVar11 * dVar17))),dVar9
                                  );
      dVar17 = (double)fn_82809D40(-dVar13,dVar14);
      dVar10 = (double)ltcg_pool_0_0f;
    }
    else {
      dVar9 = (double)fn_82809D40((double)((float)(dVar17 * dVar12) + (float)(dVar16 * dVar10)),
                                   (double)(lbl_821CA460 - (fVar2 + fVar1)));
      dVar17 = (double)fn_82809D40(-dVar13,dVar14);
      dVar10 = (double)fn_82809D40(dVar18,dVar15);
    }
    fStack_70 = (float)((double)fStack_70 + dVar17);
    fStack_6c = (float)((double)fStack_6c + dVar10);
    fStack_68 = (float)((double)fStack_68 + dVar9);
  }
  fn_8253C548(iVar6,auStack_50,&fStack_70);
LAB_82444ee8:
  fn_82F6A590();
  return;
}

