extern int fn_82A99B70();
extern unsigned int lbl_82186E6C;


void fn_82A99CF8(unsigned __int64 param_1,unsigned __int64 param_2,__int64 param_3,int param_4,
                  unsigned __int64 param_5)

{
  if (param_4 == 0) {
    fn_82A99B70(param_1,0xffffffff820d2870,param_2,
                  (double)((float)(param_5 & 1) * lbl_82186E6C +
                          (float)((param_5 & 0xffffffff) >> 1)));
  }
  else {
    fn_82A99B70(param_1,0xffffffff820d2864,param_2,param_3 + param_5);
  }
  return;
}

