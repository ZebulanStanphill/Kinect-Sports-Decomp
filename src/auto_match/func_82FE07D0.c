extern int fn_82FE55F0();


void fn_82FE07D0(__int64 param_1)

{
  int lVar1;
  
  param_1 = param_1 + 4;
  lVar1 = 4;
  do {
    fn_82FE55F0(param_1);
    lVar1 = lVar1 + -1;
    param_1 = param_1 + 0x10;
  } while (lVar1 != 0);
  return;
}

