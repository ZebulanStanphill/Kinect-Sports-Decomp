unsigned __int64
fn_823AA770(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,int param_5,
             int param_6)

{
  int iVar1;
  unsigned __int64 uVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = (**(int (***)())(*param_1 + 0x84))(param_1,param_3);
  if (iVar1 != 0) {
    iVar1 = (**(int (***)())(*param_1 + 0x7c))(param_1,param_3);
    iVar4 = (int)param_4;
    if ((iVar4 == iVar1) && (param_6 != 0)) {
      uVar2 = 7;
      param_4 = (unsigned __int64)(iVar4 == 0);
    }
    else {
      iVar1 = param_1[8];
      if ((iVar1 != 0) || ((param_1[0xd] != 0 || (param_6 == 0)))) {
        if ((param_1[0xc] == 0) && (param_6 != 0)) {
          (**(int (***)())(*param_1 + 0x9c))(param_1,param_2,iVar4 == 0,0);
          param_1[0x11] = iVar4;
          param_1[0x12] = param_5;
          return 1;
        }
        param_1[3] = iVar4;
        param_1[5] = param_5;
        param_1[8] = iVar1 + 1;
        param_1[0xc] = 0;
        piVar3 = param_1 + 8;
        if (iVar1 + 1U < (unsigned int)param_1[9]) {
          piVar3 = param_1 + 9;
        }
        param_1[9] = *piVar3;
        return 0;
      }
      uVar2 = 4;
    }
    (**(int (***)())(*param_1 + 0x9c))(param_1,param_2,param_4,uVar2);
  }
  return 1;
}

