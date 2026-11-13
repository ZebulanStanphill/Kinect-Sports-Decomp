extern int fn_828AFC00();


void fn_828AFE40(int param_1,unsigned int param_2,unsigned __int64 param_3)

{
  *(unsigned int *)(param_1 + 0x98) = param_2;
  fn_828AFC00(param_1 + 0x9c,param_3);
  *(unsigned int *)(param_1 + 0xac) = 0;
  *(unsigned char *)(param_1 + 0x97) = 1;
  return;
}

