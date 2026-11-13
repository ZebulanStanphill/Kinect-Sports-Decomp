extern int fn_82A8C620();
extern int fn_82A8C770();


void fn_82A8EA88(__int64 param_1,__int64 param_2,unsigned __int64 param_3,__int64 param_4)

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
  lVar5 = (unsigned __int64)*puVar1 - 1;
  if (-1 < lVar5) {
    lVar4 = lVar5 * 0x68 + param_2 + 8;
    do {
      fn_82A8C770(param_1,lVar4,param_3,param_4);
      fn_82A8C770(param_1 + 4,lVar4 + 0x34,param_3,param_4 + 0x92);
      lVar5 = lVar5 + -1;
      param_4 = param_4 + 0x124;
      lVar4 = lVar4 + -0x68;
    } while (-1 < lVar5);
  }
  uVar3 = (unsigned __int64)*puVar1;
  if (-1 < (__int64)(uVar3 - 1)) {
    lVar5 = (uVar3 - 1) * 0x68 + param_2 + 0x98;
    do {
      iVar2 = (int)lVar5;
      lVar5 = lVar5 + -0x68;
      puVar1[1] = *(int *)(iVar2 + -0x30) + *(int *)(iVar2 + -0x2c) + *(int *)(iVar2 + -0x34) +
                  *(int *)(iVar2 + -0x60) + *(int *)(iVar2 + -100) + *(int *)lVar5 + puVar1[1];
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}

