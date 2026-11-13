extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int fStack_6c;
extern unsigned int fStack_7c;
extern unsigned int fStack_8c;
extern int fn_82A1DDC0();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern int fn_8306E7F8();
extern int fn_8306E860();
extern int fn_8306E888();
extern int fn_8306EAD0();
extern int fn_8306F520();
extern int fn_830746F8();
extern int fn_830748A8();
extern int fn_83074F88();
extern int fn_83075D30();
extern int fn_83075D50();
extern int fn_83075DB0();
extern unsigned int lbl_82002AE0;
extern float lbl_82021540;
extern unsigned int lbl_820215A8;
extern unsigned int lbl_820A6C50;
extern unsigned int lbl_821AAD20;


void fn_83075590(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  int *param_5,int *param_6)

{
  int iVar2;
  unsigned __int64 uVar1;
  int iVar3;
  unsigned __int64 extraout_f1;
  unsigned __int64 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  unsigned __int64 uVar8;
  double dVar9;
  float afStack_a0;
  unsigned char auStack_90 [4];
  float fStack_8c;
  unsigned char auStack_80 [4];
  float fStack_7c;
  unsigned char auStack_70 [4];
  float fStack_6c;
  
  iVar2 = fn_82F6A544();
  uVar8 = extraout_f1;
  uVar1 = fn_83075D50(param_3);
  dVar6 = (double)lbl_821AAD20;
  dVar7 = dVar6;
  if (*(char *)(iVar2 + 0xd08) != '\0') {
    dVar6 = (double)fn_8306E860(uVar1,*(unsigned __int64 *)(iVar2 + 0xd00));
  }
  dVar9 = (double)lbl_82002AE0;
  uVar4 = fn_8306E7F8(dVar6,(double)lbl_820215A8,dVar9);
  dVar6 = dVar9;
  if (*param_6 == 0) {
    fn_8306F520(iVar2,param_2,param_3);
  }
  else {
    dVar9 = (double)fn_830748A8();
  }
  fn_83074F88(uVar4,uVar8,iVar2,param_2,param_3);
  dVar5 = dVar6;
  if (*param_5 != 0) {
    dVar5 = (double)fn_830746F8(uVar4,iVar2,param_3);
    dVar5 = (double)(float)(dVar5 * dVar9);
  }
  if (param_5[1] != 0) {
    fn_83075D30(auStack_80,param_3,0xc);
    fn_83075D30(auStack_90,param_3,0x10);
    iVar3 = fn_8306EAD0(&afStack_a0);
    if (iVar3 != 0) {
      dVar9 = (double)fn_8306E888((double)afStack_a0);
      dVar6 = (double)fn_8306E7F8((double)((float)((double)lbl_820A6C50 - dVar9) * lbl_82021540),
                                   dVar7,dVar6);
      dVar5 = (double)(float)(dVar6 * dVar5);
    }
  }
  if (param_5[2] != 0) {
    fn_83075D30(auStack_90,param_3,4);
    fn_83075D30(auStack_70,param_3,8);
    fn_83075D30(auStack_80,param_3,3);
    if ((fStack_7c < fStack_8c) || (fStack_7c < fStack_6c)) {
      dVar5 = dVar7;
    }
  }
  fn_83075DB0(dVar5,param_3);
  fn_82A1DDC0(iVar2 + 0x4b0,param_2,0x1c0);
  *(unsigned __int64 *)(iVar2 + 0xd00) = uVar1;
  *(unsigned char *)(iVar2 + 0xd08) = 1;
  fn_82F6A590();
  return;
}

