extern int fn_8265CA20();
extern int fn_8265CAA0();
extern unsigned int lbl_821BAC2C;


void fn_8245ADB8(unsigned int *param_1)

{
  unsigned int *piVar1;
  
  piVar1 = (int *)param_1[8];
  *param_1 = &lbl_821BAC2C;
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      fn_8265CAA0(*piVar1);
      *piVar1 = 0;
    }
    piVar1[1] = 0;
    piVar1[2] = 0;
    fn_8265CA20(piVar1);
    param_1[8] = 0;
  }
  return;
}

