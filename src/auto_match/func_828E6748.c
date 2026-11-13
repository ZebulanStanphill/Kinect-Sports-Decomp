extern int fn_828E2C48();


extern unsigned int lbl_832144C0;

void fn_828E6748(int *param_1)

{
  int *piVar1;
  
  fn_828E2C48(&lbl_832144C0,param_1);
  piVar1 = (int *)param_1[4];
  if (piVar1 != (int *)0x0) {
    (*(int (**)())(*piVar1 + 0xc))(piVar1,piVar1 != param_1);
    param_1[4] = 0;
  }
  return;
}

