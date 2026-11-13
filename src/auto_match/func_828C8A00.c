extern int fn_828B5580();
extern int fn_828BDDA0();
extern unsigned int lbl_820256E0;
extern unsigned int lbl_820256E8;


unsigned int * fn_828C8A00(unsigned int *param_1,int param_2)

{
  fn_828BDDA0();
  *param_1 = &lbl_820256E8;
  param_1[0x14] = &lbl_820256E0;
  param_1[0x20] = (unsigned int)*(unsigned char *)(param_2 + 0x5c);
  fn_828B5580(param_1 + 0x21,param_2 + 0x14);
  return param_1;
}

