extern int fn_826C35B8();
extern void fn_826C3818(void);
extern unsigned int lbl_8200B7F0;
extern unsigned int lbl_8200B848;


unsigned int * fn_826C3B90(unsigned int *param_1,unsigned __int64 param_2)

{
  fn_826C35B8(param_1,param_2,fn_826C3818);
  *param_1 = &lbl_8200B848;
  param_1[4] = &lbl_8200B7F0;
  return param_1;
}

