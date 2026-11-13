extern int fn_828EA268();


void fn_828CF1B0(int param_1,int *param_2)

{
  int *piVar1;
  unsigned int uVar2;
  
  (*(int (**)())(*param_2 + 0x38))(param_2);
  piVar1 = (int *)(*(int (**)())(*param_2 + 0x3c))(param_2);
  (*(int (**)())(*piVar1 + 4))();
  uVar2 = fn_828EA268((unsigned __int64)(unsigned int)piVar1[2] - 1);
  *(unsigned int *)(param_1 + 8) = uVar2;
  return;
}

