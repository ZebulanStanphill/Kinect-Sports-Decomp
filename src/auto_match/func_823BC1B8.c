extern int fn_82230040();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B5E94;
extern unsigned int uStack_1c;


unsigned int * fn_823BC1B8(unsigned int *param_1,int param_2)

{
  int iVar1;
  unsigned char **ppuStack_20;
  unsigned int uStack_1c;
  
  *param_1 = &lbl_821B5E94;
  param_1[1] = *(unsigned int *)(param_2 + 0x38);
  param_1[2] = *(unsigned int *)(param_2 + 0x3c);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  iVar1 = fn_8265C9E0(0x1c);
  if (iVar1 != 0) {
    param_1[9] = iVar1;
    *(int *)iVar1 = iVar1;
    *(unsigned int *)(param_1[9] + 4) = param_1[9];
    *(unsigned int *)(param_1[9] + 8) = param_1[9];
    *(unsigned char *)(param_1[9] + 0x18) = 1;
    *(unsigned char *)(param_1[9] + 0x19) = 1;
    return param_1;
  }
  uStack_1c = 0;
  ppuStack_20 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_20);
}

