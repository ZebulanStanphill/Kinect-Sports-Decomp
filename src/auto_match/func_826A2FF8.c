extern int fn_8267BE38();
extern int fn_82696330();
extern int fn_827A9810();


void fn_826A2FF8(int param_1,unsigned __int64 param_2,__int64 param_3)

{
  unsigned int uVar1;
  int iVar2;
  __int64 lVar3;
  __int64 lVar4;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    if (0 < (int)param_3) {
      lVar4 = (param_2 & 0x3fffffff) << 2;
      lVar3 = param_3;
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
    uVar1 = *(unsigned int *)(param_1 + 0x38);
    param_2 = param_2 + param_3;
    if ((int)param_2 < (int)uVar1) {
      lVar4 = (param_2 & 0x3fffffff) << 2;
      lVar3 = (param_2 - param_3 & 0x3fffffff) << 2;
      do {
        param_2 = param_2 + 1;
        *(unsigned int *)((int)lVar3 + *(int *)(param_1 + 0x34)) =
             *(unsigned int *)((int)lVar4 + *(int *)(param_1 + 0x34));
        lVar3 = lVar3 + 4;
        *(unsigned int *)(*(int *)(param_1 + 0x34) + (int)lVar4) = 0;
        lVar4 = lVar4 + 4;
        uVar1 = *(unsigned int *)(param_1 + 0x38);
      } while ((int)param_2 < (int)uVar1);
    }
    fn_827A9810(param_1 + 0x34,(unsigned __int64)uVar1 - param_3);
  }
  return;
}

