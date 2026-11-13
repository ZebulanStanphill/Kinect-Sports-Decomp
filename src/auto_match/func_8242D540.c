extern int fn_8242D3A8();


void fn_8242D540(int param_1,unsigned int param_2)

{
  param_2 = param_2 & 0xff;
  fn_8242D3A8(param_1,"|group|importfixgroup849|REFERENCE_grounds_01|",param_2 == 0);
  *(unsigned int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x174) + 0x9c) + 0x8c4) + 0x2c) = param_2;
  *(unsigned int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x174) + 0x9c) + 0x8c4) + 0x30) = param_2;
  return;
}

