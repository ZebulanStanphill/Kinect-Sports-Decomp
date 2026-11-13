extern int fn_82686368();


int fn_82686758(unsigned int *param_1,int *param_2)

{
  int *piVar1;
  int uVar2;
  unsigned int uVar3;
  
  if (*param_1 == 0) {
    uVar2 = -1;
  }
  else {
    piVar1 = (int *)*param_2;
    if (piVar1 != 0) { uVar3 = (*(int (**)())(*piVar1 + 0x10))(piVar1,param_2[1]); }
    else uVar3 = 0;
    uVar2 = fn_82686368(param_1,param_2,*(unsigned int *)(*param_1 + 4) & uVar3);
  }
  return uVar2;
}

