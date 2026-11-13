unsigned __int64 fn_823AA5E0(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  int (**pcVar1)();
  int iVar3;
  unsigned __int64 uVar2;
  unsigned __int64 uVar4;
  
  iVar3 = (**(int (***)())(*param_1 + 0x84))(param_1,param_3);
  if (iVar3 == 0) {
    return 1;
  }
  if (param_1[1] != 1) {
    return 0;
  }
  iVar3 = (**(int (***)())(*param_1 + 0x7c))(param_1,param_3);
  if (param_4 == iVar3) {
    if (param_1[8] == 0) {
      if (param_1[0xd] == 0) {
        param_1[0xd] = 1;
        return 0;
      }
      iVar3 = (**(int (***)())(*param_1 + 0x7c))(param_1,param_3);
      uVar4 = 2;
    }
    else {
      iVar3 = (**(int (***)())(*param_1 + 0x7c))(param_1,param_3);
      uVar4 = 5;
    }
LAB_823aa680:
    uVar2 = (unsigned __int64)(iVar3 == 0);
    pcVar1 = *(int (***)())(*param_1 + 0x9c);
  }
  else {
    if (param_1[8] == 0) {
      if (param_1[0xd] == 0) {
        iVar3 = (**(int (***)())(*param_1 + 0x7c))(param_1,param_3);
        uVar4 = 4;
        goto LAB_823aa680;
      }
      if (param_1[0xe] != 0) {
        param_1[1] = 2;
        return 0;
      }
    }
    if (param_1[0xc] == 0) {
      param_1[0xc] = 1;
      return 0;
    }
    iVar3 = *param_1;
    uVar2 = (**(int (***)())(iVar3 + 0x7c))(param_1,param_3);
    pcVar1 = *(int (***)())(iVar3 + 0x9c);
    uVar4 = 3;
  }
  (*pcVar1)(param_1,param_2,uVar2,uVar4);
  return 1;
}

