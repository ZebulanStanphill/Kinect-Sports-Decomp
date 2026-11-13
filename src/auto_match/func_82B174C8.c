extern int fn_82AC6560();


void fn_82B174C8(int param_1,unsigned int param_2,unsigned int param_3,unsigned __int64 param_4)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_82AC6560(param_4,0xc,0x16);
  *puVar1 = 0;
  puVar1[2] = puVar1[2] & 0xf0000000 | (param_3 & 0x3fff) << 0xe | param_2 & 0x3fff;
  puVar1[1] = *(unsigned int *)(param_1 + 0x10);
  *(unsigned int **)(param_1 + 0x10) = puVar1;
  return;
}

