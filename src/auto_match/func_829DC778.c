typedef unsigned char bool;
extern int fn_82F68CC0();


bool fn_829DC778(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  
  uVar1 = *(unsigned int *)(param_1 + 0xf4a10);
  if (499 < uVar1) {
    puVar2 = (unsigned int *)(param_1 + 0xf4a14);
    fn_82F68CC0(*puVar2 * 0x7d4 + param_1,param_2,0x7d4);
    *puVar2 = (*puVar2 + 1) % 500;
  }
  else {
    *(unsigned int *)(param_1 + 0xf4a10) = uVar1 + 1;
    fn_82F68CC0((((*(int *)(param_1 + 0xf4a14) + uVar1 + 1) - 1) % 500) * 0x7d4 + param_1,param_2,
                 0x7d4);
  }
  return 499 >= uVar1;
}

