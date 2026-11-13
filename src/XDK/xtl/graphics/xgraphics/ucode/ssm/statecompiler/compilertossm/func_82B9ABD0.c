typedef unsigned char bool;
extern int fn_82AB15D0();
extern int fn_82AB6EC0();
extern int fn_82AB7550();
extern unsigned int lbl_8316E4C0;


unsigned __int64
fn_82B9ABD0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int (**param_4)(),unsigned __int64 param_5
             )

{
  bool bVar1;
  int iVar3;
  unsigned __int64 uVar2;
  
  if ((param_1 & 0xffffffff) == 0) {
    fn_82AB15D0(param_1,0xffffffff820d2ea4,0xffffffff820d2ff0,0xffffffff820ddb08,0x482);
  }
  iVar3 = fn_82AB6EC0(param_1,0x3a6);
  bVar1 = (param_3 & 0xffffffff) != 0;
  if (iVar3 == 0) {
    if (bVar1) {
      fn_82AB7550(param_3,10,0,0);
    }
    if ((param_4 != (int (**)())0x0) && ((param_5 & 0xffffffff) != 0)) {
      (*param_4)(param_5,0xffffffff820ddaf8,lbl_8316E4C0,0x10,0);
    }
    uVar2 = 0;
  }
  else {
    if (bVar1) {
      fn_82AB7550(param_3,10,0,1);
    }
    if ((param_4 != (int (**)())0x0) && ((param_5 & 0xffffffff) != 0)) {
      (*param_4)(param_5,0xffffffff820ddaf8,lbl_8316E4C0,0x10,1);
    }
    uVar2 = 1;
  }
  return uVar2;
}

