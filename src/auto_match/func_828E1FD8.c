extern int fn_82230040();
extern int fn_8265C9E0();
extern int fn_828D5B78();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_82024D24;
extern unsigned int uStack_2c;


void fn_828E1FD8(int param_1,int param_2)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned short *puVar3;
  unsigned short *puVar4;
  unsigned int uVar5;
  int iVar6;
  __int64 lVar7;
  unsigned char **ppuStack_30;
  unsigned int uStack_2c;
  
  if (*(unsigned int *)(param_1 + 8) <= *(int *)(param_1 + 0x10) + 1U) {
    fn_828D5B78(param_1,1);
  }
  uVar5 = *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10);
  if (*(unsigned int *)(param_1 + 8) <= uVar5) {
    uVar5 = uVar5 - *(unsigned int *)(param_1 + 8);
  }
  iVar6 = uVar5 * 4;
  if (*(int *)(*(int *)(param_1 + 4) + iVar6) == 0) {
    iVar2 = fn_8265C9E0(0x34);
    if (iVar2 == 0) {
      uStack_2c = 0;
      ppuStack_30 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_30);
    }
    *(int *)(*(int *)(param_1 + 4) + iVar6) = iVar2;
  }
  puVar1 = *(unsigned int **)(*(int *)(param_1 + 4) + iVar6);
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = &lbl_82024D24;
    puVar4 = (unsigned short *)(param_2 + 6);
    puVar3 = (unsigned short *)((int)puVar1 + 6);
    puVar1[1] = *(unsigned int *)(param_2 + 4);
    lVar7 = 0x15;
    do {
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}

