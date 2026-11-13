extern int fn_8251FA58();
extern int fn_82522ED8();
extern int fn_8263CBB0();
extern unsigned int lbl_8320A898;


void fn_822A7B50(int param_1)

{
  int *piVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x558) != 0) {
    uVar4 = 0;
    if (*(int *)(param_1 + 0x554) != 0) {
      iVar5 = 0;
      do {
        piVar1 = *(int **)(iVar5 + *(int *)(param_1 + 0x558));
        if (piVar1 != (int *)0x0) {
          (**(int (***)())(*piVar1 + 8))();
          puVar2 = *(unsigned int **)(iVar5 + *(int *)(param_1 + 0x558));
          if (puVar2 != (unsigned int *)0x0) {
            (**(int (***)())*puVar2)(puVar2,1);
          }
          *(unsigned int *)(iVar5 + *(int *)(param_1 + 0x558)) = 0;
        }
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 4;
      } while (uVar4 < *(unsigned int *)(param_1 + 0x554));
    }
    fn_82522ED8(*(unsigned int *)(param_1 + 0x558));
    *(unsigned int *)(param_1 + 0x558) = 0;
  }
  if (*(int *)(param_1 + 0x55c) != 0) {
    uVar4 = 0;
    if (*(int *)(param_1 + 0x554) != 0) {
      iVar5 = 0;
      do {
        piVar1 = *(int **)(*(int *)(param_1 + 0x55c) + iVar5);
        if (piVar1 != (int *)0x0) {
          (**(int (***)())(*piVar1 + 8))();
          puVar2 = *(unsigned int **)(*(int *)(param_1 + 0x55c) + iVar5);
          if (puVar2 != (unsigned int *)0x0) {
            (**(int (***)())*puVar2)(puVar2,1);
          }
          *(unsigned int *)(*(int *)(param_1 + 0x55c) + iVar5) = 0;
        }
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 4;
      } while (uVar4 < *(unsigned int *)(param_1 + 0x554));
    }
    fn_82522ED8(*(unsigned int *)(param_1 + 0x55c));
    *(unsigned int *)(param_1 + 0x55c) = 0;
  }
  if (*(int *)(param_1 + 0x560) != 0) {
    uVar4 = 0;
    if (*(int *)(param_1 + 0x554) != 0) {
      iVar5 = 0;
      do {
        uVar3 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x560) + iVar5 + 4);
        if (uVar3 != 0) {
          fn_8251FA58(uVar3 - 4);
          *(unsigned int *)(*(int *)(param_1 + 0x560) + iVar5 + 4) = 0;
        }
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 8;
      } while (uVar4 < *(unsigned int *)(param_1 + 0x554));
    }
    fn_82522ED8(*(unsigned int *)(param_1 + 0x560));
    *(unsigned int *)(param_1 + 0x560) = 0;
  }
                    /* WARNING: Subroutine does not return */
  fn_8263CBB0(lbl_8320A898,0xb,0,0x100000);
}

