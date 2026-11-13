extern int fn_8265C940();


int fn_82ABE8C8(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  
  uVar1 = fn_8265C940(param_2 + 0xc,0x618d0000);
  *(int *)(uVar1 + 8) = (int)(param_2 + 0xc);
  puVar2 = (unsigned int *)(uVar1 & 0xfffffffe);
  *puVar2 = *(unsigned int *)(param_1 + 0x98);
  *(unsigned int **)(*(unsigned int *)(param_1 + 0x98) & 0xfffffffe) = puVar2;
  puVar2[1] = param_1 + 0x98U | 1;
  *(unsigned int **)(param_1 + 0x98) = puVar2 + 1;
  return uVar1 + 0xc;
}

