#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_30;
extern int fn_825AFF08();
extern int fn_828F3E40();
extern unsigned int iStack_40;
extern unsigned int lbl_821C65D0;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831C0768;
extern unsigned int lbl_831C076C;
extern unsigned int lbl_8326C070;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;


void fn_82590AE0(double param_1)

{
  unsigned int *puVar1;
  float *pfVar2;
  int *piVar3;
  int *piVar4;
  float *pfVar5;
  unsigned __int64 uVar6;
  int in_r0;
  int iVar7;
  __int64 lVar8;
  unsigned int uVar9;
  float fVar10;
  unsigned int uVar11;
  float fVar12;
  unsigned int uVar13;
  float fVar14;
  unsigned int uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  unsigned int in_register_00010450;
  unsigned int in_register_00010454;
  unsigned int in_register_00010458;
  unsigned int in_vr69;
  int aiStack_60 [4];
  int aiStack_50 [4];
  int iStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned char auStack_30 [24];
  
  puVar1 = (unsigned int *)((unsigned int)(&lbl_8326C070 + in_r0) & 0xfffffff0);
  uVar9 = *puVar1;
  uVar11 = puVar1[1];
  uVar13 = puVar1[2];
  uVar15 = puVar1[3];
  puVar1 = (unsigned int *)((int)aiStack_50 + in_r0 & 0xfffffff0);
  *puVar1 = uVar9;
  puVar1[1] = uVar11;
  puVar1[2] = uVar13;
  puVar1[3] = uVar15;
  puVar1 = (unsigned int *)((int)&iStack_40 + in_r0 & 0xfffffff0);
  *puVar1 = uVar9;
  puVar1[1] = uVar11;
  puVar1[2] = uVar13;
  puVar1[3] = uVar15;
  fn_825AFF08((double)(float)((double)lbl_831C0768 * param_1),aiStack_50);
  fn_825AFF08((double)(float)((double)lbl_831C076C * param_1),&iStack_40);
  uVar9 = ltcg_pool_0_0f;
  aiStack_60[3] = ltcg_pool_0_0f;
  aiStack_50[3] = ltcg_pool_0_0f;
  uVar6 = CONCAT44(aiStack_50[2],ltcg_pool_0_0f);
  puVar1 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010450;
  puVar1[1] = in_register_00010454;
  puVar1[2] = in_register_00010458;
  puVar1[3] = in_vr69;
  aiStack_60[0] = iStack_40;
  aiStack_60[1] = uStack_3c;
  aiStack_60[2] = uStack_38;
  fn_828F3E40(4,auStack_30,CONCAT44(aiStack_50[0],aiStack_50[1]),uVar6,
                    CONCAT44(iStack_40,uStack_3c),CONCAT44(uStack_38,uVar9),0xffffffff8326c080,
                    0xffffffff8326c0c0);
  lVar8 = 3;
  iVar7 = 0;
  pfVar2 = (float *)((unsigned int)(&lbl_821C65D0 + in_r0) & 0xfffffff0);
  fVar10 = *pfVar2;
  fVar12 = pfVar2[1];
  fVar14 = pfVar2[2];
  fVar16 = pfVar2[3];
  do {
    piVar3 = (int *)((int)aiStack_60 + iVar7);
    piVar4 = (int *)((int)aiStack_50 + iVar7);
    iVar7 = iVar7 + 4;
    pfVar2 = (float *)(in_r0 + *piVar3 & 0xfffffff0);
    fVar17 = pfVar2[1];
    fVar18 = pfVar2[2];
    fVar19 = pfVar2[3];
    pfVar5 = (float *)(in_r0 + *piVar4 & 0xfffffff0);
    *pfVar5 = fVar10 * *pfVar2;
    pfVar5[1] = fVar12 * fVar17;
    pfVar5[2] = fVar14 * fVar18;
    pfVar5[3] = fVar16 * fVar19;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  return;
}

