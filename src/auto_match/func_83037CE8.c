extern int fn_82FA5190();
extern unsigned int lbl_831BC768;


void fn_83037CE8(unsigned int *param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)*param_1;
  if (puVar1 != (unsigned int *)param_1[1]) {
    do {
      fn_82FA5190(lbl_831BC768,*puVar1);
      puVar1 = puVar1 + 2;
    } while (puVar1 != (unsigned int *)param_1[1]);
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    fn_82FA5190(lbl_831BC768,*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

