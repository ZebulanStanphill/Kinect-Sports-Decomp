extern int fn_82E50CB8();
extern int fn_82E50F10();


unsigned __int64 fn_82E4A098(int param_1,unsigned __int64 param_2)

{
  fn_82E50CB8(param_1 + 0x58);
  *(unsigned __int64 *)(param_1 + 200) = param_2;
  fn_82E50F10(param_1 + 0x58);
  return 0;
}

