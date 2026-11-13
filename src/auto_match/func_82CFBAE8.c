typedef unsigned char bool;
extern int fn_82A2B760();


bool fn_82CFBAE8(unsigned int *param_1,unsigned __int64 param_2)

{
  int iVar1;
  
  iVar1 = NtReleaseSemaphore(*param_1,param_2,0);
  if (iVar1 < 0) {
    fn_82A2B760();
  }
  return iVar1 >= 0;
}

