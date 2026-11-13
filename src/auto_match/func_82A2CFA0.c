#define true 1
extern unsigned int lbl_8315D344;
extern unsigned int lbl_83219D04;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82A2CFA0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  unsigned __int64 uVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    do {
      KeWaitForSingleObject(param_1 + 0x10,0,0,0,0);
      while( true ) {
        uVar4 = KfAcquireSpinLock(param_1 + 4);
        piVar1 = *(int **)(param_1 + 8);
        piVar2 = (int *)piVar1[1];
        iVar5 = *piVar1;
        *piVar2 = iVar5;
        *(int **)(iVar5 + 4) = piVar2;
        KfReleaseSpinLock(param_1 + 4,uVar4);
        if (piVar1 == (int *)(param_1 + 8)) break;
        lbl_83219D04 = lbl_83219D04 + 1;
        (*(int (**)())(&lbl_8315D344)[*(unsigned char *)piVar1[8]])
                  (*(unsigned int *)(*(int *)((unsigned char *)piVar1[8] + 0x14) + 0x18),piVar1 + -0xc);
      }
    } while (*(int *)(param_1 + 0x20) == 0);
  }
  iVar5 = param_1 + 4;
  uVar4 = KfAcquireSpinLock(iVar5);
  piVar1 = *(int **)(param_1 + 8);
  while( true ) {
    piVar2 = (int *)piVar1[1];
    iVar3 = *piVar1;
    *piVar2 = iVar3;
    *(int **)(iVar3 + 4) = piVar2;
    KfReleaseSpinLock(iVar5,uVar4);
    if (piVar1 == (int *)(param_1 + 8)) break;
    piVar1[-8] = -0x3ffffd92;
    IoCompleteRequest(piVar1 + -0xc,1);
    uVar4 = KfAcquireSpinLock(iVar5);
    piVar1 = *(int **)(param_1 + 8);
  }
  return;
}

