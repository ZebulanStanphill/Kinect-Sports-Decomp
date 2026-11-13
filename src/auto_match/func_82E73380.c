extern int fn_82E41B70();
extern int fn_82E73268();


int fn_82E73380(int param_1,unsigned param_2,unsigned param_3)

{
  int lVar1;
  int * apiStack_30;
  
  apiStack_30 = (int *)0x0;
  lVar1 = fn_82E73268(param_1);
  if (lVar1 >= 0) {
    lVar1 = (*(int (**)())(**(int **)(param_1 + 0x1d8) + 0x20))
                      (*(int **)(param_1 + 0x1d8),&apiStack_30);
    if (lVar1 >= 0) {
      lVar1 = (*(int (**)())(*apiStack_30 + 0x90))(apiStack_30,param_3);
      if ((lVar1 >= 0) &&
         (lVar1 = (*(int (**)())(*apiStack_30 + 0x98))(apiStack_30,param_2), lVar1 >= 0)) {
        lVar1 = fn_82E41B70(*(unsigned int *)(param_1 + 0xc),apiStack_30);
      }
    }
  }
  if (apiStack_30 != (int *)0x0) {
    (*(int (**)())(*apiStack_30 + 8))(apiStack_30);
  }
  return lVar1;
}

