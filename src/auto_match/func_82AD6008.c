extern int fn_82ABE940();


void fn_82AD6008(unsigned int *param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  
  unsigned int count;
  if (param_2 > 10) count = param_2; else count = 10;
  uVar2 = fn_82ABE940(param_1,count * 0x24 + 0x10);
  *(int *)(uVar2 + 0xc) = (int)count;
  puVar1 = (unsigned int *)(uVar2 & 0xfffffffe);
  *(unsigned int *)(uVar2 + 8) = 0;
  *puVar1 = *param_1;
  *(unsigned int **)(*param_1 & 0xfffffffe) = puVar1;
  puVar1[1] = (unsigned int)param_1 | 1;
  *param_1 = (unsigned int)(puVar1 + 1);
  return;
}

