#define true 1
extern int fn_82F6D62C();
extern unsigned int iStack0000001c;
extern unsigned int uStack00000014;
extern unsigned int uStack00000024;


void fn_82F6D570(__int64 param_1,__int64 param_2,__int64 param_3,int (**param_4)())

{
  unsigned int uStack00000014;
  int iStack0000001c;
  unsigned int uStack00000024;
  int (**pcStack0000002c)();
  
  iStack0000001c = (int)param_2;
  param_1 = (__int64)iStack0000001c * (__int64)(int)param_3 + param_1;
  uStack00000014 = (unsigned int)param_1;
  pcStack0000002c = param_4;
  while( true ) {
    param_3 = param_3 + -1;
    uStack00000024 = (unsigned int)param_3;
    if (param_3 < 0) break;
    param_1 = param_1 - param_2;
    uStack00000014 = (unsigned int)param_1;
    (*param_4)(param_1);
  }
  fn_82F6D62C();
  return;
}

