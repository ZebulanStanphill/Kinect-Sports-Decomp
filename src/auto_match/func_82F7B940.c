#define true 1
extern int free();
extern int malloc();
extern int fn_82F6ACF0();
extern int fn_82F6AD80();
extern int fn_82F71A70();
extern int fn_82F71B90();
extern int fn_82F71CD0();
extern int fn_82F7BACC();
extern unsigned int lbl_8329F734;
extern unsigned int lbl_8329F738;


unsigned int * fn_82F7B940(void)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned int *puStack_50;
  
  puStack_50 = (unsigned int *)0x0;
  fn_82F71CD0(1);
  iVar4 = 0;
  do {
    iVar3 = lbl_8329F734;
    puVar2 = puStack_50;
    if (lbl_8329F738 <= iVar4) {
LAB_82f7ba88:
      puStack_50 = puVar2;
      if (puStack_50 != (unsigned int *)0x0) {
        puStack_50[3] = puStack_50[3] & 0x8000;
        puStack_50[1] = 0;
        puStack_50[2] = 0;
        *puStack_50 = 0;
        puStack_50[7] = 0;
        puStack_50[4] = 0xffffffff;
      }
      fn_82F7BACC();
      return puStack_50;
    }
    iVar5 = iVar4 * 4;
    if (*(int *)(iVar5 + lbl_8329F734) == 0) {
      iVar4 = malloc(0x3c);
      *(int *)(iVar5 + iVar3) = iVar4;
      if (iVar4 != 0) {
        iVar4 = fn_82F71A70((unsigned __int64)*(unsigned int *)(iVar5 + lbl_8329F734) + 0x20,4000);
        if (iVar4 == 0) {
          free(*(unsigned int *)(iVar5 + lbl_8329F734));
          *(unsigned int *)(iVar5 + lbl_8329F734) = 0;
        }
        else {
          RtlEnterCriticalSection((unsigned __int64)*(unsigned int *)(iVar5 + lbl_8329F734) + 0x20);
          puVar2 = *(unsigned int **)(iVar5 + lbl_8329F734);
          puVar2[3] = 0;
        }
      }
      goto LAB_82f7ba88;
    }
    uVar1 = *(unsigned int *)(*(int *)(iVar5 + lbl_8329F734) + 0xc);
    if (((uVar1 & 0x83) == 0) && ((uVar1 & 0x8000) == 0)) {
      if ((2 < iVar4) && ((iVar4 < 0x14 && (iVar3 = fn_82F71B90(iVar4 + 0x10), iVar3 == 0))))
      goto LAB_82f7ba88;
      fn_82F6ACF0(iVar4,*(unsigned int *)(iVar5 + lbl_8329F734));
      puVar2 = *(unsigned int **)(iVar5 + lbl_8329F734);
      if (((*(unsigned int **)(iVar5 + lbl_8329F734))[3] & 0x83) == 0) goto LAB_82f7ba88;
      fn_82F6AD80(iVar4);
    }
    iVar4 = iVar4 + 1;
  } while( true );
}

