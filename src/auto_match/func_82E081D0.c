extern int fn_82CE4040();
extern int fn_82CE4118();
extern int fn_82CE6310();
extern int fn_82CED540();
extern int fn_82CED5B8();
extern int fn_82CF6B28();


void fn_82E081D0(int *param_1,unsigned __int64 param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = param_1[1];
  iVar3 = (iVar2 - param_4) + param_6;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar3) {
    iVar1 = (param_1[2] & 0x3fffffffU) << 1;
    if (iVar1 <= iVar3) {
      iVar1 = iVar3;
    }
    fn_82CE6310(param_2,param_1,iVar1,8);
  }
  if (0 < param_4) {
    piVar4 = (int *)(param_3 * 8 + *param_1 + 4);
    iVar1 = param_4;
    do {
      if (*piVar4 != 0) {
        fn_82CE4118();
      }
      *piVar4 = 0;
      fn_82CED5B8(piVar4 + -1);
      iVar1 = iVar1 + -1;
      piVar4 = piVar4 + 2;
    } while (iVar1 != 0);
  }
  fn_82CF6B28((param_3 + param_6) * 8 + *param_1,(param_3 + param_4) * 8 + *param_1,
               (iVar2 - param_3) - param_4 & 0x1fffffff);
  iVar2 = param_3 * 8 + *param_1;
  if (0 < param_6) {
    piVar4 = (int *)(param_5 + 4);
    param_5 = iVar2 - param_5;
    do {
      if (iVar2 != 0) {
        fn_82CED540(iVar2,piVar4 + -1);
        if (*piVar4 != 0) {
          fn_82CE4040();
        }
        *(int *)(param_5 + (int)piVar4) = *piVar4;
      }
      param_6 = param_6 + -1;
      iVar2 = iVar2 + 8;
      piVar4 = piVar4 + 2;
    } while (param_6 != 0);
  }
  param_1[1] = iVar3;
  return;
}

