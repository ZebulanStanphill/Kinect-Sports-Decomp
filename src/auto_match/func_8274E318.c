extern int fn_826C0B08();
extern unsigned int lbl_82013688;
extern unsigned int lbl_820136DC;


unsigned int * fn_8274E318(unsigned int *param_1,unsigned __int64 param_2,unsigned char param_3)

{
  fn_826C0B08();
  *(unsigned char *)(param_1 + 0xc) = param_3;
  *param_1 = &lbl_820136DC;
  param_1[4] = &lbl_82013688;
  return param_1;
}

