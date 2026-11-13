extern int fn_8269A418();


void fn_826A72D0(int param_1,unsigned int param_2)

{
  unsigned char uVar1;
  
  *(int *)(param_1 + 0x74) = (int)param_2;
  *(unsigned char *)(param_1 + 0xc6) = *(unsigned char *)(param_1 + 0xc6) | 0x40;
  uVar1 = fn_8269A418(param_2);
  *(unsigned char *)(param_1 + 0x7c) = uVar1;
  return;
}

