extern int fn_82F68B6C();


void fn_82BBA050(int param_1,int param_2,int param_3,int param_4)

{
  if ((3 < param_4) && (param_4 < 6)) {
    fn_82F68B6C(0,0xffffffff820d2ea4,0xffffffff82196f10,0xffffffff820df2c0,0x6a3);
    return;
  }
  *(char *)((param_2 + 0x20) * 4 + param_3 + param_1) = (char)param_4;
  return;
}

