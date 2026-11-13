extern int fn_8263C538();


void fn_82A93F08(int param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  
  *(unsigned int *)(param_1 + 0x20) =
       *(unsigned int *)(param_1 + 0x20) & 0xfff |
       (*(unsigned int *)(param_1 + 0x20) & 0xfffff000) + param_2 & 0xfffff000;
  uVar1 = fn_8263C538();
  if (1 < uVar1) {
    *(unsigned int *)(param_1 + 0x30) =
         *(unsigned int *)(param_1 + 0x30) & 0xfff |
         (*(unsigned int *)(param_1 + 0x30) & 0xfffff000) + param_3 & 0xfffff000;
  }
  return;
}

