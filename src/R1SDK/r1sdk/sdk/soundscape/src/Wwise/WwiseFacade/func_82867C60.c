extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_822DB5D0();
extern int fn_8265CA20();
extern int fn_82866290();
extern int fn_828662E0();
extern int fn_82866330();
extern int fn_82866580();
extern int fn_828666E0();
extern int fn_82868378();
extern int fn_8286B108();
extern int fn_8286DA00();
extern int fn_8286DA10();
extern int fn_828762C8();
extern int fn_82FE7148();
extern unsigned int lbl_8201FB24;
extern unsigned int lbl_82020F08;
extern unsigned int lbl_8202119C;
extern unsigned int lbl_820211A4;
extern unsigned int lbl_820211C0;
extern unsigned int lbl_8202134C;


void fn_82867C60(unsigned int *param_1)

{
  unsigned __int64 uVar1;
  int iVar4;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [32];
  unsigned char auStack_50 [80];
  
  *(unsigned char *)(param_1 + 0x16) = 0;
  *param_1 = &lbl_8202134C;
  uVar1 = fn_82868378();
  fn_8286DA00(uVar1,0);
  iVar4 = fn_82866580(param_1);
  if (-1 < iVar4) {
    (**(int (***)())(*(int *)param_1[0x123] + 4))
              ((int *)param_1[0x123],0xffffffff82020820,0x178,0xffffffff8202065c);
  }
  uVar1 = fn_82FE7148();
  if ((int)uVar1 != 1) {
    fn_82230110(auStack_70,0xffffffff82020674);
    uVar2 = fn_8223B688(auStack_50,auStack_70);
    uVar3 = fn_82868378();
    fn_8286DA10(uVar3,uVar2,uVar1);
    fn_82230300(auStack_70,1,0);
  }
  *(unsigned char *)((int)param_1 + 0x5d) = 0;
  (**(int (***)())(*(int *)param_1[0x123] + 4))
            ((int *)param_1[0x123],0xffffffff82020890,0x195,0xffffffff82020870);
  iVar4 = fn_82866290(param_1);
  if (-1 < iVar4) {
    (**(int (***)())(*(int *)param_1[0x123] + 4))
              ((int *)param_1[0x123],0xffffffff82020918,0x19e,0xffffffff820208e0);
  }
  iVar4 = fn_828662E0(param_1);
  if (-1 < iVar4) {
    (**(int (***)())(*(int *)param_1[0x123] + 4))
              ((int *)param_1[0x123],0xffffffff82020968,0x1a7,0xffffffff820208fc);
  }
  iVar4 = fn_828666E0(param_1);
  if (-1 < iVar4) {
    (**(int (***)())(*(int *)param_1[0x123] + 4))
              ((int *)param_1[0x123],0xffffffff820209d8,0x1b0,0xffffffff820209b8);
  }
  iVar4 = fn_82866330(param_1);
  if (-1 < iVar4) {
    (**(int (***)())(*(int *)param_1[0x123] + 4))
              ((int *)param_1[0x123],0xffffffff82020a48,0x1b9,0xffffffff82020a28);
  }
  fn_822DB5D0(param_1 + 0x135);
  fn_8286B108(auStack_80,param_1 + 0x12d,*(unsigned int *)param_1[0x12e]);
  fn_8265CA20(param_1[0x12e]);
  param_1[0x19] = &lbl_820211C0;
  param_1[0x1a] = &lbl_820211A4;
  param_1[0x1b] = &lbl_8202119C;
  fn_828762C8(param_1 + 0x19);
  param_1[1] = &lbl_82020F08;
  *param_1 = &lbl_8201FB24;
  return;
}

