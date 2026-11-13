extern unsigned int lbl_820E9264;
extern unsigned int lbl_83175198;


void fn_82BE51E8(unsigned int *param_1,char *param_2)

{
  param_1[1] = 0;
  *param_1 = &lbl_820E9264;
  param_1[2] = 0;
  param_1[4] = 1;
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    param_2 = lbl_83175198;
  }
  param_1[3] = param_2;
  return;
}

