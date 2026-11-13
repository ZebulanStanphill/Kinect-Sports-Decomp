extern int fn_82230040();
extern int fn_825ACAC8();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_5c;


void fn_823B4A18(unsigned int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned char **ppuStack_60;
  unsigned int uStack_5c;
  
  *param_1 = param_2;
  param_1[3] = 0;
  param_1[2] = param_1 + 1;
  uVar1 = ltcg_pool_0_0f;
  param_1[1] = param_1 + 1;
  param_1[5] = uVar1;
  param_1[4] = 0;
  param_1[10] = uVar1;
  param_1[6] = 0xffffffff;
  param_1[7] = 0;
  *(unsigned __int64 *)(param_1 + 8) = 0;
  *(unsigned __int64 *)(param_1 + 0xc) = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 1;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  iVar2 = fn_8265C9E0(0x38);
  if (iVar2 != 0) {
    param_1[0x18] = iVar2;
    *(int *)iVar2 = iVar2;
    *(unsigned int *)(param_1[0x18] + 4) = param_1[0x18];
    *(unsigned int *)(param_1[0x18] + 8) = param_1[0x18];
    *(unsigned char *)(param_1[0x18] + 0x34) = 1;
    *(unsigned char *)(param_1[0x18] + 0x35) = 1;
                    /* WARNING: Subroutine does not return */
    fn_825ACAC8(param_1 + 0x1b);
  }
  uStack_5c = 0;
  ppuStack_60 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_60);
}

