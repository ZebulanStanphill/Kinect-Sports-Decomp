extern int fn_822FF888();
extern int fn_8265CA20();
extern int fn_828877E8();
extern int fn_828B55B0();
extern int fn_828BDC38();
extern int fn_82F63108();
extern unsigned int lbl_82025550;
extern unsigned int lbl_82025988;


void fn_828BDE70(unsigned int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  *param_1 = &lbl_82025550;
  param_1[0x14] = &lbl_82025988;
  piVar2 = param_1 + 0x1c;
  piVar3 = *(int **)param_1[0x1c];
  if (piVar3 != (int *)param_1[0x1c]) {
    do {
      piVar1 = (int *)*piVar3;
      piVar3 = (int *)piVar3[6];
      if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      (**(int (***)())(*piVar3 + 4))(piVar3,param_1);
      piVar3 = piVar1;
    } while (piVar1 != (int *)*piVar2);
  }
  fn_828BDC38(piVar2);
  fn_8265CA20(*piVar2);
  fn_828B55B0(param_1 + 0x18);
  fn_822FF888(param_1 + 0x14);
  fn_828877E8(param_1);
  return;
}

