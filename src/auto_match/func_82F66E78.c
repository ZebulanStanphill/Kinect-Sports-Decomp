extern int fn_82F63BA0();
extern int fn_82F68240();
extern int fn_82F7B6D0();


unsigned __int64 fn_82F66E78(unsigned short *param_1,unsigned __int64 param_2)

{
  unsigned short uVar1;
  unsigned int *puVar3;
  unsigned __int64 uVar2;
  
  if (param_1 != (unsigned short *)0x0) {
    uVar2 = fn_82F7B6D0(param_1,param_2);
    if ((uVar2 & 0xffffffff) < (param_2 & 0xffffffff)) {
      uVar1 = *param_1;
      while (uVar1 != 0) {
        uVar1 = *param_1;
        if ((0x60 < uVar1) && (uVar1 < 0x7b)) {
          *param_1 = uVar1 - 0x20;
        }
        param_1 = param_1 + 1;
        uVar1 = *param_1;
      }
      return 0;
    }
    *param_1 = 0;
  }
  puVar3 = (unsigned int *)fn_82F68240();
  *puVar3 = 0x16;
  fn_82F63BA0();
  return 0x16;
}

