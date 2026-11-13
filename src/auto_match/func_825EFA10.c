typedef struct { unsigned __int64 lo, hi; } V16;
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int fStack_68;
extern int fn_82544528();
extern int fn_825C7348();
extern int fn_825EF630();
extern int fn_826231D8();
extern int fn_82623338();
extern int fn_82631578();
extern int fn_82631920();
extern int fn_82637B30();
extern int fn_82637C50();
extern int fn_82637CE0();
extern int fn_82639380();
extern int fn_82639528();
extern int fn_82639EA8();
extern int fn_8263CBB0();
extern int fn_82F68CC0();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831C1CEC;
extern unsigned int lbl_8327F930;
extern unsigned int lbl_8327FA74;
extern unsigned int lbl_83282270;
extern unsigned int stack0x00000000;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_a0;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_825EFA10(int param_1)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  unsigned __int64 in_r0;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  int iVar8;
  unsigned char in_vr0 [16];
  unsigned char auVar9 [16];
  unsigned char in_vr12 [16];
  unsigned char in_vr13 [16];
  unsigned char auVar10 [16];
  unsigned __int64 uStack_a0;
  unsigned int uStack_98;
  unsigned int uStack_94;
  float fStack_68;

  uVar6 = ZEXT48(&stack0x00000000);
  piVar2 = *(int **)((*(unsigned int *)(*(int *)(param_1 + 4) + 0xaf0) % 3 + 5) * 4 + param_1);
  iVar1 = *piVar2;
  fn_82F68CC0(uVar6 - 0x90,*(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 4) + 0x90,0x40);
  fn_825C7348(3);
  uVar7 = fn_825C7348(2);
  fn_826231D8(piVar2,uVar7);
  fn_82639EA8(iVar1,((unsigned __int64)*(unsigned int *)(param_1 + 8) & 0x7fffff) * 0x200 +
                          (unsigned __int64)*(unsigned int *)(param_1 + 4) + 0x174);
  *(unsigned int *)(iVar1 + 0x2f14) = 1;
  *(unsigned int *)(iVar1 + 0x2934) =
       (-(unsigned int)(*(int *)(iVar1 + 0x3158) != 0) & 1) << 1 | *(unsigned int *)(iVar1 + 0x2934) & 0xfffffffd;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x20800;
  *(unsigned int *)(iVar1 + 0x2934) = *(unsigned int *)(iVar1 + 0x2934) & 0xfffffffb;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x800;
  uVar7 = fn_82637B30(iVar1,1);
  uVar7 = fn_82637C50(uVar7,8);
  uVar7 = fn_82637CE0(uVar7,0);
  *(unsigned int *)(iVar1 + 0x2ed8) = lbl_831C1CEC;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x80000;
  fn_82631920(uVar7,lbl_8327F930);
  *(unsigned int *)(iVar1 + 0x2f04) = 7;
  *(unsigned int *)(iVar1 + 0x28dc) =
       -(unsigned int)(*(int *)(iVar1 + 0x3148) != 0) & 7 | *(unsigned int *)(iVar1 + 0x28dc) & 0xfffffff0;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x2000000000;
  *(unsigned int *)(iVar1 + 0x2f18) = 1;
  *(unsigned int *)(iVar1 + 0x2934) =
       *(unsigned int *)(iVar1 + 0x2934) & 0xfffffffe | -(unsigned int)(*(int *)(iVar1 + 0x3158) != 0) & 1;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x20800;
  *(unsigned char *)(iVar1 + 0x2902) = 0x42;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x10000000;
  *(unsigned char *)(iVar1 + 0x2903) = 2;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x10000000;
  *(unsigned int *)(iVar1 + 0x2934) = *(unsigned int *)(iVar1 + 0x2934) & 0xffffc7ff;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x20800;
  *(unsigned int *)(iVar1 + 0x2934) = *(unsigned int *)(iVar1 + 0x2934) & 0xfffff8ff | 0x200;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x800;
  *(unsigned int *)(iVar1 + 0x2934) = *(unsigned int *)(iVar1 + 0x2934) & 0xfffe3fff;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x800;
  *(unsigned int *)(iVar1 + 0x2948) = *(unsigned int *)(iVar1 + 0x2948) & 0xfffffff8 | 6;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x40;
  *(unsigned int *)(iVar1 + 0x2934) = *(unsigned int *)(iVar1 + 0x2934) & 0xffffff8f | 0x30;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x20800;
  fn_82631578(iVar1,lbl_8327FA74);
  fStack_68 = fStack_68 + lbl_821CA460;
  uStack_a0 = CONCAT44(fStack_68,(((unsigned __int64)(uStack_a0) >> 32) & 0xFFFFFFFF));
  loadVectorLeftIndexed128(in_r0,uVar6 - 0xa0);
  loadVectorLeftIndexed128(in_r0,uVar6 - 0xac);{ V16 _vt0 = vectorRotateLeftImmediateMaskInsert128(in_vr13,in_vr0,4,3); memcpy(auVar10, &_vt0, 16); }
  loadVectorLeftIndexed128(in_r0,uVar6 - 0xb0);
  loadVectorLeftIndexed128(in_r0,uVar6 - 0x54);{ V16 _vt1 = vectorRotateLeftImmediateMaskInsert128(in_vr0,in_vr12,4,3); memcpy(auVar9, &_vt1, 16); }{ V16 _vt2 = vectorRotateLeftImmediateMaskInsert128(auVar10,auVar9,3,2); memcpy(auVar9, &_vt2, 16); }
  memcpy((void *)((const void *)((int)&uStack_a0 + (int)in_r0 & 0xfffffff0)), auVar9, 16);
  *(float *)(iVar1 + 0x1790) = fStack_68;
  *(unsigned int *)(iVar1 + 0x1794) = (((unsigned __int64)(uStack_a0) >> 32) & 0xFFFFFFFF);
  *(unsigned int *)(iVar1 + 0x1798) = uStack_98;
  *(unsigned int *)(iVar1 + 0x179c) = uStack_94;
  *(unsigned __int64 *)(iVar1 + 8) = *(unsigned __int64 *)(iVar1 + 8) | 0x8000000000000000;
  uVar7 = fn_82544528();
  fn_8263CBB0(iVar1,0,uVar7,0x80000000);
  uVar7 = fn_82639380(iVar1,0,0);
  uVar7 = fn_82639528(uVar7,0);
  *(unsigned int *)(iVar1 + 0x480) = *(unsigned int *)(iVar1 + 0x480) & 0xffffe3ff | 0x800;
  *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | 0x80000000;
  *(unsigned int *)(iVar1 + 0x480) = *(unsigned int *)(iVar1 + 0x480) & 0xffff1fff | 0x4000;
  *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | 0x80000000;
  fn_8263CBB0(uVar7,1,(&lbl_83282270)
                            [*(int *)(*(int *)(param_1 + 8) * 4 + *(int *)(param_1 + 0xc))],
                    0x40000000);
  *(unsigned int *)(iVar1 + 0x4ac) = *(unsigned int *)(iVar1 + 0x4ac) & 0xfffffffc;
  *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | 0x40000000;
  uVar7 = fn_82639380(iVar1,1,0);
  fn_82639528(uVar7,1);
  fVar5 = ltcg_pool_0_0f;
  *(unsigned int *)(iVar1 + 0x498) = *(unsigned int *)(iVar1 + 0x498) & 0xffffe3ff | 0x1800;
  *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | 0x40000000;
  *(unsigned int *)(iVar1 + 0x498) = *(unsigned int *)(iVar1 + 0x498) & 0xffff1fff | 0xc000;
  *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | 0x40000000;
  iVar8 = *(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 4);
  uStack_a0 = (unsigned __int64)*(unsigned int *)(iVar8 + 0x178);
  fVar4 = (float)uStack_a0;
  fVar3 = fVar5;
  if (*(int *)(param_1 + 8) == 1) {
    uStack_a0 = (unsigned __int64)*(unsigned int *)(iVar8 + 0x174);
    fVar3 = -(float)uStack_a0;
  }
  *(float *)(iVar1 + 0x1780) = -fVar4;
  *(float *)(iVar1 + 0x1784) = fVar5;
  *(float *)(iVar1 + 0x1788) = fVar5;
  *(float *)(iVar1 + 0x178c) = fVar3;
  *(unsigned __int64 *)(iVar1 + 8) = *(unsigned __int64 *)(iVar1 + 8) | 0x8000000000000000;
  fn_825EF630(param_1,iVar1);
  *(unsigned int *)(iVar1 + 0x2f18) = 0;
  *(unsigned int *)(iVar1 + 0x2934) = *(unsigned int *)(iVar1 + 0x2934) & 0xfffffffe;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x20800;
  uVar7 = fn_82637B30(iVar1,0);
  *(unsigned int *)(iVar1 + 0x2f04) = 0xf;
  *(unsigned int *)(iVar1 + 0x28dc) =
       *(unsigned int *)(iVar1 + 0x28dc) & 0xfffffff0 | -(unsigned int)(*(int *)(iVar1 + 0x3148) != 0) & 0xf;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x2000000000;
  uVar7 = fn_82637C50(uVar7,6);
  fn_82637CE0(uVar7,7);
  fn_82623338(piVar2);
  return;
}
