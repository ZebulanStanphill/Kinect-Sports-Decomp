extern int fn_82FE89F8();
extern __int64 fn_82FEB060();


unsigned __int64
fn_82FEB188(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  uVar1 = fn_82FE89F8();
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0xf;
  }
  else {
    uVar2 = fn_82FEB060(uVar1,param_2,param_3,param_4);
  }
  return uVar2;
}

