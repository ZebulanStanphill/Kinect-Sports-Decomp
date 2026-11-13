extern unsigned int *auStack_50;
extern int fn_82F63108();
extern unsigned int lbl_821B3020;
extern unsigned int uStack_41;


unsigned int fn_8236C890(int param_1)

{
  int *piVar1;
  int *piVar2;
  unsigned char ***pppuVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  unsigned int auStack_50 [3];
  unsigned char uStack_41;
  unsigned char **ppuStack_40;
  unsigned int *puStack_3c;
  unsigned char ***pppuStack_30;
  
  piVar5 = *(int **)(param_1 + 0x20);
  piVar1 = *(int **)(param_1 + 0x24);
  puStack_3c = auStack_50;
  auStack_50[0] = 0;
  pppuVar3 = &ppuStack_40;
  ppuStack_40 = &lbl_821B3020;
  pppuStack_30 = pppuVar3;
  if (piVar5 < piVar1) {
    do {
      piVar2 = (int *)((unsigned int *)*piVar5)[1];
      for (piVar6 = *(int **)*piVar5; piVar6 < piVar2; piVar6 = piVar6 + 1) {
        if (*piVar6 != 0) {
          if (pppuVar3 == (unsigned char ***)0x0) {
                    /* WARNING: Subroutine does not return */
            fn_82F63108();
          }
          (*(int (**)())(*pppuVar3)[1])();
          pppuVar3 = pppuStack_30;
        }
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 < piVar1);
    if (pppuVar3 == (unsigned char ***)0x0) {
      return auStack_50[0];
    }
  }
  iVar4 = (int)&ppuStack_40 + -(int)pppuVar3;
  (*(int (**)())(*pppuVar3)[3])
            (pppuVar3,iVar4 - (int)(&uStack_41 + (unsigned int)(iVar4 == 0) + -(int)pppuVar3));
  return auStack_50[0];
}

