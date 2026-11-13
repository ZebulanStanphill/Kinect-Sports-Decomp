int fn_82D51D80(unsigned int param_1,int param_2,int param_3)

{
  int lVar1;
  int iVar2;
  
  lVar1 = (*(int (**)())(**(int **)(param_1 + 0x18) + 0x18))
                    (*(int **)(param_1 + 0x18),param_2,param_3 + -0x40);
  iVar2 = lVar1;
  if ((iVar2 < 0) || (iVar2 > (int)(param_3 + -0x40))) {
    lVar1 = -1;
  }
  else if (*(int *)(param_1 + 0x18) == param_1 + 0x40) {
    lVar1 = lVar1 + 0x40;
    *(unsigned int *)(param_1 + 0x1c) = 0;
  }
  else {
    *(int *)(param_1 + 0x1c) = iVar2;
    lVar1 = 0x40;
  }
  return lVar1;
}

