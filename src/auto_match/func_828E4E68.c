extern unsigned int *auStack_20;
extern int fn_8265CA20();
extern int fn_828E48F0();
extern unsigned int lbl_820260A8;


void fn_828E4E68(unsigned int *param_1)

{
  unsigned char auStack_20 [16];
  
  if (param_1[6] != 0) {
    fn_8265CA20();
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  fn_828E48F0(auStack_20,param_1 + 2,*(unsigned int *)param_1[3]);
  fn_8265CA20(param_1[3]);
  *param_1 = &lbl_820260A8;
  return;
}

