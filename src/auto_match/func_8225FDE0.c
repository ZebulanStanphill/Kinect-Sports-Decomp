extern unsigned int lbl_831CF2FD;
extern unsigned int lbl_831CF2FE;


unsigned __int64 fn_8225FDE0(int param_1,int param_2)

{
  if (param_2 == 0) {
    return 1;
  }
  param_1 = param_1 * 0x10;
  if (((&lbl_831CF2FD)[param_1] != 0) &&
     ((unsigned char)(&lbl_831CF2FE)[param_1] < (unsigned char)(&lbl_831CF2FD)[param_1])) {
    (&lbl_831CF2FE)[param_1] = (&lbl_831CF2FE)[param_1] + 1;
    return 1;
  }
  (&lbl_831CF2FE)[param_1] = 0;
  return 0;
}

