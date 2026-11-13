#define true 1
extern unsigned int *auStack_40;
extern int fn_82A1E108();
extern int fn_830B3898();


unsigned __int64 fn_830B3AE0(unsigned __int64 param_1,unsigned __int64 param_2,__int64 param_3,unsigned __int64 param_4)

{
  char cVar1;
  unsigned __int64 uVar2;
  unsigned int auStack_40 [16];
  
  uVar2 = param_4;
  while( true ) {
    if ((uVar2 & 0xffffffff) == 0) {
      fn_82A1E108(500);
      return param_4;
    }
    auStack_40[0] = 0;
    cVar1 = fn_830B3898(param_1,param_2,param_3,uVar2,auStack_40);
    if (cVar1 == '\0') break;
    param_3 = (unsigned __int64)auStack_40[0] + param_3;
    uVar2 = uVar2 - auStack_40[0];
    fn_82A1E108(10);
  }
  return 0xffffffffffffffff;
}

