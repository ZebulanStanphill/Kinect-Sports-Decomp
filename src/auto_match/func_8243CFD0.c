extern int fn_82230300();
extern int fn_822980B0();
extern int fn_82522ED8();
extern int fn_82552B50();
extern int fn_8265CA20();
extern unsigned int lbl_821B96BC;


void fn_8243CFD0(unsigned int *param_1)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  unsigned int uVar4;
  __int64 lVar3;
  int iVar5;
  
  *param_1 = &lbl_821B96BC;
  uVar4 = 0;
  if ((((int *)param_1[1])[1] - *(int *)param_1[1]) / 0x30 != 0) {
    iVar5 = 0;
    do {
      if (*(int *)(*(int *)param_1[1] + iVar5 + 0x2c) != 0) {
        fn_82522ED8();
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x30;
    } while (uVar4 < (unsigned int)((((int *)param_1[1])[1] - *(int *)param_1[1]) / 0x30));
  }
  uVar4 = 0;
  if ((*(int *)(param_1[1] + 0x18) - *(int *)(param_1[1] + 0x14)) / 0xc != 0) {
    lVar3 = 0;
    do {
      fn_82552B50((unsigned __int64)*(unsigned int *)(param_1[1] + 0x14) + lVar3,1);
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0xc;
    } while (uVar4 < (unsigned int)((*(int *)(param_1[1] + 0x18) - *(int *)(param_1[1] + 0x14)) / 0xc));
  }
  puVar1 = (unsigned int *)param_1[1];
  if (puVar1 != (unsigned int *)0x0) {
    uVar4 = puVar1[5];
    if (uVar4 != 0) {
      for (; uVar4 != puVar1[6]; uVar4 = uVar4 + 0xc) {
      }
      fn_8265CA20();
    }
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    uVar2 = (unsigned __int64)*puVar1;
    if (uVar2 != 0) {
      uVar4 = puVar1[1];
      if (uVar2 != uVar4) {
        do {
          fn_822980B0(uVar2 + 0x1c);
          fn_82230300(uVar2,1,0);
          uVar2 = uVar2 + 0x30;
        } while ((uVar2 & 0xffffffff) != (unsigned __int64)uVar4);
      }
      fn_8265CA20(*puVar1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    fn_8265CA20(puVar1);
  }
  return;
}

