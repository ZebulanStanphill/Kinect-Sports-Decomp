extern int fn_82F63BA0();
extern int fn_82F67A88();
extern int fn_82F67DAC();
extern int fn_82F68240();
extern int fn_82F6AC80();
extern unsigned int uStack0000002c;


unsigned int
fn_82F67CF8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,__int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uStack0000002c;
  
  uStack0000002c = (unsigned int)param_4;
  if (((param_2 & 0xffffffff) != 0) && ((param_3 & 0xffffffff) != 0)) {
    if (param_4 != 0) {
      fn_82F6AC80(param_4);
      uVar2 = fn_82F67A88(param_1,param_2,param_3,param_4,param_5,param_6);
      fn_82F67DAC();
      return uVar2;
    }
    puVar1 = (unsigned int *)fn_82F68240();
    *puVar1 = 0x16;
    fn_82F63BA0();
  }
  return 0;
}

