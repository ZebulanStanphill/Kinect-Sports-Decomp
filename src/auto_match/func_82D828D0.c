extern int fn_82D949A8();


void fn_82D828D0(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x1bc);
  if (iVar4 == 0) {
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x118)) {
      iVar2 = 0;
      do {
        fn_82D949A8(param_2,*(unsigned int *)(*(int *)(param_1 + 0x114) + iVar2));
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar4 < *(int *)(param_1 + 0x118));
    }
  }
  else {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x118)) {
      iVar3 = 0;
      do {
        iVar1 = *(int *)(*(int *)(param_1 + 0x114) + iVar3);
        if ((((iVar1 != *(int *)(iVar4 + 0x18)) && (iVar1 != *(int *)(iVar4 + 0x1c))) &&
            (iVar1 != *(int *)(iVar4 + 0x20))) &&
           (((iVar1 != *(int *)(iVar4 + 0x24) && (iVar1 != *(int *)(iVar4 + 0x28))) &&
            (iVar1 != *(int *)(iVar4 + 0x2c))))) {
          fn_82D949A8(param_2);
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar2 < *(int *)(param_1 + 0x118));
    }
  }
  return;
}

