void fn_82F21298(int param_1,__int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  __int64 param_5,int param_6,int param_7)

{
  __int64 lVar1;
  __int64 lVar2;
  int iVar3;
  __int64 lVar4;
  __int64 lVar5;
  
  lVar1 = (param_3 & 0x1fffffff) * 8;
  lVar4 = lVar1 + param_2;
  lVar2 = 0x10;
  iVar3 = 4;
  lVar1 = lVar1 + lVar4;
  if (param_6 != 0) {
    lVar2 = 0x14;
    iVar3 = 0;
  }
  if (param_7 == 0) {
    (**(int (***)())(param_1 + 0x86c))(lVar1,param_3,param_4,4);
    lVar1 = lVar1 + 4;
  }
  else {
    lVar2 = lVar2 + -4;
  }
  (**(int (***)())(param_1 + 0x86c))(lVar4,param_3,param_4,4);
  lVar4 = lVar4 + 4;
  lVar5 = (__int64)iVar3 * (__int64)(int)param_3 + param_2 + 3;
  param_5 = param_5 + -1;
  if (0 < param_5) {
    if (param_7 == 0) {
      do {
        (**(int (***)())(param_1 + 0x86c))(lVar4,param_3,param_4,0x10);
        (**(int (***)())(param_1 + 0x86c))(lVar1,param_3,param_4,0x10);
        (**(int (***)())(param_1 + 0x870))(lVar5,param_3,param_4,lVar2);
        (**(int (***)())(param_1 + 0x870))(lVar5 + 8,param_3,param_4,lVar2);
        param_5 = param_5 + -1;
        lVar4 = lVar4 + 0x10;
        lVar1 = lVar1 + 0x10;
        lVar5 = lVar5 + 0x10;
      } while (param_5 != 0);
    }
    else {
      do {
        (**(int (***)())(param_1 + 0x86c))(lVar4,param_3,param_4,0x10);
        (**(int (***)())(param_1 + 0x870))(lVar5,param_3,param_4,lVar2);
        (**(int (***)())(param_1 + 0x870))(lVar5 + 8,param_3,param_4,lVar2);
        param_5 = param_5 + -1;
        lVar4 = lVar4 + 0x10;
        lVar5 = lVar5 + 0x10;
      } while (param_5 != 0);
    }
  }
  (**(int (***)())(param_1 + 0x86c))(lVar4,param_3,param_4,0xc);
  if (param_7 == 0) {
    (**(int (***)())(param_1 + 0x86c))(lVar1,param_3,param_4,0xc);
  }
  (**(int (***)())(param_1 + 0x870))(lVar5,param_3,param_4,lVar2);
  return;
}

