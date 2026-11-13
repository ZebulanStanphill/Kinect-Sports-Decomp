unsigned __int64 fn_82994310(int *param_1,int param_2,unsigned int *param_3,unsigned int *param_4)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  iVar1 = (**(int (***)())(*param_1 + 0x70))(param_1,*(unsigned int *)(param_2 + 0x6c));
  uVar2 = (**(int (***)())(*param_1 + 0x74))(param_1,*(unsigned int *)(param_2 + 0x6c));
  *param_3 = uVar2;
  if (iVar1 == 0xb) {
    if ((unsigned int)param_1[10] <= uVar2) {
      return 0xffffffff80004005;
    }
    uVar3 = 1;
  }
  else if (iVar1 == 6) {
    if (7 < uVar2) {
      return 0xffffffff80004005;
    }
    uVar3 = 3;
  }
  else {
    if (iVar1 != 0xffff) {
      return 0xffffffff80004005;
    }
    uVar3 = 0;
  }
  *param_4 = uVar3;
  return 0;
}

