extern int fn_8269A418();


void fn_826A7288(int param_1,unsigned int param_2)

{
  unsigned char uVar1;
  
  *(int *)(param_1 + 0x74) = (int)param_2;
  *(unsigned char *)(param_1 + 0xc6) = *(unsigned char *)(param_1 + 0xc6) & 0xbf;
  uVar1 = fn_8269A418(param_2);
  *(unsigned char *)(param_1 + 0x7c) = uVar1;
  return;
}

