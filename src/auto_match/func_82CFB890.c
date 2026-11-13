int fn_82CFB890(int param_1,int param_2,int param_3)

{
  int lVar1;
  int lVar2;
  
  lVar2 = 0;
  if (0 < param_3) {
    do {
      lVar1 = (*(int (**)())(**(int **)(param_1 + 8) + 0x18))
                        (*(int **)(param_1 + 8),lVar2 + param_2,param_3 - lVar2);
      lVar2 = lVar1 + lVar2;
      if (lVar1 == 0) {
        return lVar2;
      }
    } while (lVar2 < param_3);
  }
  return param_3;
}

