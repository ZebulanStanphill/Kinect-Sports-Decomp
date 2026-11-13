extern int fn_82FA5060();
extern unsigned int lbl_831BC768;


unsigned __int64 fn_82FB0028(int *param_1,unsigned int param_2)

{
  unsigned int iVar1;
  
  if ((param_2 & 0xffffffff) != 0) {
    iVar1 = fn_82FA5060(lbl_831BC768,(param_2 + (param_2 & 0x3fffffff) * 4 & 0x3fffffff) << 2)
    ;
    *param_1 = iVar1;
    param_1[1] = iVar1;
    if (iVar1 == 0) {
      return 0x34;
    }
    param_1[2] = (int)param_2;
  }
  return 1;
}

