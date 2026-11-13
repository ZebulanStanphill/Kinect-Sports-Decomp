extern unsigned int *auStack_30;


void fn_82A76548(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int auStack_30;
  
  uVar1 = (*(int (**)())(**(int **)(param_1 + 0x84) + 0x28))(*(int **)(param_1 + 0x84));
  iVar2 = (*(int (**)())(**(int **)(param_1 + 0x84) + 0x20))(*(int **)(param_1 + 0x84),&auStack_30);
  if ((iVar2 >= 0) && (*param_2 = 1, *(int *)(param_1 + 0x94) != 0)) {
    if (*(int *)(param_1 + 0x80) + auStack_30 > uVar1) {
      uVar3 = 0;
    }
    else {
      if (*(int *)(param_1 + 0x80) * 2 + auStack_30 > uVar1) {
        return;
      }
      uVar3 = 2;
    }
    *param_2 = uVar3;
  }
  return;
}

