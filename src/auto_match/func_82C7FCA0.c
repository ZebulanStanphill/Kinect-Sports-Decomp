extern int fn_82C53970();
extern int fn_82C7F8F8();


unsigned __int64 fn_82C7FCA0(unsigned int param_1)

{
  if ((param_1 & 0xffffffff) == 0) {
    return 1;
  }
  fn_82C7F8F8(param_1);
  fn_82C53970(param_1);
  return 0;
}

