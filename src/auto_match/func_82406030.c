extern int fn_82359108();
extern int fn_82359200();
extern unsigned int lbl_82193D10;


void fn_82406030(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int (**pcVar1)();
  int iVar3;
  unsigned __int64 uVar2;
  
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 0xa0);
  if ((iVar3 == 0) || (*(int *)(iVar3 + 0x40) != 1)) {
    iVar3 = (**(int (***)())(**(int **)(param_1 + 0x14) + 4))();
    if (*(int *)(iVar3 + 0x24) == 0) {
      pcVar1 = *(int (***)())(**(int **)(param_1 + 0x14) + 8);
    }
    else {
      pcVar1 = *(int (***)())(**(int **)(param_1 + 0x14) + 4);
    }
    uVar2 = (*pcVar1)();
    fn_82359108((double)lbl_82193D10,*(unsigned int *)(param_1 + 8),uVar2,0,param_4,0);
  }
  else {
    fn_82359200((double)lbl_82193D10,*(int *)(param_1 + 8),param_2,0);
  }
  return;
}

