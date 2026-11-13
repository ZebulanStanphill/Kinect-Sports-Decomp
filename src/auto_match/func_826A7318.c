extern int fn_8269A418();


void fn_826A7318(int param_1,int *param_2)

{
  unsigned char uVar2;
  unsigned int uVar1;
  
  *(int **)(param_1 + 0x74) = param_2;
  *(unsigned char *)(param_1 + 0xc6) = *(unsigned char *)(param_1 + 0xc6) & 0xbf;
  uVar2 = fn_8269A418(param_2);
  *(unsigned char *)(param_1 + 0x7c) = uVar2;
  uVar1 = (*(int (**)())(*param_2 + 0xb0))(param_2);
  *(unsigned int *)(param_1 + 0x78) = uVar1;
  return;
}

