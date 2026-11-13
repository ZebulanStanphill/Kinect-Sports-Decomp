#define true 1
extern int fn_82A1E300();
extern int fn_82F610B8();
extern int fn_82F61358();


unsigned __int64 fn_82F613F8(unsigned __int64 param_1)

{
  char cVar1;
  
  while( true ) {
    cVar1 = fn_82F610B8(param_1,0xffffffffffffffff);
    if (cVar1 == '\0') break;
    while( true ) {
      cVar1 = fn_82F61358(param_1);
      if (cVar1 == '\0') break;
      fn_82A1E300();
    }
  }
  return 0;
}

