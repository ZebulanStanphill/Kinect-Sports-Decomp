extern int fn_82A8C620();


void fn_82A8DB80(unsigned __int64 param_1,__int64 param_2,unsigned __int64 param_3,__int64 param_4)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  __int64 lVar4;
  
  puVar1 = (unsigned int *)param_2;
  puVar1[1] = 0;
  fn_82A8C620(param_3,param_4,0x20,param_2);
  param_4 = param_4 + 0x20;
  lVar4 = (unsigned __int64)*puVar1 - 1;
  if (-1 < lVar4) {
    lVar3 = lVar4 * 0xc + param_2 + 8;
    do {
      fn_82A8C620(param_3,param_4,0x20,lVar3 + 4);
      fn_82A8C620(param_3,param_4 + 0x20,0x20,lVar3);
      lVar4 = lVar4 + -1;
      param_4 = param_4 + 0x40;
      lVar3 = lVar3 + -0xc;
    } while (-1 < lVar4);
  }
  uVar2 = (unsigned __int64)*puVar1;
  if (-1 < (__int64)(uVar2 - 1)) {
    lVar4 = (uVar2 - 1) * 0xc + param_2 + 0x14;
    do {
      lVar4 = lVar4 + -0xc;
      puVar1[1] = *(int *)lVar4 + puVar1[1];
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}

