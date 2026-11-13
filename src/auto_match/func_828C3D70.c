extern int fn_828B6330();
extern int fn_82923B38();
extern int fn_82F622E0();


unsigned __int64 fn_828C3D70(unsigned __int64 param_1,int param_2)

{
  if (*(int *)(param_2 + 0x1b0) == *(int *)(param_2 + 0x1b4)) {
    fn_82923B38();
  }
  else {
    if (*(int *)(param_2 + 0x1b4) - *(int *)(param_2 + 0x1b0) >> 2 == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F622E0(0xffffffff821ae698);
    }
    fn_828B6330(param_1);
  }
  return param_1;
}

