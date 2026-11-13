extern int fn_82E50CB8();
extern int fn_82E50F10();


unsigned __int64 fn_82E2DDD8(int param_1,unsigned int *param_2)

{
  unsigned __int64 uVar1;
  
  if (param_2 == (unsigned int *)0x0) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    fn_82E50CB8(param_1 + 0x54);
    *param_2 = *(unsigned int *)(param_1 + 0xfc);
    fn_82E50F10(param_1 + 0x54);
    uVar1 = 0;
  }
  return uVar1;
}

