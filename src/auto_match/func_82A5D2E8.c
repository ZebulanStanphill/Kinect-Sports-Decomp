extern int fn_82A4F4E0();
extern unsigned int lbl_8208DFC4;
extern unsigned int lbl_8208DFF0;
extern unsigned int lbl_8217E9E8;


unsigned int * fn_82A5D2E8(unsigned int *param_1,unsigned __int64 param_2)

{
  *param_1 = &lbl_8217E9E8;
  param_1[1] = &lbl_8208DFF0;
  param_1[1] = &lbl_8208DFC4;
  if ((param_2 & 1) != 0) {
    fn_82A4F4E0();
  }
  return param_1;
}

