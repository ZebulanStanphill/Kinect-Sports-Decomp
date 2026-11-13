extern unsigned int *auStack_160;
extern unsigned int *auStack_1e0;
extern unsigned int *auStack_260;
extern unsigned int *auStack_2e0;
extern unsigned int *auStack_510;
extern unsigned int *auStack_520;
extern unsigned int *auStack_850;
extern int fn_82F111E8();
extern int fn_82F112E0();
extern int fn_82F117F0();
extern int fn_82F11878();
extern int fn_82F1A430();
extern int fn_82F691F0();
extern unsigned int iStack_958;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005730;
extern unsigned int lbl_820DA2C8;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000044;
extern unsigned int uStack_95c;
extern unsigned int uStack_960;


void fn_82F11938(int param_1,unsigned __int64 param_2,int param_3,int param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6,unsigned int param_7,unsigned __int64 param_8)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  unsigned int uStack0000001c;
  unsigned int uStack00000044;
  unsigned int in_stack_00000054;
  __int64 lStack_968;
  unsigned int uStack_960;
  struct { unsigned int first; int second; } stack_pair_95c;

  short asStack_950 [128];
  unsigned char auStack_850 [272];
  short asStack_740 [272];
  unsigned char auStack_520 [1];
  unsigned char auStack_510 [560];
  unsigned char auStack_2e0 [128];
  unsigned char auStack_260 [128];
  unsigned char auStack_1e0 [128];
  unsigned char auStack_160 [352];
  
  uStack0000001c = (unsigned int)param_2;
  uVar1 = *(unsigned int *)(param_1 + 0x2030);
  iVar6 = *(int *)(param_1 + 0x6d24) + param_4 * 0x34;
  if (param_3 == 0) {
    stack_pair_95c.second = 0x80;
    uVar12 = 0x10;
  }
  else {
    stack_pair_95c.second = 0x10;
    uVar12 = 0x20;
  }
  uStack00000044 = param_7;
  (**(int (***)())(param_1 + 0x9d8))(param_2,auStack_520,0x100);
  (**(int (***)())(param_1 + 0x1f88))(auStack_520,uVar12,asStack_740,0);
  dVar15 = (double)*(float *)(iVar6 + 0x30) * (double)(__int64)asStack_740[0];
  if ((double)*(float *)(iVar6 + 0x30) * (double)(__int64)asStack_740[0] * lbl_820DA2C8 <=
      lbl_82005710) {
    asStack_950[0] = (short)(int)(dVar15 * lbl_820DA2C8 - lbl_82005730);
  }
  else {
    asStack_950[0] = (short)(int)(dVar15 * lbl_820DA2C8 + lbl_82005730);
  }
  dVar15 = lbl_82005710;
  dVar17 = lbl_82005730;
  dVar18 = lbl_820DA2C8;
  fn_82F1A430(param_1,asStack_950,asStack_740,0x40,iVar6,0,0);
  fn_82F117F0(param_1,asStack_950,auStack_2e0,0x40,param_4);
  iVar5 = fn_82F11878(param_1,auStack_850,asStack_950,uVar1,0x40);
  uVar14 = (unsigned __int64)(iVar5 >> 1);
  fn_82F112E0(param_1,auStack_850,uVar14,param_5,param_6,param_8,&uStack_960,&stack_pair_95c.first);
  sVar4 = asStack_950[0];
  uVar13 = (unsigned __int64)asStack_950[0];
  (**(int (***)())(param_1 + 0x1f88))
            (auStack_510,uVar12,asStack_740,0,
             ((~uVar14 & 0xffffffff) >> 0x1f) + (unsigned __int64)(uVar14 < 2));
  dVar16 = (double)*(float *)(iVar6 + 0x30) * (double)(__int64)asStack_740[0];
  if ((double)*(float *)(iVar6 + 0x30) * (double)(__int64)asStack_740[0] * dVar18 <= dVar15) {
    asStack_950[0] = (short)(int)(dVar16 * dVar18 - dVar17);
  }
  else {
    asStack_950[0] = (short)(int)(dVar16 * dVar18 + dVar17);
  }
  fn_82F1A430(param_1,asStack_950,asStack_740,0x40,iVar6,0,0);
  fn_82F117F0(param_1,asStack_950,auStack_260,0x40,param_4);
  iVar5 = fn_82F11878(param_1,auStack_850,asStack_950,uVar1,0x40);
  uVar14 = (unsigned __int64)(iVar5 >> 1);
  uStack_960 = fn_82F111E8(param_1,auStack_850,uVar14,param_5,uVar13);
  uVar7 = ~(uVar14 ^ 1);
  stack_pair_95c.first = (unsigned int)asStack_950[0];
  uVar14 = ((uVar7 & 0xffffffff) >> 0x1f) + (unsigned __int64)(uVar14 < 2) & 1;
  if (in_stack_00000054 == 0) {
LAB_82f11c48:
    uVar10 = uVar13;
  }
  else {
    uVar9 = (int)param_8 - (int)sVar4;
    uVar8 = (int)param_8 - in_stack_00000054;
    uVar2 = (int)uVar9 >> 0x1f;
    uVar14 = (unsigned __int64)(int)uVar2;
    uVar3 = (int)uVar8 >> 0x1f;
    uVar7 = (unsigned __int64)(int)uVar3;
    uVar10 = (unsigned __int64)in_stack_00000054;
    if ((int)((uVar8 ^ uVar3) - uVar3) <= (int)((uVar9 ^ uVar2) - uVar2)) goto LAB_82f11c48;
  }
  if (uStack00000044 != 0) {
    uVar9 = (int)param_6 - (int)sVar4;
    uVar8 = (int)param_6 - uStack00000044;
    uVar2 = (int)uVar9 >> 0x1f;
    uVar14 = (unsigned __int64)(int)uVar2;
    uVar3 = (int)uVar8 >> 0x1f;
    uVar7 = (unsigned __int64)(int)uVar3;
    uVar11 = (unsigned __int64)uStack00000044;
    if ((int)((uVar9 ^ uVar2) - uVar2) < (int)((uVar8 ^ uVar3) - uVar3)) goto LAB_82f11c88;
  }
  uVar11 = uVar13;
