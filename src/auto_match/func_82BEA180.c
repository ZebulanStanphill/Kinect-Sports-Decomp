extern int fn_82BE51E8();
extern unsigned int lbl_820EBE90;
extern unsigned int lbl_83175378;


unsigned int * fn_82BEA180(unsigned int *param_1,char *param_2,unsigned int param_3)

{
  fn_82BE51E8(param_1,"MassiveCriticalSection");
  *param_1 = &lbl_820EBE90;
  RtlInitializeCriticalSection(param_1 + 5);
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    param_2 = lbl_83175378;
  }
  param_1[0xd] = param_2;
  param_1[0xc] = param_3;
  return param_1;
}

