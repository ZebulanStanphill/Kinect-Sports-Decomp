extern int fn_82CE6310();
extern int fn_82CF6B28();


void fn_82D05808(int *param_1,unsigned __int64 param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  unsigned char *puVar3;
  int iVar4;
  
  iVar1 = param_1[1];
  iVar4 = (iVar1 - param_4) + param_6;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar4) {
    iVar2 = (param_1[2] & 0x3fffffffU) << 1;
    if (iVar2 <= iVar4) {
      iVar2 = iVar4;
    }
    fn_82CE6310(param_2,param_1,iVar2,1);
  }
  fn_82CF6B28(*param_1 + param_3 + param_6,*param_1 + param_3 + param_4,(iVar1 - param_3) - param_4
              );
  puVar3 = (unsigned char *)(*param_1 + param_3);
  if (0 < param_6) {
    param_5 = param_5 - (int)puVar3;
    do {
      *puVar3 = puVar3[param_5];
      puVar3 = puVar3 + 1;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  param_1[1] = iVar4;
  return;
}

