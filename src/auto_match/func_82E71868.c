extern int fn_82E6FC88();
extern int fn_82E704F0();
extern int fn_82E70780();


__int64 fn_82E71868(int *param_1,unsigned __int64 param_2,__int64 *param_3,unsigned int *param_4)

{
  int iVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  int *apiStack_60 [2];
  __int64 lStack_58;
  __int64 alStack_50 [2];
  
  apiStack_60[0] = (int *)0x0;
  if (param_3 == (__int64 *)0x0) {
    lVar4 = -0x7fffbffd;
  }
  else {
    *param_3 = 0;
    lVar4 = fn_82E704F0(param_1,param_2,apiStack_60,alStack_50);
    piVar2 = apiStack_60[0];
    if (-1 < lVar4) {
      lVar4 = fn_82E70780(param_1,param_2,apiStack_60[0],alStack_50[0],apiStack_60);
      if (-1 < lVar4) {
        lStack_58 = 0;
        iVar1 = *piVar2;
        uVar3 = (**(int (***)())(*param_1 + 0x34))(param_1);
        lVar4 = (**(int (***)())(iVar1 + 0x2c))
                          (piVar2,apiStack_60[0],*(unsigned short *)(param_1 + 2),uVar3,&lStack_58);
        if (-1 < lVar4) {
          *param_3 = lStack_58 + alStack_50[0];
          lVar4 = fn_82E6FC88(param_1);
          if ((-1 < lVar4) && (param_4 != (unsigned int *)0x0)) {
            *param_4 = piVar2;
            (**(int (***)())(*piVar2 + 4))(piVar2);
          }
        }
      }
    }
    if (piVar2 != (int *)0x0) {
      (**(int (***)())(*piVar2 + 8))(piVar2);
    }
  }
  return lVar4;
}

