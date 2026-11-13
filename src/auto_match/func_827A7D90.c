extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_826BD6B0();
extern int fn_827A7B80();
extern unsigned int lbl_831E7E64;


unsigned int  fn_827A7D90(unsigned __int64 param_1,unsigned __int64 param_2,__int64 param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar1 = fn_8267B890(lbl_831E7E64,(param_3 + 1U & 0x7fffffff) << 1,0);
  uVar2 = fn_826BD6B0(uVar1,param_2,param_3);
  uVar2 = fn_827A7B80(param_1,uVar1,uVar2);
  fn_8267BE38(uVar1);
  return uVar2;
}

