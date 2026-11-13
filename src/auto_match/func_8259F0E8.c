typedef unsigned char bool;
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_110;
extern unsigned int *auStack_150;
extern unsigned int *auStack_190;
extern unsigned int *auStack_d0;
extern int fn_82544870();
extern int fn_8259F6D8();
extern int fn_8259FC00();
extern int fn_8259FF68();
extern int fn_825A0430();
extern int fn_825A05B8();
extern int fn_825A06B8();
extern int fn_825A0B48();
extern int fn_825B2010();
extern int fn_8262FE50();
extern int fn_8262FEC8();
extern int fn_826312F0();
extern int fn_82631578();
extern int fn_82631C78();
extern int fn_82637B30();
extern int fn_82637BC0();
extern int fn_82637C50();
extern int fn_82637CE0();
extern int fn_82639EA8();
extern int fn_8263A1B8();
extern int fn_8263A508();
extern int fn_8263CBB0();
extern int fn_82F68CC0();
extern int fn_82F6A53C();
extern int fn_82F6A588();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_82192734;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831C0844;
extern unsigned int lbl_831C1DE4;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8326B2D4;
extern unsigned int lbl_8326B2D8;
extern unsigned int lbl_8326C1E0;
extern unsigned int lbl_8326C224;
extern unsigned int lbl_8326C228;
extern unsigned int lbl_8326C22C;
extern unsigned int lbl_8326C230;
extern unsigned int lbl_8326C234;
extern unsigned int lbl_8326C238;
extern unsigned int lbl_8327F970;
extern unsigned int lbl_8327F974;
extern unsigned int lbl_83297858;
extern unsigned int uRam8326c1e4;
extern unsigned int uRam8326c1e8;
extern unsigned int uRam8326c1ec;
extern unsigned int uStack_15c;
extern unsigned int uStack_160;
extern unsigned int uStack_164;
extern unsigned int uStack_168;
extern unsigned int uStack_16c;
extern unsigned int uStack_170;
extern unsigned int uStack_174;
extern unsigned int uStack_178;
extern unsigned int uStack_17c;
extern unsigned int uStack_180;
extern unsigned int uStack_198;
extern unsigned int uStack_1a0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8259F0E8(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  int in_r0;
  int iVar10;
  __int64 lVar8;
  unsigned __int64 uVar9;
  bool bVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  unsigned __int64 uStack_1a0;
  unsigned __int64 uStack_198;
  unsigned int auStack_190 [4];
  unsigned int uStack_180;
  unsigned int uStack_17c;
  unsigned int uStack_178;
  unsigned int uStack_174;
  unsigned int uStack_170;
  unsigned int uStack_16c;
  unsigned int uStack_168;
  unsigned int uStack_164;
  unsigned int uStack_160;
  unsigned int uStack_15c;
  unsigned char auStack_150 [64];
  unsigned char auStack_110 [64];
  unsigned char auStack_d0 [208];
  
  iVar10 = fn_82F6A53C();
  iVar5 = lbl_8320A898;
  if (param_2 == 0) {
    iVar1 = *(int *)(lbl_8320A898 + 0x3148);
    uStack_198 = (__int64)*(float *)(lbl_8320A898 + 0x3224);
    uStack_1a0 = ((((unsigned __int64)(uStack_1a0)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)(__int64)*(float *)(lbl_8320A898 + 0x3220))) & ((unsigned __int64)0xFFFFFFFF)) << 32));
    uStack_168 = (((unsigned __int64)(uStack_1a0) >> 32) & 0xFFFFFFFF);
    uStack_1a0 = ((((unsigned __int64)(uStack_1a0)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)(__int64)*(float *)(lbl_8320A898 + 0x3218))) & ((unsigned __int64)0xFFFFFFFF)) << 32));
    uStack_170 = (((unsigned __int64)(uStack_1a0) >> 32) & 0xFFFFFFFF);
    uStack_1a0 = (__int64)*(float *)(lbl_8320A898 + 0x321c);
    uStack_15c = *(unsigned int *)(lbl_8320A898 + 0x322c);
    uStack_160 = *(unsigned int *)(lbl_8320A898 + 0x3228);
    uStack_164 = (((unsigned __int64)(uStack_198) >> 32) & 0xFFFFFFFF);
    uStack_16c = (((unsigned __int64)(uStack_1a0) >> 32) & 0xFFFFFFFF);
    if (iVar1 != 0) {
      fn_8262FE50(iVar1);
    }
    iVar2 = *(int *)(iVar5 + 0x3158);
    if (iVar2 != 0) {
      fn_8262FE50(iVar2);
    }
    auStack_190[0] = 0;
    fn_826312F0(lbl_8320A898,0,auStack_190,1);
    lVar8 = fn_825B2010(*(unsigned int *)(iVar10 + 0x1ac));
    if (lVar8 != 0) {
      fn_825A06B8(iVar10,0,param_3,param_4,iVar5);
    }
    fn_82631C78(lbl_8320A898,0,0x10,0x70);
    dVar18 = (double)ltcg_pool_0_0f;
    uStack_1a0 = CONCAT44(ltcg_pool_0_0f,ltcg_pool_0_0f);
    uStack_198 = CONCAT44(lbl_821916FC,lbl_821916FC);
    if (lbl_831C0844 == 0) {
      uVar9 = fn_8259F6D8(auStack_d0,iVar5,param_3,&uStack_1a0,&uStack_198);
      fn_82F68CC0(auStack_150,uVar9,0x34);
      fn_8259FF68(0,iVar5,param_3,param_4,auStack_150,0);
      fn_8263A1B8(lbl_8320A898,0,iVar1);
      fn_8263A508(lbl_8320A898,iVar2);
      uVar3 = lbl_8327F970;
      if (lbl_831C1DE4 != 0) {
        fn_825A0B48(iVar10,0,param_3,auStack_150,iVar5);
        uVar3 = lbl_8327F970;
      }
    }
    else {
      fn_8263A508(iVar5,0);
      fn_8263A1B8(iVar5,0,lbl_8326B2D4);
      fn_8259FC00(iVar5,param_3,0xffffffff8326b1d0);
      fn_8263A1B8(iVar5,0,lbl_8326B2D8);
      fn_8259FC00(iVar5,0xffffffff8326b1d0,0xffffffff8326b204);
      fn_8259FF68(0,iVar5,param_3,param_4,0xffffffff8326b204,0xffffffff8326b1d0);
      fn_8263A1B8(lbl_8320A898,0,iVar1);
      fn_8263A508(lbl_8320A898,iVar2);
      uVar3 = lbl_8327F974;
      if (lbl_831C1DE4 != 0) {
        fn_825A0B48(iVar10,0,param_3,0xffffffff8326b204,iVar5);
        uVar3 = lbl_8327F974;
      }
    }
    fn_82631578(iVar5,uVar3);
    uVar7 = uRam8326c1ec;
    uVar6 = uRam8326c1e8;
    uVar3 = uRam8326c1e4;
    dVar14 = (double)lbl_8326C22C;
    dVar12 = (double)(float)((double)lbl_8326C230 - dVar14);
    puVar4 = (unsigned int *)((int)&uStack_180 + in_r0 & 0xfffffff0);
    *puVar4 = lbl_8326C1E0;
    puVar4[1] = uVar3;
    puVar4[2] = uVar6;
    puVar4[3] = uVar7;
    dVar15 = dVar18;
    dVar16 = dVar18;
    if (dVar18 < ABS(dVar12)) {
      dVar15 = -(double)(float)(dVar14 / dVar12);
      dVar16 = (double)(float)((double)lbl_82192734 / dVar12);
    }
    dVar13 = (double)(float)((double)lbl_8326C238 - (double)lbl_8326C234);
    dVar12 = dVar18;
    dVar14 = dVar18;
    if (dVar18 < ABS(dVar13)) {
      dVar12 = -(double)(float)((double)lbl_8326C234 / dVar13);
      dVar14 = (double)(float)((double)lbl_82192734 / dVar13);
    }
    dVar17 = (double)lbl_8326C224;
    dVar13 = (double)lbl_8326C228;
    fn_82544870(auStack_110);
    fn_8263CBB0(lbl_8320A898,3,auStack_110,0x10000000);
    iVar10 = lbl_8320A898;
    bVar11 = lbl_83297858 != '\0';
    *(unsigned int *)(lbl_8320A898 + 0x4c8) = *(unsigned int *)(lbl_8320A898 + 0x4c8) & 0xffffe3ff | 0x800;
    *(unsigned __int64 *)(iVar10 + 0x18) = *(unsigned __int64 *)(iVar10 + 0x18) | 0x10000000;
    iVar10 = lbl_8320A898;
    *(unsigned int *)(lbl_8320A898 + 0x4c8) = *(unsigned int *)(lbl_8320A898 + 0x4c8) & 0xffff1fff | 0x4000;
    *(unsigned __int64 *)(iVar10 + 0x18) = *(unsigned __int64 *)(iVar10 + 0x18) | 0x10000000;
    iVar10 = lbl_8320A898;
    *(unsigned int *)(lbl_8320A898 + 0x4c8) = *(unsigned int *)(lbl_8320A898 + 0x4c8) & 0xfff8ffff | 0x20000;
    *(unsigned __int64 *)(iVar10 + 0x18) = *(unsigned __int64 *)(iVar10 + 0x18) | 0x10000000;
    *(float *)(iVar5 + 0x23b0) = (float)dVar16;
    *(float *)(iVar5 + 0x23b4) = (float)dVar15;
    *(float *)(iVar5 + 0x23b8) = (float)dVar14;
    *(float *)(iVar5 + 0x23bc) = (float)dVar12;
    *(unsigned __int64 *)(iVar5 + 8) = *(unsigned __int64 *)(iVar5 + 8) | 0x8000;
    *(float *)(iVar5 + 0x23c0) = (float)dVar17;
    *(float *)(iVar5 + 0x23c4) = (float)dVar13;
    *(float *)(iVar5 + 0x23c8) = (float)dVar18;
    *(float *)(iVar5 + 0x23cc) = (float)dVar18;
    *(unsigned __int64 *)(iVar5 + 8) = *(unsigned __int64 *)(iVar5 + 8) | 0x4000;
    *(unsigned int *)(iVar5 + 0x23d0) = uStack_180;
    *(unsigned int *)(iVar5 + 0x23d4) = uStack_17c;
    *(unsigned int *)(iVar5 + 0x23d8) = uStack_178;
    *(unsigned int *)(iVar5 + 0x23dc) = uStack_174;
    *(unsigned __int64 *)(iVar5 + 8) = *(unsigned __int64 *)(iVar5 + 8) | 0x4000;
    *(unsigned int *)(iVar5 + 0x29c0) = *(unsigned int *)(iVar5 + 0x29c0) & 0xfffffffe | (unsigned int)bVar11;
    *(unsigned __int64 *)(iVar5 + 0x20) = *(unsigned __int64 *)(iVar5 + 0x20) | 0x800000000;
    if ((int)lVar8 != 0) {
      fn_82637C50(lbl_8320A898,1);
      fn_82637CE0(lbl_8320A898);
      fn_82637BC0(lbl_8320A898,0);
      fn_82637B30(lbl_8320A898,1);
    }
    fn_825A0430(&uStack_1a0,&uStack_198,iVar5);
    if ((int)lVar8 != 0) {
      fn_82637C50(lbl_8320A898,6);
      fn_82637CE0(lbl_8320A898,7);
      fn_82637B30(lbl_8320A898,0);
    }
    fn_82639EA8(lbl_8320A898,&uStack_170);
    fn_825A05B8(iVar5);
    fn_82631C78(lbl_8320A898,0,0x20,0x60);
    if (iVar1 != 0) {
      fn_8262FEC8(iVar1);
    }
    if (iVar2 != 0) {
      fn_8262FEC8(iVar2);
    }
  }
  fn_82F6A588();
  return;
}

