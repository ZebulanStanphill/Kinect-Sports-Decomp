extern unsigned int *auStack_60;
extern int fn_82AB15D0();
extern int fn_82AB6EC0();
extern int fn_82B6E130();
extern int fn_82B9A4B0();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8316E4E8;


unsigned __int64
fn_82B9DEF0(unsigned __int64 param_1,unsigned __int64 param_2,float *param_3,int (**param_4)(),unsigned __int64 param_5)

{
  int iVar2;
  unsigned __int64 uVar1;
  double dVar3;
  unsigned char auStack_60 [96];
  
  if ((param_1 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d2ff0,0xffffffff820ddb08,0xeaa);
  }
  iVar2 = fn_82AB6EC0(param_1,0xa5);
  if (iVar2 == 3) {
    dVar3 = (double)fn_82B6E130(param_1,0xa6);
    *param_3 = (float)dVar3;
  }
  else {
    *param_3 = lbl_821AAD20;
  }
  uVar1 = fn_82AB6EC0(param_1,0xaa);
  if ((uVar1 & 0xffffffff) != 1) {
    uVar1 = fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820ddc80,0xffffffff820ddb08,0xeb7);
  }
  if ((param_4 != (int (**)())0x0) && ((param_5 & 0xffffffff) != 0)) {
    fn_82B9A4B0((double)*param_3,uVar1,auStack_60);
    (*param_4)(param_5,0xffffffff820ddc50,lbl_8316E4E8,0x1a,auStack_60);
  }
  return 1;
}

