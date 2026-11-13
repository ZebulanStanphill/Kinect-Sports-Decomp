unsigned int  fn_82C06730(int param_1,int *param_2)

{
  unsigned lVar1;
  
  *param_2 = param_1 + 0xd4;
  lVar1 = (*(int (**)())(*(int *)(param_1 + 0x88) + 0x34))(param_1 + 0x88);
  return lVar1 == 0 ? 0x8000000a : 0;
}

