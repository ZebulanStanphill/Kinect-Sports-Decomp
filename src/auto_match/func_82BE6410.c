extern int fn_82BE5240();


unsigned __int64 fn_82BE6410(int param_1,int param_2,int param_3)

{
  unsigned __int64 uVar1;
  unsigned char *puVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0x1c) == 0) || (*(int *)(param_1 + 0x28) < 1)) {
    uVar1 = 0xffffffff820e9668;
  }
  else if (*(int *)(param_1 + 0x24) < param_2 + param_3) {
    uVar1 = 0xffffffff820e962c;
  }
  else {
    if (param_3 != 0) {
      iVar3 = param_2;
      if (param_2 + param_3 < *(int *)(param_1 + 0x24)) {
        do {
          puVar2 = (unsigned char *)(iVar3 + *(int *)(param_1 + 0x1c));
          iVar3 = iVar3 + 1;
          *puVar2 = puVar2[param_3];
        } while (iVar3 + param_3 < *(int *)(param_1 + 0x24));
      }
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - param_3;
      if (param_2 < *(int *)(param_1 + 0x20)) {
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) - param_3;
      }
      return 1;
    }
    uVar1 = 0xffffffff820e9608;
  }
  fn_82BE5240(param_1,0x65,uVar1);
  return 0;
}

