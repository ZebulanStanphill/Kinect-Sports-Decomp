extern int fn_82F09B38();


void fn_82F09320(int param_1,int param_2,unsigned __int64 param_3)

{
  int iVar1;
  short sVar2;
  int iVar3;
  __int64 lVar4;
  short asStack_a0 [68];
  
  fn_82F09B38(asStack_a0,param_3,8,0xff);
  iVar1 = 0;
  do {
    iVar3 = 0;
    lVar4 = 8;
    do {
      sVar2 = asStack_a0[iVar1 + iVar3];
      if (sVar2 < 0) {
        sVar2 = 0;
      }
      else if (0xff < sVar2) {
        sVar2 = 0xff;
      }
      *(char *)(iVar3 + param_1) = (char)sVar2;
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    iVar1 = iVar1 + 8;
    param_1 = param_1 + param_2;
  } while (iVar1 < 0x40);
  return;
}

