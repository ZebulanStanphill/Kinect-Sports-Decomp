extern int fn_82FA70D8();
extern int fn_82FAF930();
extern unsigned int lbl_83264230;


unsigned int  fn_82FADC50(unsigned __int64 param_1,int *param_2)

{
  unsigned __int64 uVar1;
  
  if (*param_2 == 4) {
    fn_82FA70D8(lbl_83264230,param_1,param_2[1],param_2[7]);
    return 1;
  }
  uVar1 = fn_82FAF930(param_1,param_2);
  return uVar1;
}

