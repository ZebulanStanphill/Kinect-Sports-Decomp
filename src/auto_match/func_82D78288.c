void fn_82D78288(int param_1,int param_2)

{
  int iVar1;
  
  *(unsigned char *)(param_1 + 0x22) = 0;
  iVar1 = (unsigned int)*(unsigned char *)(param_1 + 0x21) * 4 + param_1;
  *(unsigned short *)(param_2 * 4 + param_1) = *(unsigned short *)(iVar1 + -4);
  *(unsigned short *)(param_2 * 4 + param_1 + 2) = *(unsigned short *)(iVar1 + -2);
  *(char *)(param_1 + 0x21) = *(char *)(param_1 + 0x21) + -1;
  return;
}

