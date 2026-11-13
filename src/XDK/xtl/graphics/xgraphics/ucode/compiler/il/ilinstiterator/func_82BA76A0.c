extern int fn_82B7BD28();


void fn_82BA76A0(int *param_1,unsigned int param_2,unsigned char param_3)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_82B7BD28(*(unsigned int *)(*param_1 + 0x5b0),0xc);
  *puVar1 = param_2;
  *(unsigned char *)(puVar1 + 1) = param_3;
  puVar1[2] = 0;
  *(unsigned int **)(param_1[4] + 8) = puVar1;
  param_1[4] = (int)puVar1;
  return;
}

