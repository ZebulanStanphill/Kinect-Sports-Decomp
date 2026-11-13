extern int fn_82230040();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_1c;


int fn_82536820(int param_1)

{
  int iVar1;
  unsigned char **ppuStack_20;
  unsigned int uStack_1c;
  
  *(unsigned int *)(param_1 + 8) = 0;
  iVar1 = fn_8265C9E0(0x34);
  if (iVar1 != 0) {
    *(int *)(param_1 + 4) = iVar1;
    *(int *)iVar1 = iVar1;
    *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
    *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
    *(unsigned char *)(*(int *)(param_1 + 4) + 0x30) = 1;
    *(unsigned char *)(*(int *)(param_1 + 4) + 0x31) = 1;
    return param_1;
  }
  uStack_1c = 0;
  ppuStack_20 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_20);
}

