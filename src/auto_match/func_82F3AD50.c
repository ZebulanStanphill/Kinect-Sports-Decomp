extern int fn_82E4FE40();
extern int fn_82F3A700();


unsigned __int64 fn_82F3AD50(unsigned __int64 param_1,unsigned int param_2)

{
  unsigned __int64 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    fn_82F3A700(param_2);
    fn_82E4FE40(param_2);
    uVar1 = 0;
  }
  return uVar1;
}

