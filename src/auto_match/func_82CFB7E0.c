int fn_82CFB7E0(int self,int param_2,int param_3)

{
  int lVar1;
  int lVar2;
  
  lVar2 = 0;
  if (0 < param_3) {
    do {
      lVar1 = (*(int (**)())(**(int **)(self + 8) + 0x14))
                        (*(int **)(self + 8),lVar2 + param_2,param_3 - lVar2);
      lVar2 = lVar1 + lVar2;
      if (lVar1 == 0) {
        return lVar2;
      }
    } while (lVar2 < param_3);
  }
  return param_3;
}

