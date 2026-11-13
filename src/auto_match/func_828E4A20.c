extern unsigned int *auStack_20;
extern int fn_822315A0();
extern int fn_8265CA20();
extern int fn_82887890();
extern int fn_828E3870();
extern unsigned int lbl_820260A8;


void fn_828E4A20(unsigned int *param_1)

{
  unsigned char auStack_20 [8];
  
  if (param_1[10] != 0) {
    fn_8265CA20();
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  fn_828E3870(param_1 + 6,*(unsigned int *)param_1[7]);
  fn_82887890(auStack_20,param_1 + 6,*(unsigned int *)param_1[7]);
  fn_8265CA20(param_1[7]);
  if (param_1[5] != 0) {
    fn_822315A0();
  }
  *param_1 = &lbl_820260A8;
  if (param_1[3] != 0) {
    fn_822315A0();
  }
  return;
}

