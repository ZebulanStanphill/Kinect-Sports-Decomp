extern unsigned int *auStack_4030;


__int64 fn_826E9D40(int *param_1,int *param_2,__int64 param_3)

{
  __int64 lVar1;
  __int64 lVar2;
  __int64 lVar3;
  __int64 lVar4;
  unsigned char auStack_4030 [16368];
  
  lVar3 = 0;
  do {
    if ((int)param_3 == 0) {
      return lVar3;
    }
    lVar4 = 0x4000;
    if ((int)param_3 < 0x4001) {
      lVar4 = param_3;
    }
    lVar1 = (**(int (***)())(*param_2 + 0x28))(param_2,auStack_4030,lVar4);
    lVar2 = 0;
    if (0 < lVar1) {
      lVar2 = (**(int (***)())(*param_1 + 0x24))(param_1,auStack_4030);
    }
    lVar3 = lVar2 + lVar3;
    param_3 = param_3 - lVar2;
  } while ((int)lVar4 <= (int)lVar2);
  return lVar3;
}

