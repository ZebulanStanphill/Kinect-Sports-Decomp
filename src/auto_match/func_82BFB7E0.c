typedef unsigned char bool;
extern int fn_82A277E0();
extern int fn_82A28568();
extern int fn_82A2A360();
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82BFB7E0(int param_1,__int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned int *puVar5;
  char in_RESERVE;
  unsigned char in_cr0;
  
  if ((int)param_2 < 1) {
    uVar2 = 0;
  }
  else {
    puVar5 = (unsigned int *)param_3;
    if (param_1 == 0) {
      uVar3 = fn_82A2A360();
      uVar2 = fn_82A28568(uVar3,0,param_2);
      if ((((uVar2 & 0xffffffff) != 0) && ((param_3 & 0xffffffff) != 0)) &&
         (lVar4 = fn_82A277E0(uVar3,0,uVar2), 0 < (int)lVar4)) {
        do {
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed(lVar4 + (unsigned __int64)*puVar5,0,param_3);
            *puVar5 = uVar1;
            in_cr0 = 2;
          }
        } while (!(bool)(in_cr0 >> 1 & 1));
      }
    }
    else {
      uVar2 = (**(int (***)())(param_1 + 8))(*(unsigned int *)(param_1 + 4),param_2);
      if ((param_3 & 0xffffffff) != 0) {
        do {
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed(param_2 + (unsigned __int64)*puVar5,0,param_3);
            *puVar5 = uVar1;
            in_cr0 = 2;
          }
        } while (!(bool)(in_cr0 >> 1 & 1));
      }
    }
  }
  return uVar2;
}