LAB_82f11c88:
  (**(int (***)())(param_1 + 0x1f88))(auStack_520 + stack_pair_95c.second * 2,uVar12,asStack_740,0,uVar7,uVar14);
  dVar16 = (double)*(float *)(iVar6 + 0x30) * (double)(__int64)asStack_740[0];
  if ((double)*(float *)(iVar6 + 0x30) * (double)(__int64)asStack_740[0] * dVar18 <= dVar15) {
    iVar5 = (int)(dVar16 * dVar18 - dVar17);
    asStack_950[0] = (short)iVar5;
  }
  else {
    iVar5 = (int)(dVar16 * dVar18 + dVar17);
    asStack_950[0] = (short)iVar5;
  }
  lStack_968 = (__int64)iVar5;
  fn_82F1A430(param_1,asStack_950,asStack_740,0x40,iVar6,0,0);
  fn_82F117F0(param_1,asStack_950,auStack_1e0,0x40,param_4);
  iVar5 = fn_82F11878(param_1,auStack_850,asStack_950,uVar1,0x40);
  fn_82F112E0(param_1,auStack_850,iVar5 >> 1,param_5,uVar11,uVar10,&uStack_960,&lStack_968);
  uVar2 = (int)sVar4 - (int)asStack_950[0] >> 0x1f;
  uVar3 = (int)((int)sVar4 - stack_pair_95c.first) >> 0x1f;
  uVar13 = (__int64)asStack_950[0];
  if ((int)(((int)sVar4 - (int)asStack_950[0] ^ uVar2) - uVar2) <=
      (int)(((int)sVar4 - stack_pair_95c.first ^ uVar3) - uVar3)) {
    uVar13 = (unsigned __int64)stack_pair_95c.first;
  }
  (**(int (***)())(param_1 + 0x1f88))(auStack_520 + (stack_pair_95c.second + 8) * 2,uVar12,asStack_740,0);
  dVar16 = (double)*(float *)(iVar6 + 0x30) * (double)(__int64)asStack_740[0];
  if ((double)*(float *)(iVar6 + 0x30) * (double)(__int64)asStack_740[0] * dVar18 <= dVar15) {
    iVar5 = (int)(dVar16 * dVar18 - dVar17);
    asStack_950[0] = (short)iVar5;
  }
  else {
    iVar5 = (int)(dVar16 * dVar18 + dVar17);
    asStack_950[0] = (short)iVar5;
  }
  lStack_968 = (__int64)iVar5;
  fn_82F1A430(param_1,asStack_950,asStack_740,0x40,iVar6,0,0);
  fn_82F117F0(param_1,asStack_950,auStack_160,0x40,param_4);
  iVar6 = fn_82F11878(param_1,auStack_850,asStack_950,uVar1,0x40);
  uVar14 = (unsigned __int64)(iVar6 >> 1);
  uVar12 = fn_82F111E8(param_1,auStack_850,uVar14,param_5,uVar13);
  uVar13 = (~(uVar14 ^ 1) & 0xffffffff) >> 0x1f;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_520,0,0x200,uVar13,~(uVar14 ^ 1),uVar13 + (uVar14 < 2) & 1,asStack_950[0],
               uVar12);
}

