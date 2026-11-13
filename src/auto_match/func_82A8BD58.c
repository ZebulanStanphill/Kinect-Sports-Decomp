extern int fn_82A8BC78();
extern unsigned int lbl_8322344C;


unsigned __int64 fn_82A8BD58(int param_1,unsigned __int64 param_2,int param_3,unsigned int *param_4)

{
  unsigned __int64 uVar1;
  
  if (param_4 != (unsigned int *)0x0) {
    if ((param_1 != 0) && (param_3 != 0)) {
      if (lbl_8322344C == '\0') {
        uVar1 = 0xffffffff8000ffff;
      }
      else {
        uVar1 = fn_82A8BC78();
        if (-1 < (int)uVar1) {
          *param_4 = 0;
          return uVar1;
        }
      }
      *param_4 = 0;
      return uVar1;
    }
    *param_4 = 0;
  }
  return 0xffffffff80070057;
}

