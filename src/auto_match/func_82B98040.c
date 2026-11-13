extern int fn_82B8FD40();
extern int fn_82B90110();
extern unsigned int lbl_82002AE0;


void fn_82B98040(int param_1,int param_2,int param_3,__int64 param_4)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned int uVar6;
  __int64 lVar5;
  
  uVar1 = lbl_82002AE0;
  uVar6 = *(int *)(param_1 + 0x60) * param_2 + *(int *)(param_1 + 100) * param_3 +
          *(int *)(param_1 + 0x20);
  uVar4 = *(int *)(param_1 + 0x68) * 4 + uVar6;
  if (uVar6 < uVar4) {
    puVar3 = (unsigned int *)(uVar6 - 4);
    lVar5 = (unsigned __int64)((uVar4 - uVar6) - 1 >> 2) + 1;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = (unsigned int *)param_4;
      *puVar2 = *puVar3;
      puVar2[3] = uVar1;
      puVar2[2] = uVar1;
      puVar2[1] = uVar1;
      param_4 = param_4 + 0x10;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    param_1 = fn_82B8FD40(param_1,param_4 + ((unsigned __int64)*(unsigned int *)(param_1 + 0x68) & 0xfffffff) *
                                              -0x10);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    fn_82B90110(param_1,param_4 + ((unsigned __int64)*(unsigned int *)(param_1 + 0x68) & 0xfffffff) * -0x10);
  }
  return;
}

