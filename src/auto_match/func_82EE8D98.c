extern int fn_82E66280();
extern int fn_82EE88B0();


int fn_82EE8D98(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,__int64 param_4,
                      unsigned __int64 param_5)

{
  int *piVar1;
  int lVar2;
  int *apiStack_40 [1];
  
  apiStack_40[0] = (int *)0x0;
  if ((*(int *)(param_1 + 0x98) == 0) && (lVar2 = fn_82EE88B0(param_1), lVar2 < 0)) {
    goto done;
  }
  lVar2 = fn_82E66280(param_1,param_2,param_3,apiStack_40);
  if (lVar2 >= 0) {
    piVar1 = *(int **)(param_1 + 0xa0);
    if (param_4 == 0) {
      (*(int (**)())(*piVar1 + 0x14))(piVar1,apiStack_40[0]);
    }
    else {
      lVar2 = (*(int (**)())(*piVar1 + 0x24))(piVar1,param_4,apiStack_40[0],param_5);
      if (lVar2 < 0) {
        goto done;
      }
    }
    (*(int (**)())(*apiStack_40[0] + 8))(apiStack_40[0]);
  }
done:
  return lVar2;
}

