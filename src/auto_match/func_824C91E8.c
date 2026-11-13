extern int fn_82F69290();
extern unsigned int lbl_82167FA8;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;


void fn_824C91E8(int param_1)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned char **ppuStack_20;
  unsigned int uStack_1c;
  unsigned char uStack_18;
  
  uVar1 = 0xffffffff821c0ab4;
  iVar3 = *(int *)(param_1 + 0x34);
  *(int *)(param_1 + 0x38) = iVar3;
  if (*(int *)(param_1 + 0x30) == 0) {
    if (iVar3 != (*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) >> 4) + -1) {
      iVar3 = iVar3 + 1;
code_r0x824c925c:
      *(int *)(param_1 + 0x34) = iVar3;
      goto code_r0x824c9260;
    }
    iVar3 = iVar3 + -1;
    uVar2 = 1;
  }
  else {
    if (iVar3 != 0) {
      iVar3 = iVar3 + -1;
      goto code_r0x824c925c;
    }
    iVar3 = 1;
    uVar2 = 0;
  }
  *(int *)(param_1 + 0x34) = iVar3;
  *(unsigned int *)(param_1 + 0x30) = uVar2;
  uVar1 = 0xffffffff821c0ac4;
code_r0x824c9260:
  if (*(int *)(param_1 + 0x18) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    uStack_1c = 0;
    ppuStack_20 = &lbl_82167FA8;
    uStack_18 = 0;
                    /* WARNING: Subroutine does not return */
    fn_82F69290(&ppuStack_20,0xffffffff821dda54);
  }
                    /* WARNING: Could not recover jumptable at 0x824c9290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(int (***)())(**(int **)(param_1 + 0x18) + 4))(*(int **)(param_1 + 0x18),uVar1);
  return;
}

