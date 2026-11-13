extern int fn_82F72808();
extern int fn_82F78748();
extern unsigned char *lbl_832635C0;


unsigned __int64 fn_82F72D78(unsigned __int64 param_1)

{
  if (*lbl_832635C0 == '@') {
    lbl_832635C0 = lbl_832635C0 + 1;
    fn_82F72808();
  }
  else {
    fn_82F78748();
  }
  return param_1;
}

