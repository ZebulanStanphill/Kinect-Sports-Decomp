extern int fn_82BE8CE0();
extern unsigned int lbl_820EBE74;
extern unsigned int lbl_83175ADC;


unsigned int * fn_82BFAB68(unsigned int *param_1,char *param_2,unsigned int param_3)

{
  fn_82BE8CE0();
  *param_1 = &lbl_820EBE74;
  RtlInitializeCriticalSection(param_1 + 2);
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    param_2 = lbl_83175ADC;
  }
  param_1[10] = param_2;
  param_1[9] = param_3;
  return param_1;
}

