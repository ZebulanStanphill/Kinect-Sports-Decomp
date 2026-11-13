extern int fn_825127E0();
extern int fn_8265C9E0();


unsigned __int64
fn_82590710(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  uVar1 = fn_8265C9E0(0x130);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_825127E0(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  return uVar2;
}

