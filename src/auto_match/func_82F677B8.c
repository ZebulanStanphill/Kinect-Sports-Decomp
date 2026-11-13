extern int fn_82F63BA0();
extern int fn_82F67520();
extern int fn_82F6788C();
extern int fn_82F68240();
extern int fn_82F691F0();
extern int fn_82F6AC80();
extern unsigned int uStack00000034;


unsigned int
fn_82F677B8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uStack00000034;
  
  uStack00000034 = (unsigned int)param_5;
  if (((param_3 & 0xffffffff) != 0) && ((param_4 & 0xffffffff) != 0)) {
    if ((param_5 & 0xffffffff) != 0) {
      fn_82F6AC80(param_5);
      uVar2 = fn_82F67520(param_1,param_2,param_3,param_4,param_5,param_6);
      fn_82F6788C();
      return uVar2;
    }
    if ((int)param_2 != -1) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(param_1,0,param_2);
    }
    puVar1 = (unsigned int *)fn_82F68240();
    *puVar1 = 0x16;
    fn_82F63BA0();
  }
  return 0;
}

