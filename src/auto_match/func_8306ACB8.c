extern int fn_8265CA20();
extern int fn_83061F30();
extern int fn_8306AB80();
extern unsigned int lbl_8217E8A8;


void fn_8306ACB8(unsigned int *param_1)

{
  unsigned int *puVar1;
  
  if (param_1[0x26] != 0) {
    fn_8265CA20(param_1[0x26]);
  }
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  fn_83061F30(param_1 + 0x1a);
  fn_83061F30(param_1 + 0xe);
  for (puVar1 = (unsigned int *)param_1[0xb]; puVar1 != (unsigned int *)0x0;
      puVar1 = (unsigned int *)puVar1[2]) {
    puVar1[3] = 0;
    *puVar1 = 0;
  }
  *param_1 = &lbl_8217E8A8;
  if (param_1[3] != 0) {
    fn_8306AB80(param_1[3],param_1);
  }
  return;
}

