#define true 1
extern int fn_82E80A68();
extern int fn_82F68CC0();


__int64 fn_82E80E98(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,int *param_4)

{
  unsigned int *puVar1;
  __int64 lVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  
  lVar3 = 0;
  if (((param_2 & 0xffffffff) == 0) || (param_4 == (int *)0x0)) {
    lVar3 = -0x7fffbffd;
  }
  else {
    if (0x10000 < ((unsigned int)param_1[2] + param_3 & 0xffffffff)) {
      param_3 = 0x10000 - (unsigned __int64)(unsigned int)param_1[2];
    }
    if ((param_3 & 0xffffffff) == 0) {
      lVar3 = -0x7ff8ffa9;
    }
    else {
      *param_4 = 0;
      if ((param_1[5] == 0) && (param_1[4] != 0)) {
        fn_82E80A68(param_1);
      }
      if (((unsigned __int64)(unsigned int)param_1[1] < ((unsigned int)param_1[2] + param_3 & 0xffffffff)) &&
         (lVar3 = (**(int (***)())(*param_1 + 0x14))(param_1,(unsigned int)param_1[2] + param_3 & 0xffffffff),
         lVar3 < 0)) {
        return lVar3;
      }
      if ((param_3 & 0xffffffff) != 0) {
        while( true ) {
          puVar1 = (unsigned int *)param_1[5];
          lVar2 = (unsigned __int64)(unsigned int)param_1[2] - (unsigned __int64)puVar1[1];
          uVar4 = param_3;
          if ((unsigned __int64)*puVar1 < (lVar2 + param_3 & 0xffffffff)) {
            uVar4 = (unsigned __int64)*puVar1 - lVar2;
          }
          fn_82F68CC0((unsigned __int64)puVar1[2] + lVar2,param_2,uVar4);
          param_3 = param_3 - uVar4;
          param_2 = uVar4 + param_2;
          param_1[2] = param_1[2] + (int)uVar4;
          *param_4 = *param_4 + (int)uVar4;
          if (param_3 == 0) break;
          param_1[5] = *(int *)(param_1[5] + 0xc);
        }
      }
    }
  }
  return lVar3;
}

