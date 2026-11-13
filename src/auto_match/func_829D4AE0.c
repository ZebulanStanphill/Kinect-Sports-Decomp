typedef unsigned char bool;
extern int fn_82F68CC0();


bool fn_829D4AE0(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  
  uVar1 = *(unsigned int *)(param_1 + 0x6f40);
  if (0x13 < uVar1) {
    fn_82F68CC0(*(int *)(param_1 + 0x6f50) * 0x590 + param_1,param_2,0x590);
    *(unsigned int *)(param_1 + 0x6f50) = (*(int *)(param_1 + 0x6f50) + 1U) % 0x14;
  }
  else {
    *(unsigned int *)(param_1 + 0x6f40) = uVar1 + 1;
    fn_82F68CC0((((*(int *)(param_1 + 0x6f50) + uVar1 + 1) - 1) % 0x14) * 0x590 + param_1,param_2,
                 0x590);
  }
  return 0x13 >= uVar1;
}

