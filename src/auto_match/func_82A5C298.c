extern int fn_82A4F4E0();
extern unsigned int lbl_8208DF38;


void fn_82A5C298(unsigned int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[1];
  *param_1 = &lbl_8208DF38;
  if (piVar1 != (int *)0x0) {
    (*(int (**)())(*piVar1 + 0xc))(piVar1,0);
    fn_82A4F4E0();
    param_1[1] = 0;
  }
  *param_1 = 0;
  return;
}

