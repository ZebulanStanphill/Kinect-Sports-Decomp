extern int fn_827DA588();
extern int fn_827E4458();
extern unsigned int lbl_8201D950;


void fn_827E5F38(unsigned int *param_1)

{
  int *piVar1;
  unsigned int *puStack00000014;
  
  *param_1 = &lbl_8201D950;
  puStack00000014 = param_1;
  if (param_1[0x16] != 0) {
    piVar1 = (int *)fn_827DA588(param_1[8],param_1[0x15]);
    (**(int (***)())(*piVar1 + 0x20))(piVar1,param_1[0x16]);
    param_1[0x16] = 0;
  }
  fn_827E4458(param_1);
  return;
}

