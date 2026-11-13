extern int fn_82ABE940();


void fn_82AF8668(unsigned int *param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  
  if (param_1[3] == 10) {
    uVar2 = fn_82ABE940(param_1,0x30);
    puVar1 = (unsigned int *)(uVar2 & 0xfffffffe);
    *puVar1 = *param_1;
    *(unsigned int **)(*param_1 & 0xfffffffe) = puVar1;
    puVar1[1] = (unsigned int)param_1 | 1;
    *param_1 = (unsigned int)(puVar1 + 1);
    param_1[3] = 0;
  }
  else if ((param_1[1] & 1) != 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*param_1 & 0xfffffffe) - 4;
  }
  *(unsigned int *)((param_1[3] + 2) * 4 + uVar2) = param_2;
  param_1[3] = param_1[3] + 1;
  return;
}

