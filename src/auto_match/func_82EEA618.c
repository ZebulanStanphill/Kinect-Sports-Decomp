extern int fn_82A1E7D8();
extern int fn_82A2A618();
extern int fn_82E50CB8();
extern int fn_82E50F10();


unsigned __int64 fn_82EEA618(int param_1)

{
  fn_82E50CB8(param_1 + 4);
  if (*(int *)(param_1 + 0x48) == 0) {
    fn_82A1E7D8(*(unsigned int *)(param_1 + 0x40));
  }
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  fn_82A2A618(*(unsigned int *)(param_1 + 0x44),1,0);
  fn_82E50F10(param_1 + 4);
  return 0;
}

