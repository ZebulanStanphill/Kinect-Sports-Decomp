extern int fn_8267BE38();
extern int fn_82696330();
extern int fn_827A9810();


void fn_826A2CB0(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int iVar2;
  __int64 lVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  
  uVar1 = *(unsigned int *)(param_1 + 0x38);
  uVar5 = (unsigned __int64)uVar1;
  param_2 = ((param_2 & 0xffffffff) >> 0x1f) - 1 & param_2;
  if ((param_2 & 0xffffffff) < uVar5) {
    lVar4 = (param_2 & 0x3fffffff) << 2;
    lVar3 = uVar5 - param_2;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x34) + (int)lVar4);
      if (iVar2 != 0) {
        fn_82696330(iVar2);
        fn_8267BE38(iVar2);
      }
      lVar3 = lVar3 + -1;
      lVar4 = lVar4 + 4;
    } while (lVar3 != 0);
  }
  fn_827A9810((int *)(param_1 + 0x34),param_2);
  if (uVar5 < (param_2 & 0xffffffff)) {
    lVar3 = param_2 - uVar5;
    iVar2 = uVar1 << 2;
    do {
      *(unsigned int *)(*(int *)(param_1 + 0x34) + iVar2) = 0;
      iVar2 = iVar2 + 4;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}

