extern unsigned int uStack0000001f;


void fn_82F80590(int *param_1,unsigned char param_2)

{
  int (**pcVar1)();
  unsigned char uStack0000001f;
  
  if ((((param_1 != (int *)0x0) && (*param_1 == -0x1f928c9d)) && (param_1[7] != 0)) &&
     (pcVar1 = *(int (***)())(param_1[7] + 4), pcVar1 != (int (**)())0x0)) {
    uStack0000001f = param_2;
    (*pcVar1)(param_1[6]);
  }
  return;
}

