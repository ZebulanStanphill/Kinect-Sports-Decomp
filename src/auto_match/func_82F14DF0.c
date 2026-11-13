extern int fn_82F14BE8();


unsigned char fn_82F14DF0(int param_1,int param_2,unsigned __int64 param_3)

{
  unsigned char uVar1;
  
  **(unsigned int **)(param_1 + 0x58) = 0;
  fn_82F14BE8(*(unsigned int *)((param_2 + 10) * 4 + param_1),param_3);
  uVar1 = **(unsigned char **)(param_1 + 0x58);
  *(unsigned char **)(param_1 + 0x58) = *(unsigned char **)(param_1 + 0x58) + 4;
  return uVar1;
}

