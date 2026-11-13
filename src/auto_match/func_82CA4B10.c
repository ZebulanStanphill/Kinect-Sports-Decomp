extern unsigned int *auStack_230;
extern int fn_82CA3B20();
extern int fn_82F68CC0();


void fn_82CA4B10(int param_1,__int64 param_2)

{
  unsigned __int64 in_r10;
  unsigned char *puVar1;
  unsigned __int64 uVar2;
  unsigned int in_stack_00000054;
  unsigned char auStack_230 [560];
  
  if (*(int *)(param_1 + 0x98) == 0) {
    fn_82CA3B20(param_1,auStack_230);
    uVar2 = (unsigned __int64)in_stack_00000054;
    puVar1 = auStack_230;
    if (0 < (int)in_stack_00000054) {
      do {
        fn_82F68CC0(param_2,puVar1,(in_r10 & 0x7ffffffe) << 1);
        uVar2 = uVar2 - 1;
        puVar1 = puVar1 + 0x20;
        param_2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x3d44) + param_2;
      } while (uVar2 != 0);
    }
  }
  else {
    fn_82CA3B20();
  }
  return;
}

