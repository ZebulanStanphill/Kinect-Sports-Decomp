extern unsigned int *auStack_70;
extern unsigned int *auStack_a0;
extern unsigned int fStack_4c;
extern unsigned int fStack_5c;
extern unsigned int fStack_ac;
extern unsigned int fStack_b0;
extern int fn_825268A8();
extern int fn_82544F40();
extern int fn_825462D0();
extern int fn_82547240();
extern int fn_82560690();
extern int fn_82576D30();
extern int fn_82576EE8();
extern int fn_82577000();
extern int fn_8257CA30();
extern int fn_8257CAB8();
extern int fn_8257DF30();
extern int fn_8258A818();
extern int fn_8258A880();
extern int fn_82590090();
extern int fn_82591A90();
extern int fn_825C46F8();
extern int fn_825C8058();
extern int fn_825CD470();
extern int fn_825CEB28();
extern int fn_825D9560();
extern int fn_825F2D00();
extern int fn_825F3A00();
extern int fn_825F3D30();
extern int fn_825F4738();
extern int fn_825F49C0();
extern int fn_825F4B40();
extern int fn_825F52E0();
extern int fn_82639EA8();
extern int fn_82639F28();
extern int fn_8263CBB0();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8320A898;
extern int (*lbl_8326B8FC)();
extern unsigned int lbl_8327F8A0;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_60;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


