extern int fn_82F63BA0();
extern int fn_82F68240();
extern int fn_82F68CC0();
extern int fn_82F691F0();


unsigned int fn_82F6A3F8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  
  if ((int)param_4 != 0) {
    if ((param_1 & 0xffffffff) == 0) {
      puVar1 = (unsigned int *)fn_82F68240();
      *puVar1 = 0x16;
      fn_82F63BA0();
      return 0x16;
    }
    if (((param_3 & 0xffffffff) == 0) || ((param_2 & 0xffffffff) < (param_4 & 0xffffffff))) {
      fn_82F691F0(param_1,0,param_2);
      if ((param_3 & 0xffffffff) == 0) {
        puVar1 = (unsigned int *)fn_82F68240();
        uVar2 = 0x16;
      }
      else {
        if ((param_4 & 0xffffffff) <= (param_2 & 0xffffffff)) {
          return 0x16;
        }
        puVar1 = (unsigned int *)fn_82F68240();
        uVar2 = 0x22;
      }
      *puVar1 = uVar2;
      fn_82F63BA0();
      return uVar2;
    }
    fn_82F68CC0(param_1,param_3,param_4);
  }
  return 0;
}

