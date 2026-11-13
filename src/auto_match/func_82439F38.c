extern int fn_822315A0();
extern int fn_8232C8B8();
extern int fn_82446248();
extern int fn_8265C9E0();
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821CA1A0;
extern unsigned int lbl_821CA1A8;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82439F38(int param_1)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int *puStack_50;
  unsigned int *puStack_4c;
  
  iVar5 = *(int *)(param_1 + 0x40);
  (**(int (***)())(*(int *)(iVar5 + 0x1dc) + 4))
            (iVar5 + 0x1dc,*(unsigned int *)(*(int *)(*(int *)(iVar5 + 0x1d8) + 0x174) + 0x9c),
             lbl_821CA1A0,(unsigned __int64)lbl_821CA1A8 << 0x20);
  uVar4 = 0x10c;
  do {
    iVar5 = *(int *)(param_1 + 0x40);
    if (*(int *)(uVar4 + iVar5) != 0) {
      uVar1 = *(unsigned int *)(*(int *)(iVar5 + 0x1d8) + 0x174);
      puVar3 = (unsigned int *)fn_8265C9E0(0x18);
      if (puVar3 == (unsigned int *)0x0) {
        puVar3 = (unsigned int *)0x0;
      }
      else {
        *puVar3 = &lbl_821AD588;
        puVar3[1] = 1;
        puVar3[2] = 1;
        if (puVar3 + 3 != (unsigned int *)0x0) {
          fn_82446248(puVar3 + 3,uVar4 + iVar5,(unsigned __int64)uVar1 + 4);
        }
      }
      puStack_4c = puVar3;
      puStack_50 = puStack_4c + 3;
      fn_8232C8B8((unsigned __int64)*(unsigned int *)(param_1 + 0x40) + 0x350,&puStack_50);
      if (puStack_4c != (unsigned int *)0x0) {
        fn_822315A0();
      }
    }
    uVar4 = uVar4 + 4;
  } while (uVar4 < 300);
  uVar4 = 0;
  if (*(int *)(*(int *)(param_1 + 0x40) + 0x354) - *(int *)(*(int *)(param_1 + 0x40) + 0x350) >> 3
      != 0) {
    iVar5 = 0;
    do {
      piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x40) + 0x350) + iVar5);
      (**(int (***)())(*piVar2 + 4))
                (piVar2,*(unsigned int *)
                         (*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x1d8) + 0x174) + 0x9c),
                 lbl_821CA1A0,(unsigned __int64)lbl_821CA1A8 << 0x20);
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 8;
    } while (uVar4 < (unsigned int)(*(int *)(*(int *)(param_1 + 0x40) + 0x354) -
                            *(int *)(*(int *)(param_1 + 0x40) + 0x350) >> 3));
  }
  return;
}

