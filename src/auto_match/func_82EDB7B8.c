extern int fn_8265C990();
extern int fn_82EDB418();


unsigned __int64 fn_82EDB7B8(unsigned int param_1)

{
  if ((param_1 & 0xffffffff) == 0) {
    return 1;
  }
  fn_82EDB418(param_1);
  fn_8265C990(param_1,0x248c8000);
  return 0;
}

