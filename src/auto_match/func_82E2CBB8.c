extern unsigned int *auStack_50;


__int64 fn_82E2CBB8(unsigned int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                      unsigned __int64 param_5)

{
  __int64 lVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  unsigned int auStack_50 [20];
  
  uVar3 = 0;
  if ((int)param_5 != 0) {
    uVar3 = (**(int (***)())(*(int *)(param_1 - 4) + 0x1c))(param_1 - 4,0xffffffff821536b8,auStack_50);
    uVar3 = ((uVar3 & 0xffffffff) >> 0x1f) - 1 & (unsigned __int64)auStack_50[0];
    lVar1 = (**(int (***)())(*(int *)(param_1 - 4) + 0x54))(param_1 - 4,0xffffffff821536b8,param_5);
    if (lVar1 < 0) {
      return lVar1;
    }
  }
  piVar2 = (int *)(-(unsigned int)(param_1 != 4) & param_1);
  lVar1 = (**(int (***)())(*piVar2 + 0x90))(piVar2,param_2,param_3,param_4);
  if ((int)param_5 != 0) {
    if ((int)uVar3 == 0) {
      (**(int (***)())(*(int *)(param_1 - 4) + 0x4c))();
    }
    else {
      (**(int (***)())(*(int *)(param_1 - 4) + 0x54))(param_1 - 4,0xffffffff821536b8,uVar3);
    }
  }
  return lVar1;
}

