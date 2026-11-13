extern int fn_8265CA20();
extern int fn_828E6D00();
extern unsigned int uStack_30;


void fn_828E8AC0(int *param_1)

{
  unsigned int uVar1;
  unsigned char uStack_30;
  
  uVar1 = param_1[6];
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if (*(int (***)())(uVar1 & 0xfffffffe) != (int (**)())0x0) {
        (**(int (***)())(uVar1 & 0xfffffffe))(param_1 + 8,param_1 + 8,2);
      }
    }
    param_1[6] = 0;
  }
  if (*param_1 != 0) {
    fn_828E6D00(*param_1,param_1[1],param_1 + 3,uStack_30);
    fn_8265CA20(*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

