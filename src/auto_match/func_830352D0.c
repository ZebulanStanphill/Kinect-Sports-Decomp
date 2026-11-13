extern int fn_82FA5190();
extern int fn_83001F78();
extern unsigned int lbl_831BC768;


unsigned __int64 fn_830352D0(unsigned int *param_1)

{
  unsigned __int64 uVar1;
  
  uVar1 = 1;
  if (param_1[1] != 0) {
    uVar1 = fn_83001F78();
    param_1[1] = 0;
  }
  param_1[1] = 0;
  *param_1 = 0;
  if (param_1[2] != 0) {
    fn_82FA5190(lbl_831BC768);
    param_1[2] = 0;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return uVar1;
}

