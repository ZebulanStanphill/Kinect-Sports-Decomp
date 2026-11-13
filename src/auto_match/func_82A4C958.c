extern int fn_82A4F4E0();
extern int fn_82F691F0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_820143E0;
extern unsigned int lbl_821AAD20;


void fn_82A4C958(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar2 = lbl_820143E0;
  uVar1 = lbl_82002AE0;
  *(unsigned int *)(param_1 + 0x58) = lbl_821AAD20;
  *(unsigned int *)(param_1 + 0x50) = 0;
  *(unsigned int *)(param_1 + 0x5c) = uVar2;
  *(unsigned int *)(param_1 + 0x54) = 0;
  *(unsigned int *)(param_1 + 0x60) = uVar1;
  if (*(int *)(param_1 + 0x30) != 0) {
    fn_82A4F4E0();
    *(unsigned int *)(param_1 + 0x30) = 0;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1 + 0x28,0,0x28);
}

