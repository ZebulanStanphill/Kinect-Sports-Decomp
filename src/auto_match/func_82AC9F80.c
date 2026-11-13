extern int fn_82AC6560();


void fn_82AC9F80(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_82AC6560(param_1,0x14,0x1a);
  puVar1[3] = param_2;
  *puVar1 = (param_3 & 0xfff) << 0xd | 0x40000000 | *puVar1 & 0xfe001fff;
  puVar1[2] = *(unsigned int *)(param_2 + 4);
  *(unsigned int **)(param_2 + 4) = puVar1;
  return;
}

