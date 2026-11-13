extern int fn_8252D108();
extern int fn_82554860();


int fn_8252D2F8(int param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4)

{
  int uVar1;
  
  uVar1 = (*(int (**)())(**(int **)(param_1 + 0x8c0) + 0x14))(*(int **)(param_1 + 0x8c0));
  if (uVar1 != 0) {
    if (*(int *)(param_1 + 400) == 0) {
      *(int *)(param_1 + 0x1a4) = param_2 + 1;
    }
    uVar1 = fn_8252D108(param_1);
    *(unsigned int *)(param_3 + 0x38) = 1;
    fn_82554860(uVar1,param_2,param_4,param_3);
    uVar1 = 1;
  }
  return uVar1;
}

