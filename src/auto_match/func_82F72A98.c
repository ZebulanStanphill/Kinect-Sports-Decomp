extern int fn_82F724D8();


int * fn_82F72A98(int *param_1,int param_2)

{
  unsigned int iVar1;
  
  *(char *)(param_1 + 1) = (char)param_2;
  *(unsigned char *)((int)param_1 + 5) = 0;
  if (param_2 == 1) {
    iVar1 = fn_82F724D8(1);
    *param_1 = iVar1;
    if (iVar1 == 0) {
      *(unsigned char *)(param_1 + 1) = 3;
    }
  }
  else {
    *param_1 = 0;
  }
  return param_1;
}

