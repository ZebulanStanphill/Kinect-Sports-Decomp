extern int fn_82FA5190();
extern unsigned int lbl_831BC768;


void fn_8300CD98(unsigned int *param_1)

{
  unsigned int uVar1;
  
  uVar1 = lbl_831BC768;
  if (param_1 != (unsigned int *)0x0) {
    (*(int (**)())*param_1)(param_1,0);
    fn_82FA5190(uVar1,param_1);
  }
  return;
}

