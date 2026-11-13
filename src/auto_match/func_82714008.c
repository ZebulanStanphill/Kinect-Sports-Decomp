extern int fn_826C0B08();
extern int fn_82713AB0();
extern unsigned int lbl_8200F318;
extern unsigned int lbl_8200F36C;


unsigned int * fn_82714008(unsigned int *param_1,unsigned __int64 param_2)

{
  fn_826C0B08();
  *param_1 = &lbl_8200F36C;
  param_1[4] = &lbl_8200F318;
  *(unsigned char *)(param_1 + 0xc) = 0;
  fn_82713AB0(param_1,param_2);
  return param_1;
}

