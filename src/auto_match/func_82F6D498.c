#define true 1
extern unsigned int uStack00000014;
extern unsigned int uStack00000024;


void fn_82F6D498(__int64 param_1,__int64 param_2,__int64 param_3,int (**param_4)())

{
  unsigned int uStack00000014;
  unsigned int uStack00000024;
  
  while( true ) {
    param_3 = param_3 + -1;
    uStack00000024 = (unsigned int)param_3;
    if (param_3 < 0) break;
    param_1 = param_1 - param_2;
    uStack00000014 = (unsigned int)param_1;
    (*param_4)(param_1);
  }
  return;
}

