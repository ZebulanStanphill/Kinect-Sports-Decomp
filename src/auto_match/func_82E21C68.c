unsigned __int64 fn_82E21C68(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  
  iVar1 = (**(int (***)())(*param_1 + 0x1c))();
  iVar2 = (**(int (***)())(*param_1 + 0x20))(param_1,iVar1);
  param_1[1] = iVar2;
  for (uVar3 = (unsigned __int64)*(unsigned char *)(iVar1 + 0x21); uVar3 != 0; uVar3 = uVar3 - 1) {
    (**(int (***)())(*param_1 + 0x18))(param_1);
  }
  *param_2 = iVar1;
  return 0x40;
}

