extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CF6B28();


void fn_82D04E70(unsigned int *param_1,__int64 param_2,int param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  if ((int)param_2 != 0) {
    fn_82CF6B28((unsigned __int64)*param_1,(unsigned __int64)*param_1 + param_2);
  }
  uVar3 = param_3 + 1;
  iVar1 = fn_82CE5410();
  if ((int)(param_1[2] & 0x3fffffff) < (int)uVar3) {
    uVar2 = (param_1[2] & 0x3fffffff) << 1;
    if ((int)uVar2 <= (int)uVar3) {
      uVar2 = uVar3;
    }
    fn_82CE6310(*(unsigned int *)(iVar1 + 0xc),param_1,uVar2,1);
  }
  param_1[1] = uVar3;
  *(unsigned char *)(*param_1 + param_3) = 0;
  return;
}

