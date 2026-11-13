extern int fn_826D6290();
extern int fn_826D88B0();


unsigned __int64 fn_826D9720(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  
  lVar1 = fn_826D88B0();
  if ((int)lVar1 < 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = lVar1 * 0x14 + (unsigned __int64)*param_1 + 0x10;
  }
  if ((uVar3 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    if ((param_3 & 0xffffffff) != 0) {
      fn_826D6290(param_3,uVar3 + 4);
    }
    uVar2 = 1;
  }
  return uVar2;
}

