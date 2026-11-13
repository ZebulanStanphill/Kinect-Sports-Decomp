extern int fn_82E50CB8();
extern int fn_82E50F10();


unsigned __int64 fn_82E51300(int param_1,unsigned short param_2)

{
  fn_82E50CB8(param_1 + 100);
  *(unsigned short *)(param_1 + 0x5c) = param_2;
  fn_82E50F10(param_1 + 100);
  return 0;
}

