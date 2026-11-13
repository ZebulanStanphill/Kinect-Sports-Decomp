extern int fn_828F9B30();


int fn_828FCA70(unsigned int *param_1,int param_2,unsigned int *param_3)

{
  int lVar1;
  unsigned int uVar2;
  
  lVar1 = fn_828F9B30(param_2,param_1);
  if (lVar1 >= 0) {
    uVar2 = (*(int (**)())(*(int *)*param_1 + 0xc))(*param_1);
    *param_3 = uVar2;
  }
  return lVar1;
}

