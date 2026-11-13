extern int fn_822FAF40();


unsigned int fn_822FAEB8(int *param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  
  if (*param_1 == 0) {
    *param_1 = param_2;
    fn_822FAF40();
  }
  iVar1 = param_1[2];
  uVar2 = *(unsigned int *)(iVar1 + -4);
  if (param_1[1] != iVar1) {
    param_1[2] = iVar1 + -4;
  }
  if (param_1[1] == param_1[2]) {
    fn_822FAF40(param_1);
  }
  return uVar2;
}

