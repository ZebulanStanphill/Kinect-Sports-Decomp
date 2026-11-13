extern int fn_82ABE940();


void fn_82AF85E8(unsigned int *param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  
  param_1[2] = 0;
  *param_1 = (unsigned int)(param_1 + 1) | 1;
  param_1[1] = (unsigned int)param_1 | 1;
  param_1[3] = 0;
  uVar2 = fn_82ABE940(param_1,0x30);
  puVar1 = (unsigned int *)(uVar2 & 0xfffffffe);
  *puVar1 = *param_1;
  *(unsigned int **)(*param_1 & 0xfffffffe) = puVar1;
  puVar1[1] = (unsigned int)param_1 | 1;
  *param_1 = (unsigned int)(puVar1 + 1);
  return;
}

