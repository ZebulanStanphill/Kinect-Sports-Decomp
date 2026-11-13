extern int fn_82A8C620();
extern int fn_82A8C770();


void fn_82A8F228(__int64 param_1,__int64 param_2,unsigned __int64 param_3,__int64 param_4)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  __int64 lVar5;
  
  puVar1 = (unsigned int *)param_2;
  puVar1[1] = 0;
  fn_82A8C620(param_3,param_4,0x20,param_2);
  param_4 = param_4 + 0x20;
  lVar4 = (unsigned __int64)*puVar1 - 1;
  if (-1 < lVar4) {
    lVar5 = lVar4 * 0x9c + param_2 + 0x70;
    do {
      fn_82A8C770(param_1,lVar5 + -0x68,param_3,param_4);
      fn_82A8C770(param_1 + 4,lVar5 + -0x34,param_3,param_4 + 0x92);
      fn_82A8C770(param_1 + 8,lVar5,param_3,param_4 + 0x124);
      lVar4 = lVar4 + -1;
      param_4 = param_4 + 0x1b6;
      lVar5 = lVar5 + -0x9c;
    } while (-1 < lVar4);
  }
  uVar3 = (unsigned __int64)*puVar1;
  if (-1 < (__int64)(uVar3 - 1)) {
    lVar4 = (uVar3 - 1) * 0x9c + param_2 + 0xcc;
    do {
      iVar2 = (int)lVar4;
      lVar4 = lVar4 + -0x9c;
      puVar1[1] = *(int *)(iVar2 + -100) + *(int *)(iVar2 + -0x60) + *(int *)(iVar2 + -0x68) +
                  *(int *)(iVar2 + -0x34) + *(int *)(iVar2 + -0x94) + *(int *)(iVar2 + -0x30) +
                  *(int *)(iVar2 + -0x98) + *(int *)(iVar2 + -0x2c) + *(int *)lVar4 + puVar1[1];
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}

