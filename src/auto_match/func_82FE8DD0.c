extern __int64 fn_82FE85A0();
extern int fn_82FE89F8();


unsigned __int64 fn_82FE8DD0(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  
  uVar1 = fn_82FE89F8();
  uVar2 = fn_82FE89F8(param_2);
  if (((uVar1 & 0xffffffff) == 0) || ((uVar2 & 0xffffffff) == 0)) {
    uVar3 = 0xf;
  }
  else {
    uVar3 = fn_82FE85A0(uVar1,uVar2);
  }
  return uVar3;
}

