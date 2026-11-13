extern int fn_82AB15D0();
extern int fn_82AB71F0();
extern int fn_82B69A00();
extern unsigned int lbl_820DD670;
extern unsigned int lbl_820DD8B0;
extern unsigned int lbl_8316E4F4;
extern unsigned int lbl_8316E60C;
extern unsigned int lbl_8316E628;


unsigned __int64
fn_82B9D1D8(unsigned __int64 param_1,unsigned __int64 param_2,int param_3,int *param_4,unsigned __int64 param_5,
             int (**param_6)(),unsigned __int64 param_7)

{
  int iVar1;
  unsigned char *puVar2;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar3;
  unsigned char *puVar6;
  
  if ((param_1 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d2ff0,0xffffffff820ddb08,0xc26);
  }
  if ((int)param_2 == -1) {
    iVar4 = 0x17;
    iVar5 = 1;
  }
  else {
    iVar4 = fn_82AB71F0(param_1,0x2b,param_2);
    iVar5 = fn_82AB71F0(param_1,0x2c,param_2);
  }
  if ((param_5 & 0xffffffff) < 2) {
    uVar3 = 1;
  }
  else {
    uVar3 = fn_82B69A00(param_5,8);
  }
  if ((uVar3 & 0xffffffff) == 0) {
    puVar6 = &lbl_820DD8B0;
  }
  else {
    puVar6 = &lbl_820DD670;
  }
  iVar1 = *(int *)(puVar6 + iVar4 * 0x18);
  *param_4 = iVar1;
  if (iVar1 == 0) {
    puVar2 = (&lbl_8316E628)[iVar4 + -0x11];
    if (puVar2 == (unsigned char *)0x0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820ddc08,0xffffffff820ddb08,0xc44);
    }
    iVar1 = *(int *)(puVar2 + iVar5 * 4);
    if ((iVar1 < 0) || (0x17 < iVar1)) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820ddbe0,0xffffffff820ddb08,0xc46);
    }
    iVar1 = *(int *)(puVar6 + iVar1 * 0x18);
    *param_4 = iVar1;
    if (iVar1 == 0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820ddbd4,0xffffffff820ddb08,0xc48);
    }
  }
  *param_4 = param_3 * 4 + *param_4;
  if ((param_6 != (int (**)())0x0) && ((param_7 & 0xffffffff) != 0)) {
    (*param_6)(param_7,0xffffffff820ddbbc,lbl_8316E4F4,0x1d,param_2,
               iVar5,iVar4);
    (*param_6)(param_7,0xffffffff820ddaf8,lbl_8316E60C,99,uVar3);
  }
  return 1;
}

