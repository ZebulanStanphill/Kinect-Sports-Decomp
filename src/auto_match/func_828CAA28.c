extern unsigned int *auStack_20;
extern int fn_8265CA20();
extern int fn_828B22F0();
extern int fn_828CA670();
extern unsigned int lbl_82026438;


void fn_828CAA28(unsigned int *param_1)

{
  int *piVar1;
  unsigned char auStack_20 [8];
  
  *param_1 = &lbl_82026438;
  piVar1 = (int *)param_1[0xe];
  if (piVar1 != (int *)0x0) {
    (**(int (***)())(*piVar1 + 0xc))(piVar1,param_1 + 10 != piVar1);
    param_1[0xe] = 0;
  }
  fn_828B22F0(param_1 + 6);
  fn_8265CA20(param_1[6]);
  fn_828CA670(auStack_20,param_1 + 2,*(unsigned int *)param_1[3]);
  fn_8265CA20(param_1[3]);
  return;
}

