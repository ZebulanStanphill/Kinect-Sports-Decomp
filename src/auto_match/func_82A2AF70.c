#define true 1
extern unsigned int *auStack_30;
extern int fn_82A2B760();
extern int fn_82A36058();


unsigned __int64 fn_82A2AF70(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned char auStack_30 [1];
  
  uVar1 = fn_82A36058(auStack_30);
  while( true ) {
    uVar2 = NtWaitForSingleObjectEx(param_1,1,param_3 & 0xff,uVar1);
    if ((int)uVar2 < 0) {
      fn_82A2B760();
      return 0xffffffffffffffff;
    }
    if (param_3 == 0) break;
    if ((int)uVar2 != 0x101) {
      return uVar2;
    }
  }
  return uVar2;
}

