unsigned __int64 fn_823AA8C8(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int (**pcVar1)();
  int iVar3;
  unsigned __int64 uVar2;
  unsigned __int64 uVar4;
  
  iVar3 = (**(int (***)())(*param_1 + 0x84))(param_1,param_3);
  if (iVar3 != 0) {
    if (param_1[0xc] == 0) {
      iVar3 = (**(int (***)())(*param_1 + 0x7c))(param_1,param_3);
      uVar4 = 6;
      uVar2 = (unsigned __int64)(iVar3 == 0);
      pcVar1 = *(int (***)())(*param_1 + 0x9c);
    }
    else {
      iVar3 = *param_1;
      uVar2 = (**(int (***)())(iVar3 + 0x7c))();
      pcVar1 = *(int (***)())(iVar3 + 0x9c);
      uVar4 = 1;
    }
    (*pcVar1)(param_1,param_2,uVar2,uVar4);
  }
  return 1;
}

