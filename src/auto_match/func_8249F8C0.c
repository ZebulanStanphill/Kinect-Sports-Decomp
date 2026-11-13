extern int fn_82230040();
extern int fn_82266D28();
extern int fn_8265C9E0();
extern int fn_82A1EFC0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821922D0;
extern unsigned int lbl_82192480;
extern unsigned int lbl_821BF148;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_4c;
extern unsigned int uStack_54;


void fn_8249F8C0(unsigned int *param_1,unsigned int *param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned char **ppuStack_58;
  unsigned int uStack_54;
  unsigned char **ppuStack_50;
  unsigned int uStack_4c;
  
  *param_1 = &lbl_821BF148;
  param_1[0x13] = *param_2;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  fn_82266D28(param_1 + 0x14,0);
  param_1[0x16] = param_3;
  param_1[0x17] = 1;
  param_1[0x1a] = 0;
  iVar4 = fn_8265C9E0(0x18);
  if (iVar4 == 0) {
    uStack_4c = 0;
    ppuStack_50 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_50);
  }
  param_1[0x19] = iVar4;
  *(int *)iVar4 = iVar4;
  uVar3 = ltcg_pool_0_0f;
  uVar2 = lbl_82192480;
  uVar1 = lbl_821922D0;
  *(unsigned int *)(param_1[0x19] + 4) = param_1[0x19];
  *(unsigned int *)(param_1[0x19] + 8) = param_1[0x19];
  *(unsigned char *)(param_1[0x19] + 0x14) = 1;
  *(unsigned char *)(param_1[0x19] + 0x15) = 1;
  param_1[0x1f] = uVar2;
  param_1[0x20] = uVar1;
  param_1[0x1c] = 0;
  param_1[0x21] = uVar3;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x24] = 0;
  iVar4 = fn_8265C9E0(0x18);
  if (iVar4 != 0) {
    param_1[0x23] = iVar4;
    *(int *)iVar4 = iVar4;
    *(unsigned int *)(param_1[0x23] + 4) = param_1[0x23];
    *(unsigned int *)(param_1[0x23] + 8) = param_1[0x23];
    *(unsigned char *)(param_1[0x23] + 0x14) = 1;
    *(unsigned char *)(param_1[0x23] + 0x15) = 1;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
                    /* WARNING: Subroutine does not return */
    fn_82A1EFC0(param_1 + 4,0,0x14);
  }
  uStack_54 = 0;
  ppuStack_58 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_58);
}

