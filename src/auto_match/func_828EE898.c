extern int fn_8265CA20();
extern int fn_82A1C0F0();
extern unsigned int lbl_82027588;


void fn_828EE898(unsigned int *param_1)

{
  *param_1 = &lbl_82027588;
  if ((int)param_1[2] == 1) {
    *(unsigned char *)((int)param_1 + 0x441) = 1;
    if (param_1[5] == 0x3e5) {
      fn_82A1C0F0(param_1 + 5);
    }
    if (param_1[4] != 0) {
      fn_8265CA20(param_1[4]);
      param_1[4] = 0;
    }
    param_1[2] = 0;
    *(unsigned char *)((int)param_1 + 0x441) = 0;
  }
  if (param_1[4] != 0) {
    fn_8265CA20(param_1[4]);
    param_1[4] = 0;
  }
  return;
}
