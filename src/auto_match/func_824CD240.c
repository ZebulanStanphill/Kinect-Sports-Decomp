extern unsigned int *auStack_20;
extern int fn_824CD2E0();
extern int fn_8265CA20();
extern unsigned int lbl_821C0B60;


void fn_824CD240(unsigned int *param_1)

{
  unsigned char auStack_20 [16];
  
  *param_1 = &lbl_821C0B60;
  fn_824CD2E0(auStack_20,param_1 + 2,*(unsigned int *)param_1[3]);
  fn_8265CA20(param_1[3]);
  return;
}

