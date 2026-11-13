extern int fn_8265C9E0();
extern int fn_828AA9B8();
extern int fn_828EA600();


unsigned __int64 fn_828AAC10(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  fn_828EA600(param_2);
  uVar1 = fn_8265C9E0(0x70);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_828AA9B8(uVar1,param_1,param_2,param_3);
  }
  return uVar2;
}

