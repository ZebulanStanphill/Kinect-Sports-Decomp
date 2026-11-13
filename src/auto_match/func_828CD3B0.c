extern int fn_8265CA20();
extern int fn_828BDD70();
extern int fn_828BDE70();
extern unsigned int lbl_820265B0;
extern unsigned int lbl_820265B8;


void fn_828CD3B0(unsigned int *param_1)

{
  unsigned int *puVar1;
  
  *param_1 = &lbl_820265B8;
  param_1[0x14] = &lbl_820265B0;
  if (param_1[0x24] != 0) {
    *(unsigned int *)(param_1[0x24] + 0x94) = param_1[0x25];
  }
  if (param_1[0x25] != 0) {
    *(unsigned int *)(param_1[0x25] + 0x90) = param_1[0x24];
  }
  if (param_1[0x20] != 0) {
    fn_828BDD70(param_1[0x20],param_1[0x31]);
  }
  if ((param_1[0x24] == 0) && (param_1[0x25] == 0)) {
    puVar1 = (unsigned int *)param_1[0x20];
    if (puVar1 != (unsigned int *)0x0) {
      (*(int (**)())*puVar1)(puVar1,1);
    }
  }
  if (param_1[0x2c] != 0) {
    fn_8265CA20(param_1[0x2c]);
  }
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  fn_828BDE70(param_1);
  return;
}

