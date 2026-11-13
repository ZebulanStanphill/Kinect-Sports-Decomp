extern int fn_82E715A8();


__int64 fn_82E71CC8(int param_1,unsigned int *param_2)

{
  __int64 lVar1;
  int * apiStack_30;
  
  if (param_2 == (unsigned int *)0x0) {
    lVar1 = -0x7fffbffd;
  }
  else {
    *param_2 = 0;
    apiStack_30 = (int *)0x0;
    lVar1 = (**(int (***)())(**(int **)(param_1 + 0x58) + 0x60))(*(int **)(param_1 + 0x58),&apiStack_30);
    if ((-1 < lVar1) && (lVar1 = fn_82E715A8(param_1,apiStack_30), -1 < lVar1)) {
      *param_2 = apiStack_30;
      (**(int (***)())(*apiStack_30 + 4))();
    }
    if (apiStack_30 != (int *)0x0) {
      (**(int (***)())(*apiStack_30 + 8))();
    }
  }
  return lVar1;
}

