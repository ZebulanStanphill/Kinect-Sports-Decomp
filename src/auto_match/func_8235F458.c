extern unsigned int *auStack_50;
extern int fn_8235F3E8();
extern int fn_82507738();
extern int fn_82536590();
extern int fn_82547C80();
extern unsigned int lbl_82193AF0;
extern unsigned int ltcg_pool_0_0f;


void fn_8235F458(int param_1)

{
  int *piVar1;
  unsigned int uVar2;
  __int64 lVar3;
  int iVar4;
  double dVar5;
  unsigned int auStack_50 [20];
  
  if (*(int *)(param_1 + 0x2bb4) != 0) {
    *(unsigned int *)(param_1 + 0x2bb4) = 0;
    if ((*(int **)(param_1 + 0x2c00) != (int *)0x0) &&
       (piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x2cdc) + 0x93c) + 0x78),
       piVar1 != (int *)0x0)) {
      do {
        if (*piVar1 == **(int **)(param_1 + 0x2c00)) {
          piVar1[0x75] = lbl_82193AF0;
          break;
        }
        piVar1 = (int *)piVar1[0x79];
      } while (piVar1 != (int *)0x0);
    }
    fn_8235F3E8(param_1,*(unsigned int *)(param_1 + 0x640));
    uVar2 = 0;
    auStack_50[0] = 1;
    dVar5 = (double)ltcg_pool_0_0f;
    *(float *)(param_1 + 0x2c98) = ltcg_pool_0_0f;
    iVar4 = *(int *)(*(int *)(param_1 + 0x2bc0) + 0x8c0);
    if (*(int *)(iVar4 + 0x9c) != 0) {
      lVar3 = 0;
      do {
        fn_82507738(param_1 + 0xd20,(unsigned __int64)*(unsigned int *)(iVar4 + 0x98) + lVar3,
                        0xffffffff8235dbf0,auStack_50);
        uVar2 = uVar2 + 1;
        lVar3 = lVar3 + 0x1a0;
      } while (uVar2 < *(unsigned int *)(iVar4 + 0x9c));
    }
    *(unsigned int *)(*(int *)(param_1 + 0x2bc0) + 0x1d0) = 0;
    iVar4 = *(int *)(param_1 + 0x2bd4);
    if ((iVar4 != 0) && (*(int *)(iVar4 + 0xc) == 2)) {
      *(unsigned int *)(iVar4 + 0xc) = 3;
    }
    *(float *)(param_1 + 0x2be0) = (float)dVar5;
    *(unsigned int *)(param_1 + 0x2bd8) = 0;
    iVar4 = 0;
    *(unsigned int *)(param_1 + 0x2bdc) = 0;
    piVar1 = (int *)(param_1 + 0x2bc4);
    do {
      if (*(int *)((*(int *)(param_1 + 0x2b2c) * 0x1a + iVar4 + 0x587) * 4 + param_1) != 0) {
        fn_82547C80((unsigned __int64)*(unsigned int *)(*piVar1 + 0x8c0) + 0xd0,1,0);
      }
      iVar4 = iVar4 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar4 < 4);
    if (*(int *)(param_1 + 0x2b30) != 0) {
      fn_82536590(param_1 + 0x14dc,0);
    }
  }
  return;
}

