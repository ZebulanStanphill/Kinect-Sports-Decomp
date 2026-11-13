extern int fn_82BEA420();


int fn_82BE2790(int param_1,int *param_2)

{
  int uVar1;
  unsigned int uVar2;
  
  if ((param_2 != (int *)0x0) && (*(unsigned int *)(param_1 + 0x150) != 0)) {
    uVar1 = (*(int (**)())(*param_2 + 4))(param_2);
    uVar2 = fn_82BEA420(*(unsigned int *)(param_1 + 0x150),uVar1);
    if (uVar2 != 0) {
      return uVar2 + 0x2c;
    }
  }
  return 0;
}

