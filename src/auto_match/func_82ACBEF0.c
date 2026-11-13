extern int fn_82ABE250();


int fn_82ACBEF0(unsigned __int64 param_1)

{
  int iVar1;
  unsigned int *puVar2;
  
  iVar1 = fn_82ABE250(param_1,0x20,0x36);
  puVar2 = (unsigned int *)fn_82ABE250(param_1,8,0x24);
  *(unsigned int **)(iVar1 + 4) = puVar2;
  puVar2[1] = (unsigned int)puVar2 | 1;
  *puVar2 = (unsigned int)(puVar2 + 1) | 1;
  return iVar1;
}

