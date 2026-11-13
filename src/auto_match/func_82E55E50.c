extern int fn_82E50CB8();
extern int fn_82E50F10();
extern int fn_82F68CC0();
extern int fn_82F691F0();


unsigned __int64 fn_82E55E50(int param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  
  uVar2 = 0;
  if (param_3 == (unsigned int *)0x0) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    fn_82E50CB8(param_1 + 8);
    uVar1 = *param_3;
    uVar3 = (unsigned __int64)uVar1;
    *param_3 = *(unsigned int *)(param_1 + 0x5c);
    if ((param_2 & 0xffffffff) != 0) {
      if (uVar3 < *(unsigned int *)(param_1 + 0x5c)) {
        fn_82F68CC0(param_2,*(unsigned int *)(param_1 + 100),uVar1 << 1);
        uVar2 = 0xffffffffc00d36b1;
      }
      else {
        fn_82F68CC0(param_2,*(unsigned int *)(param_1 + 100),*(unsigned int *)(param_1 + 0x5c) << 1);
        uVar1 = *(unsigned int *)(param_1 + 0x5c);
        if (uVar1 < uVar3) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(((unsigned __int64)uVar1 & 0x7fffffff) * 2 + param_2,0,
                       (uVar3 - uVar1 & 0x7fffffff) << 1);
        }
      }
    }
    fn_82E50F10(param_1 + 8);
  }
  return uVar2;
}

