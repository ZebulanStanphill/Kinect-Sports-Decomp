unsigned __int64 fn_830063D0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_1[8];
  if (iVar1 != 0) {
    piVar2 = (int *)(iVar1 + 0x24);
    iVar1 = *(int *)(iVar1 + 0x28) - *piVar2;
    while (iVar1 >> 4 != 0) {
      (**(int (***)())(*param_1 + 0xd8))(param_1,*(unsigned int *)*piVar2);
      piVar2 = (int *)(param_1[8] + 0x24);
      iVar1 = *(int *)(param_1[8] + 0x28) - *piVar2;
    }
  }
  return 1;
}

