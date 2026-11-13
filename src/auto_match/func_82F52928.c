extern int fn_82F50AB0();


void fn_82F52928(__int64 param_1)

{
  int lVar1;
  
  lVar1 = 10;
  do {
    fn_82F50AB0(param_1);
    lVar1 = lVar1 + -1;
    param_1 = param_1 + 0xd00;
  } while (lVar1 != 0);
  return;
}

