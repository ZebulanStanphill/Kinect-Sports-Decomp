typedef unsigned char bool;
#define false 0
extern unsigned int *auStack_100;
extern unsigned int *auStack_110;
extern unsigned int *auStack_120;
extern unsigned int *auStack_130;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern unsigned int fStack_98;
extern unsigned int fStack_a0;
extern unsigned int fStack_f0;
extern int fn_82264048();
extern int fn_822ABA88();
extern int fn_82359698();
extern int fn_8236A100();
extern int fn_8236A360();
extern int fn_8236C428();
extern int fn_8236C760();
extern int fn_823C2148();
extern int fn_823D8598();
extern int fn_823D8960();
extern int fn_823D8C90();
extern int fn_823D9D60();
extern int fn_823E8210();
extern int fn_824FE498();
extern int fn_824FFDC8();
extern int fn_825354B8();
extern int fn_82536288();
extern int fn_8288B760();
extern int memcpy();
extern unsigned int lbl_82196750;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831D1918;
extern unsigned int lbl_83276554;
extern unsigned int uStack_9c;
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;
extern unsigned int uStack_ea;
extern unsigned int uStack_eb;
extern unsigned int uStack_ec;


void fn_823CDF08(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,char *param_5,
                  unsigned int param_6,int param_7,char param_8)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned int uVar6;
  int *piVar7;
  int *piVar9;
  __int64 lVar8;
  int iVar10;
  bool bVar11;
  double dVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  int aiStack_140;
  unsigned char auStack_130 [16];
  unsigned char auStack_120 [16];
  unsigned char auStack_110 [16];
  unsigned char auStack_100 [16];
  float fStack_f0;
  unsigned char uStack_ec;
  unsigned char uStack_eb;
  unsigned char uStack_ea;
  unsigned int uStack_e8;
  unsigned int uStack_e4;
  unsigned char auStack_e0 [32];
  unsigned char auStack_c0 [16];
  unsigned char auStack_b0 [16];
  float fStack_a0;
  unsigned int uStack_9c;
  float fStack_98;
  
  *(unsigned char *)(param_1 + 0xd84) = 1;
  fn_8236C760();
  if (*(int *)(param_1 + 0x4c0) == 0) {
    uVar4 = fn_823D9D60(param_1,0);
    fn_823D9D60(uVar4,1);
    fn_823E8210(param_7,*(unsigned int *)(param_1 + 8),param_1 + 0xc,param_1 + 0x1090);
  }
  fn_824FE498(*(unsigned int *)(param_1 + 0xe10));
  fn_8236C428(param_1);
  iVar5 = *(int *)(param_4 + 0x10);
  puVar1 = (unsigned int *)((unsigned int)(auStack_120 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  puVar1 = (unsigned int *)((unsigned int)(auStack_110 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  puVar1 = (unsigned int *)((unsigned int)(auStack_100 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  puVar1 = (unsigned int *)((unsigned int)(auStack_c0 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  puVar1 = (unsigned int *)((unsigned int)(auStack_b0 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  dVar12 = (double)ltcg_pool_0_0f;
  uStack_9c = 0;
  puVar1 = (unsigned int *)((unsigned int)(&lbl_82196750 + in_r0) & 0xfffffff0);
  uVar13 = puVar1[1];
  uVar14 = puVar1[2];
  uVar15 = puVar1[3];
  uStack_ec = 0;
  fStack_a0 = ltcg_pool_0_0f;
  uStack_eb = 0;
  fStack_98 = ltcg_pool_0_0f;
  uStack_ea = 0;
  fStack_f0 = ltcg_pool_0_0f;
  uStack_e8 = 0;
  uStack_e4 = 3;
  puVar2 = (unsigned int *)((unsigned int)(auStack_e0 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar13;
  puVar2[2] = uVar14;
  puVar2[3] = uVar15;
  if (iVar5 == 0) {
    fn_823D8960(param_1,param_2,param_3,param_4,param_5,*(unsigned char *)(param_7 + 0xc),auStack_120
                  ,auStack_e0);
  }
  else if (iVar5 == 1) {
    fn_823D8C90(param_4,param_5,auStack_120,auStack_e0);
  }
  fn_823D8598(auStack_130,param_1,param_2,param_3,auStack_120);
  memcpy(param_1 + 0xd90,auStack_e0,0x50);
  *(unsigned int *)(param_1 + 0xde4) = *(unsigned int *)(param_4 + 0x14);
  uVar13 = *(unsigned int *)(param_4 + 0x18);
  *(float *)(param_1 + 0xde8) = (float)dVar12;
  *(unsigned int *)(param_1 + 0xde0) = uVar13;
  *(unsigned int *)(param_1 + 0xdf0) = param_6;
  *(unsigned int *)(param_1 + 0xdec) = ((unsigned int)LZCOUNT(*(unsigned int *)(param_4 + 0x10)) >> 5 ^ 1) + 0xe;
  fn_82359698(param_1,2);
  if (*(int *)(param_4 + 0x1c) == 2) {
    iVar5 = 0xb;
  }
  else {
    iVar5 = (-(unsigned int)(*(int *)(param_4 + 0x1c) == 1) & 0xb) + 1;
  }
  iVar10 = (int)param_3;
  if (((iVar5 != *(int *)(param_1 + 0x41c)) || (iVar10 != *(int *)(param_1 + 0x420))) ||
     ((int)param_2 != *(int *)(param_1 + 0x420))) {
    *(float *)(param_1 + 0x428) = (float)dVar12;
    *(int *)(param_1 + 0x41c) = iVar5;
    *(int *)(param_1 + 0x420) = iVar10;
    *(int *)(param_1 + 0x424) = (int)param_2;
  }
  if (*(int *)(param_4 + 0x1c) == 1) {
    if (*param_5 == '\0') {
      piVar9 = (int *)(param_1 + 0x103c);
      if (piVar9 == (int *)0x0) {
        bVar11 = false;
      }
      else {
        bVar11 = *piVar9 != 0;
      }
      if (bVar11) {
        aiStack_140 = *piVar9;
        puVar2 = (unsigned int *)(*(int *)(param_1 + 0xe10) + 0x50U & 0xfffffff0);
        uVar13 = puVar2[1];
        uVar14 = puVar2[2];
        uVar15 = puVar2[3];
        puVar1 = *(unsigned int **)(param_1 + 0xfe0);
        puVar3 = (unsigned int *)((unsigned int)(auStack_130 + in_r0) & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar13;
        puVar3[2] = uVar14;
        puVar3[3] = uVar15;
        aiStack_140 =
             fn_825354B8(&aiStack_140,auStack_130,0,*puVar1,0xffffffff83296bc0,
                               0xffffffff83296bd0);
        fn_82536288(&aiStack_140);
      }
    }
    if (lbl_831D1918 != 0) {
      piVar9 = *(int **)(*(int *)(param_4 + 0x18) * 4 + **(int **)(param_1 + 8));
      piVar7 = *(int **)((int)((param_3 & 0xffffffff) << 2) + **(int **)(param_1 + 8));
      fn_822ABA88(*(unsigned int *)(piVar9[4] * 4 + *piVar9),*(unsigned int *)(param_4 + 0x14));
      fn_822ABA88(*(unsigned int *)(piVar7[4] * 4 + *piVar7),param_2);
      iVar5 = fn_822ABA88(*(unsigned int *)(piVar7[4] * 4 + *piVar7));
      fn_82264048(lbl_83276554,*(int *)(iVar5 + 0x24) != 0);
    }
    goto LAB_823ce304;
  }
  fn_8236A360(param_1,2);
  if (*param_5 != '\0') goto LAB_823ce304;
  piVar9 = *(int **)(**(int **)(param_1 + 8) + (int)((param_3 & 0xffffffff) << 2));
  iVar5 = fn_822ABA88(*(unsigned int *)(piVar9[4] * 4 + *piVar9),param_2);
  if (*(int *)(iVar5 + 0x24) == 0) {
LAB_823ce2e8:
    lVar8 = 0;
  }
  else {
    if (*(int *)(iVar5 + 0x168) == 0) {
      uVar6 = *(unsigned int *)(iVar5 + 0x16c);
    }
    else {
      uVar6 = fn_8288B760();
      uVar6 = uVar6 & 0xff;
    }
    lVar8 = 1;
    if (uVar6 == 0) goto LAB_823ce2e8;
  }
  fn_8236A100(param_1,(lVar8 + -1) - (lVar8 + -2 + (unsigned __int64)(lVar8 + -1 == 0)));
LAB_823ce304:
  uVar13 = *(unsigned int *)(param_1 + 0xe10);
  fn_824FFDC8(uVar13,0,0);
  fn_824FFDC8(uVar13,1,0);
  fn_824FFDC8(*(unsigned int *)(param_1 + 0xe10),0,1);
  if ((*(int *)(param_4 + 0x1c) == 1) && (lbl_831D1918 != 0)) {
    piVar9 = *(int **)(*(int *)(param_4 + 0x18) * 4 + **(int **)(param_1 + 8));
    piVar7 = *(int **)((int)((param_3 & 0xffffffff) << 2) + **(int **)(param_1 + 8));
    fn_822ABA88(*(unsigned int *)(piVar9[4] * 4 + *piVar9),*(unsigned int *)(param_4 + 0x14));
    fn_822ABA88(*(unsigned int *)(piVar7[4] * 4 + *piVar7),param_2);
    iVar5 = fn_822ABA88(*(unsigned int *)(piVar7[4] * 4 + *piVar7));
    fn_82264048(lbl_83276554,*(int *)(iVar5 + 0x24) != 0);
  }
  if (param_8 != '\0') {
    iVar5 = iVar10 * 0x84 + *(int *)(param_1 + 0x4bc);
    *(int *)(iVar5 + 0x3c) = *(int *)(iVar5 + 0x3c) + 1;
  }
  fn_823C2148(param_1,0,1);
  return;
}

