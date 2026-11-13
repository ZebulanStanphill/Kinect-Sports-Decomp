extern int fn_82CE5410();
extern int fn_82CE6310();


void fn_82D04B20(int *param_1)

{
  int iVar1;
  int uVar2;
  
  iVar1 = *(int *)(fn_82CE5410() + 0xc);
  if ((int)(param_1[2] & 0x3fffffff) < 1) {
    uVar2 = (param_1[2] & 0x3fffffff) << 1;
    if (uVar2 <= 1) {
      uVar2 = 1;
    }
    fn_82CE6310(iVar1,param_1,uVar2,1);
  }
  param_1[1] = 1;
  *(unsigned char *)*param_1 = 0;
  return;
}