void fn_8258FC38(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int in_r0;
  int iVar3;
  double dVar4;
  unsigned int in_register_000104b0;
  unsigned int in_register_000104b4;
  unsigned int in_register_000104b8;
  unsigned int in_vr75;
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  unsigned int uStack_b8;
  unsigned int uStack_b4;
  float fStack_b0;
  float fStack_ac;
  unsigned char auStack_a0 [32];
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned char auStack_70 [16];
  unsigned int uStack_60;
  float fStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_50;
  float fStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  
  fStack_5c = ltcg_pool_0_0f;
  uStack_78 = *(unsigned int *)(param_1 + 0x44);
  dVar4 = (double)ltcg_pool_0_0f;
  uStack_80 = lbl_8327F8A0;
  puVar2 = (unsigned int *)((unsigned int)(auStack_70 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_000104b0;
  puVar2[1] = in_register_000104b4;
  puVar2[2] = in_register_000104b8;
  puVar2[3] = in_vr75;
  uStack_7c = 4;
  fStack_4c = fStack_5c;
  uStack_74 = (unsigned int)param_3;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0xffffffff;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0xffffffff;
  uVar1 = *(unsigned int *)(param_1 + 0x8ac);
  if ((param_2 & 0xffffffff) == 0) {
    fn_82590090(param_1,param_3);
    iVar3 = lbl_8320A898;
    *(unsigned int *)(lbl_8320A898 + 0x293c) = *(unsigned int *)(lbl_8320A898 + 0x293c) & 0xfffffff7;
    *(unsigned __int64 *)(iVar3 + 0x10) = *(unsigned __int64 *)(iVar3 + 0x10) | 0x40200;
    iVar3 = lbl_8320A898;
    *(unsigned int *)(lbl_8320A898 + 0x293c) = *(unsigned int *)(lbl_8320A898 + 0x293c) & 0xffffffef;
    *(unsigned __int64 *)(iVar3 + 0x10) = *(unsigned __int64 *)(iVar3 + 0x10) | 0x200;
    fn_8257CA30(param_1 + 0x78,&uStack_80);
    if ((*(int *)(param_1 + 0xd58) == 0) && (*(int *)(param_1 + 0x93c) != 0)) {
      fn_82576D30((double)*(float *)(param_1 + 0x828),*(int *)(param_1 + 0x93c),param_1);
    }
    fn_825D9560(param_1,param_3);
    fn_825F2D00(param_1,param_3);
    fn_825CEB28(param_1,param_3);
    fn_8258A818(*(unsigned int *)(param_1 + 0x8ac),param_3);
    fn_82639F28(lbl_8320A898,auStack_a0);
    fn_8257DF30(*(unsigned int *)(param_1 + 0xb8),&uStack_80,*(unsigned int *)(param_1 + 0x40),
                      auStack_a0);
    fn_8263CBB0(lbl_8320A898,1,0,0x40000000);
  }
  else if ((param_2 & 0xffffffff) == 1) {
    fn_82639F28(lbl_8320A898,&uStack_c0);
    fStack_ac = (float)dVar4;
    fStack_b0 = (float)lbl_821CA460;
    fn_82639EA8(lbl_8320A898,&uStack_c0);
    fn_8258A880(uVar1,param_3);
    iVar3 = lbl_8320A898;
    *(unsigned int *)(lbl_8320A898 + 0x494) = *(unsigned int *)(lbl_8320A898 + 0x494) | 0x18;
    *(unsigned __int64 *)(iVar3 + 0x18) = *(unsigned __int64 *)(iVar3 + 0x18) | 0x80000000;
    iVar3 = lbl_8320A898;
    *(unsigned int *)(lbl_8320A898 + 0x4ac) = *(unsigned int *)(lbl_8320A898 + 0x4ac) | 0x18;
    *(unsigned __int64 *)(iVar3 + 0x18) = *(unsigned __int64 *)(iVar3 + 0x18) | 0x40000000;
    fn_825F3A00(param_1,param_3);
    fn_82591A90(param_1,param_3);
    iVar3 = fn_82560690(0);
    if (iVar3 == 1) {
      fn_825CD470(param_1);
    }
    fn_825C46F8(param_1,param_3);
    if (*(int *)(param_1 + 0x93c) != 0) {
      fn_82576EE8((double)*(float *)(param_1 + 0x828));
    }
    if (lbl_8326B8FC != (int (**)())0x0) {
      (*lbl_8326B8FC)(param_1,1,param_3);
    }
  }
  else if ((param_2 & 0xffffffff) < 3) {
    dVar4 = (double)*(float *)(param_1 + 0x828);
    if (*(int *)(param_1 + 0x93c) != 0) {
      fn_82577000(dVar4,*(int *)(param_1 + 0x93c),param_2,param_3);
    }
    fn_825F3D30(dVar4,param_1,param_3);
    *(unsigned int *)(param_1 + 0xbac) = 0;
    *(unsigned int *)(param_1 + 0xbb0) = 0;
    fn_825C8058(param_1,param_3);
  }
  else if ((param_2 & 0xffffffff) == 3) {
    fn_825462D0(param_1,param_3);
    fn_825F4738(param_3);
    fn_825F49C0(*(unsigned int *)(param_1 + 0x408));
    fn_82547240(param_3);
  }
  else if ((param_2 & 0xffffffff) < 5) {
    fn_825F4B40(param_1);
    fStack_b0 = (float)dVar4;
    uStack_c0 = 0;
    uStack_bc = 0;
    uStack_b8 = 0x500;
    uStack_b4 = 0x2d0;
    fStack_ac = (float)lbl_821CA460;
    fn_82639EA8(lbl_8320A898,&uStack_c0);
    fn_8257CAB8(param_1 + 0x78,&uStack_80);
    fn_82544F40();
    iVar3 = lbl_8320A898;
    *(unsigned int *)(lbl_8320A898 + 0x2f14) = 0;
    *(unsigned int *)(iVar3 + 0x2934) = *(unsigned int *)(iVar3 + 0x2934) & 0xfffffffd;
    *(unsigned __int64 *)(iVar3 + 0x10) = *(unsigned __int64 *)(iVar3 + 0x10) | 0x20800;
    iVar3 = lbl_8320A898;
    *(float *)(lbl_8320A898 + 0x2904) = (float)dVar4;
    *(unsigned __int64 *)(iVar3 + 0x10) = *(unsigned __int64 *)(iVar3 + 0x10) | 0x8000000;
    fn_825268A8(0);
    iVar3 = lbl_8320A898;
    *(unsigned int *)(lbl_8320A898 + 0x2f14) = 1;
    *(unsigned int *)(iVar3 + 0x2934) =
         (-(unsigned int)(*(int *)(iVar3 + 0x3158) != 0) & 1) << 1 | *(unsigned int *)(iVar3 + 0x2934) & 0xfffffffd;
    *(unsigned __int64 *)(iVar3 + 0x10) = *(unsigned __int64 *)(iVar3 + 0x10) | 0x20800;
    fn_825F52E0();
  }
  else if ((((param_2 & 0xffffffff) == 5) && (*(int *)(param_1 + 0xd58) != 0)) &&
          (iVar3 = *(int *)(param_1 + 0x93c), iVar3 != 0)) {
    fStack_ac = fStack_5c;
    uStack_c0 = 0;
    uStack_bc = 0;
    uStack_b8 = 0x500;
    uStack_b4 = 0x2d0;
    fStack_b0 = (float)lbl_821CA460;
    fn_82639EA8(lbl_8320A898,&uStack_c0);
    fn_82576D30((double)*(float *)(param_1 + 0x828),iVar3,param_1);
  }
  return;
}

