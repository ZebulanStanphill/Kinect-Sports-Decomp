extern int fn_82AB15D0();
extern int fn_82AB71F0();
extern int fn_82B69A00();
extern unsigned int lbl_820DD670;
extern unsigned int lbl_820DD674;
extern unsigned int lbl_820DD8B0;
extern unsigned int lbl_820DD8B4;
extern unsigned int lbl_8316E4F0;
extern unsigned int lbl_8316E60C;


unsigned __int64
fn_82B9D5A8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned __int64 param_4,int (**param_5)(),
             unsigned __int64 param_6)

{
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar1;
  
  if ((param_1 & 0xffffffff) == 0) {
    fn_82AB15D0(param_1,0xffffffff820d2ea4,0xffffffff820d2ff0,0xffffffff820ddb08,0xcc0);
  }
  if ((int)param_2 == -1) {
    iVar2 = 0x17;
    uVar3 = 1;
  }
  else {
    iVar2 = fn_82AB71F0(param_1,0x2b,param_2);
    uVar3 = fn_82AB71F0(param_1,0x2c,param_2);
  }
  if ((param_4 & 0xffffffff) < 2) {
    uVar1 = 1;
  }
  else {
    uVar1 = fn_82B69A00(param_4,8);
  }
  if ((uVar1 & 0xffffffff) == 0) {
    *param_3 = (unsigned int)*(unsigned short *)(&lbl_820DD8B4 + iVar2 * 0x18);
    iVar2 = *(int *)(&lbl_820DD8B0 + iVar2 * 0x18);
  }
  else {
    *param_3 = (unsigned int)*(unsigned short *)(&lbl_820DD674 + iVar2 * 0x18);
    iVar2 = *(int *)(&lbl_820DD670 + iVar2 * 0x18);
  }
  if (iVar2 == 0) {
    if ((uVar1 & 0xffffffff) == 0) {
      *param_3 = uVar3;
    }
    else {
      *param_3 = 1;
    }
  }
  if ((param_5 != (int (**)())0x0) && ((param_6 & 0xffffffff) != 0)) {
    (*param_5)(param_6,0xffffffff820ddb70,lbl_8316E4F0,0x1c,param_2,
               *param_3);
    (*param_5)(param_6,0xffffffff820ddaf8,lbl_8316E60C,99,uVar1);
  }
  return 1;
}

