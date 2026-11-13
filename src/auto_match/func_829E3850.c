extern int memset();


unsigned __int64 fn_829E3850(int *param_1,int param_2,int param_3,int *param_4,unsigned __int64 param_5)

{
  unsigned __int64 uVar1;

  if ((((param_2 == 0) || (param_4 == (int *)0x0)) || ((param_5 & 0xffffffff) == 0)) ||
     (param_3 == 0)) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    if (*param_1 != 0) {
                    /* WARNING: Subroutine does not return */
      memset(param_5,0,(__int64)(param_4[3] - param_4[1]) * (__int64)(param_4[2] - *param_4)
                  );
    }
    uVar1 = 0xffffffff8000ffff;
  }
  return uVar1;
}
