extern int fn_82E50CB8();
extern int fn_82E50F10();


unsigned __int64 fn_82E55E10(int param_1,unsigned int param_2,unsigned int param_3)

{
  fn_82E50CB8(param_1 + 8);
  *(unsigned int *)(param_1 + 0x54) = param_2;
  *(unsigned int *)(param_1 + 0x58) = param_3;
  fn_82E50F10(param_1 + 8);
  return 0;
}

