extern unsigned int *auStack_2a0;
extern unsigned int *auStack_700;
extern unsigned int *auStack_810;
extern int fn_82F112E0();
extern int fn_82F117F0();
extern int fn_82F11878();
extern int fn_82F1A430();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005730;
extern unsigned int lbl_820DA2C8;


unsigned __int64 fn_82F125F0(int param_1,int param_2,unsigned __int64 param_3,int param_4,int param_5,
                       int param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  int iVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  short *psVar9;
  short *psVar10;
  unsigned char *pbVar11;
  unsigned char *pbVar12;
  unsigned char *pbVar13;
  unsigned char *pbVar14;
  unsigned char *pbVar15;
  unsigned char *pbVar16;
  unsigned char *pbVar17;
  int iVar18;
  short *psVar19;
  unsigned char *pbVar20;
  unsigned __int64 uVar21;
  int iVar22;
  __int64 lVar23;
  double dVar24;
  double dVar25;
  int *in_stack_00000054;
  int *in_stack_0000005c;
  int *in_stack_00000064;
  __int64 lStack_920;
  int aiStack_918 [2];
  short asStack_910 [128];
  unsigned char auStack_810 [272];
  unsigned char auStack_700 [576];
  short asStack_4c0 [264];
  short asStack_2b0 [8];
  unsigned char auStack_2a0 [672];
  
  uVar3 = *(unsigned int *)(param_1 + 0x2030);
  iVar22 = 0;
  iVar18 = *(int *)(param_1 + 0x6d24) + param_5 * 0x34;
  (**(int (***)())(param_1 + 0x1f88))(param_3,param_4,asStack_4c0,0);
  dVar24 = (double)*(float *)(iVar18 + 0x30);
  dVar25 = dVar24 * (double)(__int64)asStack_4c0[0];
  if (dVar24 * (double)(__int64)asStack_4c0[0] * lbl_820DA2C8 <= lbl_82005710) {
    iVar1 = (int)(dVar25 * lbl_820DA2C8 - lbl_82005730);
    asStack_910[0] = (short)iVar1;
  }
  else {
    iVar1 = (int)(dVar25 * lbl_820DA2C8 + lbl_82005730);
    asStack_910[0] = (short)iVar1;
  }
  lStack_920 = (__int64)iVar1;
  fn_82F1A430(param_1,asStack_910,asStack_4c0,0x40,iVar18,0,0);
  fn_82F117F0(param_1,asStack_910,auStack_700,0x40,param_5);
  iVar18 = fn_82F11878(param_1,auStack_810,asStack_910,uVar3,0x40);
  uVar21 = (unsigned __int64)(iVar18 >> 1);
  fn_82F112E0(param_1,auStack_810,uVar21,param_6,param_7,param_8,aiStack_918,&lStack_920);
  (**(int (***)())(param_1 + 0x1f98))(auStack_2a0,auStack_700,8,0xff);
  (**(int (***)())(param_1 + 0x9d4))(auStack_2a0,auStack_2a0,0x40);
  pbVar20 = (unsigned char *)(param_2 + 6);
  psVar19 = asStack_2b0;
  lVar23 = 8;
  do {
    psVar4 = psVar19 + 0xe;
    psVar5 = psVar19 + 0xf;
    psVar6 = psVar19 + 10;
    psVar7 = psVar19 + 0xd;
    psVar8 = psVar19 + 0xc;
    psVar9 = psVar19 + 0xb;
    psVar10 = psVar19 + 9;
    psVar19 = psVar19 + 8;
    pbVar11 = pbVar20 + -6;
    bVar2 = *pbVar20;
    pbVar12 = pbVar20 + -3;
    pbVar13 = pbVar20 + -5;
    pbVar14 = pbVar20 + -4;
    pbVar15 = pbVar20 + -2;
    pbVar16 = pbVar20 + -1;
    pbVar17 = pbVar20 + 1;
    pbVar20 = pbVar20 + param_4;
    iVar22 = ((int)*psVar4 - (unsigned int)bVar2) * ((int)*psVar4 - (unsigned int)bVar2) +
             ((int)*psVar19 - (unsigned int)*pbVar11) * ((int)*psVar19 - (unsigned int)*pbVar11) +
             ((int)*psVar10 - (unsigned int)*pbVar13) * ((int)*psVar10 - (unsigned int)*pbVar13) +
             ((int)*psVar6 - (unsigned int)*pbVar14) * ((int)*psVar6 - (unsigned int)*pbVar14) +
             ((int)*psVar9 - (unsigned int)*pbVar12) * ((int)*psVar9 - (unsigned int)*pbVar12) +
             ((int)*psVar8 - (unsigned int)*pbVar15) * ((int)*psVar8 - (unsigned int)*pbVar15) +
             ((int)*psVar7 - (unsigned int)*pbVar16) * ((int)*psVar7 - (unsigned int)*pbVar16) +
             ((int)*psVar5 - (unsigned int)*pbVar17) * ((int)*psVar5 - (unsigned int)*pbVar17) + iVar22;
    lVar23 = lVar23 + -1;
  } while (lVar23 != 0);
  iVar18 = iVar22 * 200 >> 8;
  *in_stack_00000054 = *(int *)(param_6 + 0x70) * aiStack_918[0] + iVar18;
  *in_stack_0000005c = *(int *)(param_6 + 0x70) * (((unsigned __int64)(lStack_920) >> 0) & 0xFFFFFFFF) + iVar18;
  *in_stack_00000064 = (int)asStack_910[0];
  return ((~uVar21 & 0xffffffff) >> 0x1f) + (unsigned __int64)(uVar21 < 2) & 1;
}

