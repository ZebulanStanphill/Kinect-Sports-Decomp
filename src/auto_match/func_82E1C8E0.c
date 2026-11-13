extern int fn_82E1C9C0();
extern int fn_82F664B0();


unsigned __int64 fn_82E1C8E0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned __int64 param_4,
                       unsigned int param_5)

{
  unsigned __int64 uVar1;
  
  if (((int)param_4 != 0) && (param_3 != (unsigned int *)0x0)) {
    if (*param_3 < param_5) {
      *param_3 = param_5;
      return -(unsigned __int64)(param_2 != 0) & 0xffffffff80040011;
    }
    if ((param_2 & 0xffffffff) != 0) {
      fn_82F664B0(param_2,*param_3,param_4);
      uVar1 = fn_82E1C9C0();
      *param_3 = param_5;
      return uVar1;
    }
  }
  return 0xffffffff80004003;
}

