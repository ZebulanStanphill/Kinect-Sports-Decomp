extern int fn_82230040();
extern int fn_8265C9E0();
extern int fn_82880878();
extern int fn_82881CE0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_2c;


void fn_82884498(int param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned char **ppuStack_30;
  unsigned int uStack_2c;
  
  if (*(unsigned int *)(param_1 + 8) <= *(int *)(param_1 + 0x10) + 1U) {
    fn_82880878(param_1,1);
  }
  uVar3 = *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10);
  if (*(unsigned int *)(param_1 + 8) <= uVar3) {
    uVar3 = uVar3 - *(unsigned int *)(param_1 + 8);
  }
  iVar4 = uVar3 * 4;
  if (*(int *)(*(int *)(param_1 + 4) + iVar4) == 0) {
    iVar2 = fn_8265C9E0(0x10);
    if (iVar2 == 0) {
      uStack_2c = 0;
      ppuStack_30 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_30);
    }
    *(int *)(*(int *)(param_1 + 4) + iVar4) = iVar2;
  }
  puVar1 = *(unsigned int **)(*(int *)(param_1 + 4) + iVar4);
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    fn_82881CE0(puVar1,param_2);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}

