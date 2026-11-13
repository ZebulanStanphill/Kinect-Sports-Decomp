extern int fn_8262FEC8();
extern int fn_8263CB30();


unsigned __int64 fn_82923D40(unsigned int *param_1)

{
  if (*param_1 != 0) {
    fn_8263CB30(*param_1);
    if (*param_1 != 0) {
      fn_8262FEC8(*param_1);
      *param_1 = 0;
    }
  }
  return 0;
}

