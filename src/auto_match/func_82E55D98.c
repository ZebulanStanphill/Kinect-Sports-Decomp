extern int fn_82E50CB8();
extern int fn_82E50F10();


unsigned __int64 fn_82E55D98(int param_1,unsigned int *param_2,unsigned int *param_3)

{
  unsigned __int64 uVar1;
  
  if ((param_2 == (unsigned int *)0x0) && (param_3 == (unsigned int *)0x0)) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    fn_82E50CB8(param_1 + 8);
    if (param_2 != (unsigned int *)0x0) {
      *param_2 = *(unsigned int *)(param_1 + 0x54);
    }
    if (param_3 != (unsigned int *)0x0) {
      *param_3 = *(unsigned int *)(param_1 + 0x58);
    }
    fn_82E50F10(param_1 + 8);
    uVar1 = 0;
  }
  return uVar1;
}

