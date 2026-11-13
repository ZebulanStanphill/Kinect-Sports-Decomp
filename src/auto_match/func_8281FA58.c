extern int fn_82F691F0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_821B9BC8;


void fn_8281FA58(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar2 = lbl_821AAD20;
  uVar1 = lbl_82002AE0;
  param_1[0x1f] = lbl_821AAD20;
  param_1[0x20] = uVar2;
  param_1[0x21] = uVar1;
  param_1[0x22] = uVar1;
  *param_1 = &lbl_821B9BC8;
  param_1[0x1e] = 0;
  *(unsigned __int64 *)(param_1 + 0x24) = 500000;
  param_1[0x26] = 2;
  *(unsigned char *)(param_1 + 0x27) = 0;
  *(unsigned char *)((int)param_1 + 0x9d) = 1;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1 + 2,0,0x70);
}

