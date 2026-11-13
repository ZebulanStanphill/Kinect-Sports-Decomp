unsigned int  fn_82C099F8(int param_1,int *param_2)

{
  unsigned lVar1;
  
  *param_2 = param_1 + 0xd0;
  lVar1 = (*(int (**)())(*(int *)(param_1 + 0x7c) + 0x34))(param_1 + 0x7c);
  return lVar1 == 0 ? 0x8000000a : 0;
}

