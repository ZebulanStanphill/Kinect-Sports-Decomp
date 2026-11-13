extern int fn_82F74E38();
extern int fn_82F75568();
extern int fn_82F75708();
extern const char *lbl_832635C0;


unsigned __int64 fn_82F75C50(unsigned __int64 param_1)

{
  if (*lbl_832635C0 == '?') {
    if (lbl_832635C0[1] == '$') {
      fn_82F75568(param_1,1);
    }
    else {
      lbl_832635C0 = lbl_832635C0 + 1;
      fn_82F74E38(param_1,0,0);
    }
  }
  else {
    fn_82F75708(param_1,1,0);
  }
  return param_1;
}

