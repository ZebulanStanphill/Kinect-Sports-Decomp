extern int fn_8229CAD0();
extern int fn_8229CB40();
extern int fn_8249ABC0();


unsigned __int64 fn_8229C5E8(int param_1)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned int *puVar3;
  unsigned int *puVar4;
  
  if (*(int *)(param_1 + 0x6c) == 0) {
LAB_8229c654:
    if (*(int *)(param_1 + 0x68) != 0) {
      if (*(int *)(param_1 + 0x10) == 0) {
        puVar3 = (unsigned int *)(param_1 + 0x70);
        if (7 < *(unsigned int *)(param_1 + 0x84)) {
          puVar3 = (unsigned int *)*puVar3;
        }
        fn_8229CAD0(param_1,puVar3);
      }
      else {
        puVar3 = (unsigned int *)(param_1 + 0x8c);
        if (7 < *(unsigned int *)(param_1 + 0xa0)) {
          puVar3 = (unsigned int *)*puVar3;
        }
        puVar4 = (unsigned int *)(param_1 + 0x70);
        if (7 < *(unsigned int *)(param_1 + 0x84)) {
          puVar4 = (unsigned int *)*puVar4;
        }
        fn_8229CB40(param_1,puVar4,puVar3);
      }
      *(unsigned int *)(param_1 + 0x68) = 0;
    }
    uVar1 = 1;
  }
  else {
    if ((*(int *)(param_1 + 0x5c) == 0) &&
       (iVar2 = fn_8249ABC0(), *(int *)(iVar2 + 0x24) != 0)) {
      iVar2 = fn_8249ABC0();
      *(unsigned int *)(param_1 + 0x5c) = *(unsigned int *)(*(int *)(iVar2 + 0x110) + 0x34);
    }
    else {
      iVar2 = fn_8249ABC0();
      if (*(int *)(*(int *)(iVar2 + 0x110) + 0x34) == 0) goto LAB_8229c654;
    }
    uVar1 = 0;
  }
  return uVar1;
}

