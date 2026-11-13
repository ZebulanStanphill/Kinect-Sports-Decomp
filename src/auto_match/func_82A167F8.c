extern int fn_82A11358();
extern int fn_82A12618();
extern int fn_82A13DD0();
extern int fn_82F6F870();
extern unsigned int lbl_831BB8F0;


void fn_82A167F8(__int64 param_1,unsigned __int64 param_2,__int64 param_3,__int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned int uVar1;
  
  uVar1 = lbl_831BB8F0;
  if ((param_7 & 0xffffffff) == 0) {
    param_7 = param_1 + 0x68;
  }
  param_3 = param_3 + param_4;
  fn_82A11358(param_1,param_3,param_5,param_6);
  fn_82A12618(param_1,param_3,param_5,param_6,param_7,0);
  fn_82A13DD0(param_1,0,param_3,param_5,param_6,param_7,param_8);
  fn_82F6F870(uVar1);
  return;
}

