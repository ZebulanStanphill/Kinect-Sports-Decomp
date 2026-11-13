unsigned __int64 fn_82960B98(int *param_1,int param_2,unsigned int *param_3,unsigned int *param_4)

{
  int iVar1;
  unsigned int uVar2;
  
  iVar1 = (**(int (***)())(*param_1 + 0x70))(param_1,*(unsigned int *)(param_2 + 0x6c));
  if (iVar1 == 0xffff) {
    *param_4 = 0;
    uVar2 = (**(int (***)())(*param_1 + 0x74))(param_1,*(unsigned int *)(param_2 + 0x6c));
    *param_3 = uVar2;
  }
  else {
    if (iVar1 == 0x11) {
      uVar2 = 1;
    }
    else {
      if (iVar1 != 0x12) {
        *param_4 = 1;
        *param_3 = *(unsigned int *)(param_2 + 0xc);
        return 0;
      }
      uVar2 = 0;
    }
    *param_4 = 0x11;
    *param_3 = uVar2;
  }
  return 0;
}

