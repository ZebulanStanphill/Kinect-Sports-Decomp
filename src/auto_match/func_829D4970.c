typedef unsigned char bool;
extern int fn_82F68CC0();


bool fn_829D4970(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  
  uVar1 = *(unsigned int *)(param_1 + 0x9c90);
  if (0x13 < uVar1) {
    puVar2 = (unsigned int *)(param_1 + 0x9c94);
    fn_82F68CC0(*puVar2 * 0x7d4 + param_1,param_2,0x7d4);
    *puVar2 = (*puVar2 + 1) % 0x14;
  }
  else {
    *(unsigned int *)(param_1 + 0x9c90) = uVar1 + 1;
    fn_82F68CC0((((*(int *)(param_1 + 0x9c94) + uVar1 + 1) - 1) % 0x14) * 0x7d4 + param_1,param_2,
                 0x7d4);
  }
  return 0x13 >= uVar1;
}

