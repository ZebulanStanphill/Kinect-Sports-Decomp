int fn_82D51D80(unsigned int self,int param_2,int param_3)

{
  int lVar1;
  int iVar2;
  
  lVar1 = (*(int (**)())(**(int **)(self + 0x18) + 0x18))
                    (*(int **)(self + 0x18),param_2,param_3 + -0x40);
  iVar2 = lVar1;
  if ((iVar2 < 0) || (iVar2 > (int)(param_3 + -0x40))) {
    lVar1 = -1;
  }
  else if (*(int *)(self + 0x18) == self + 0x40) {
    lVar1 = lVar1 + 0x40;
    *(unsigned int *)(self + 0x1c) = 0;
  }
  else {
    *(int *)(self + 0x1c) = iVar2;
    lVar1 = 0x40;
  }
  return lVar1;
}

