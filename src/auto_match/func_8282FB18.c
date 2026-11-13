extern int fn_82822F60();
extern int fn_828252D0();
extern int fn_828252E8();
extern int fn_82832368();
extern int fn_82F678C8();
extern int __iob_func();
extern int fprintf();


unsigned __int64 fn_8282FB18(unsigned __int64 param_1,int param_2)

{
  unsigned __int64 uVar1;
  int iVar3;
  __int64 lVar2;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  int aiStack_30;
  
  uVar1 = fn_828252D0(*(int *)(param_2 + 0xa4) << 2);
  *(int *)(param_2 + 0x3c4) = (int)uVar1;
  iVar3 = fn_82F678C8(uVar1,4,*(unsigned int *)(param_2 + 0xa4),param_1);
  if (iVar3 == *(int *)(param_2 + 0xa4)) {
    fn_82832368(*(unsigned int *)(param_2 + 0x3bc));
    uVar6 = 0;
    if (*(int *)(param_2 + 0xa4) != 0) {
      iVar3 = *(int *)(param_2 + 0x3c4);
      iVar5 = 0;
      do {
        uVar1 = fn_828252D0(*(unsigned int *)(iVar5 + iVar3));
        *(int *)(**(int **)(param_2 + 0x3bc) + iVar5) = (int)uVar1;
        iVar4 = fn_82F678C8(uVar1,1,*(unsigned int *)(iVar5 + *(int *)(param_2 + 0x3c4)),param_1);
        iVar3 = *(int *)(param_2 + 0x3c4);
        if (iVar4 != *(int *)(iVar5 + iVar3)) {
          lVar2 = __iob_func();
          uVar1 = 0xffffffff8201ef50;
          goto LAB_8282fb68;
        }
        uVar6 = uVar6 + 1;
        iVar5 = iVar5 + 4;
      } while (uVar6 < *(unsigned int *)(param_2 + 0xa4));
    }
    uVar6 = 0;
    if (*(int *)(param_2 + 0xa0) != 0) {
      do {
        aiStack_30 = fn_828252E8(param_2,0x18);
        *(int *)(aiStack_30 + 0x10) = param_2;
        *(unsigned int *)(aiStack_30 + 0x14) = uVar6;
        fn_82822F60(param_2 + 0x38c,aiStack_30,0xffffffff82824430,&aiStack_30);
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(unsigned int *)(param_2 + 0xa0));
    }
    uVar1 = 0;
  }
  else {
    lVar2 = __iob_func();
    uVar1 = 0xffffffff8201ef08;
LAB_8282fb68:
    fprintf(lVar2 + 0x40,uVar1);
    uVar1 = 5;
  }
  return uVar1;
}

