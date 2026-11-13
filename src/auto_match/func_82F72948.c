extern int fn_82F72318();


unsigned char * fn_82F72948(int *param_1,unsigned char *param_2,int param_3)

{
  unsigned char *puVar1;
  
  if ((unsigned int *)*param_1 == (unsigned int *)0x0) {
    if (param_2 != (unsigned char *)0x0) {
      *param_2 = 0;
    }
  }
  else {
    if (param_2 == (unsigned char *)0x0) {
      param_3 = (*(int (**)())**(unsigned int **)*param_1)();
      param_3 = param_3 + 1;
      param_2 = (unsigned char *)fn_82F72318(0xffffffff832635a0,param_3,0);
      if (param_2 == (unsigned char *)0x0) {
        return (unsigned char *)0x0;
      }
    }
    param_1 = (int *)*param_1;
    puVar1 = param_2;
    if (param_1 != (int *)0x0) {
      puVar1 = (unsigned char *)(**(int (***)())(*param_1 + 8))(param_1,param_2,param_2 + param_3 + -1);
    }
    *puVar1 = 0;
  }
  return param_2;
}

