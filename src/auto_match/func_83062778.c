extern int fn_82230040();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_1c;


unsigned int * fn_83062778(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned char **ppuStack_20;
  unsigned int uStack_1c;
  
  uVar1 = *param_2;
  param_1[2] = 0;
  *param_1 = uVar1;
  iVar2 = fn_8265C9E0(0x18);
  if (iVar2 != 0) {
    param_1[1] = iVar2;
    *(int *)iVar2 = iVar2;
    *(unsigned int *)(param_1[1] + 4) = param_1[1];
    *(unsigned int *)(param_1[1] + 8) = param_1[1];
    *(unsigned char *)(param_1[1] + 0x14) = 1;
    *(unsigned char *)(param_1[1] + 0x15) = 1;
    return param_1;
  }
  uStack_1c = 0;
  ppuStack_20 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_20);
}

