extern int fn_82C06578();
extern int fn_82F691F0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8207F184;
extern unsigned int lbl_820EBEDC;


void fn_82BFF9F0(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  fn_82C06578();
  uVar3 = lbl_820EBEDC;
  *(unsigned int *)(param_1 + 0x38) = 0;
  uVar2 = lbl_8207F184;
  *(unsigned int *)(param_1 + 0x3c) = 0;
  uVar1 = lbl_82002AE0;
  *(unsigned int *)(param_1 + 0x40) = 0;
  *(unsigned int *)(param_1 + 0x84) = uVar3;
  *(unsigned int *)(param_1 + 0x44) = 0;
  *(unsigned int *)(param_1 + 0x88) = uVar2;
  *(unsigned int *)(param_1 + 0x48) = 0;
  *(unsigned int *)(param_1 + 0x8c) = uVar1;
  *(unsigned int *)(param_1 + 0x4c) = 0;
  *(unsigned int *)(param_1 + 0x70) = 1;
  *(unsigned int *)(param_1 + 0x74) = 0;
  *(unsigned int *)(param_1 + 0x78) = 0;
  *(unsigned int *)(param_1 + 0x7c) = 0;
  *(unsigned int *)(param_1 + 0x80) = 0;
  *(unsigned int *)(param_1 + 0x108) = 0;
  *(unsigned int *)(param_1 + 0x10c) = 0;
  *(unsigned int *)(param_1 + 0x110) = 0;
  *(unsigned int *)(param_1 + 0x114) = 0;
  *(unsigned int *)(param_1 + 0x118) = 0;
  *(unsigned int *)(param_1 + 0x11c) = 0;
  *(unsigned int *)(param_1 + 0x50) = 0;
  *(unsigned int *)(param_1 + 0x54) = 0;
  *(unsigned int *)(param_1 + 0x58) = 0;
  *(unsigned int *)(param_1 + 0x5c) = 0;
  *(unsigned int *)(param_1 + 0x60) = 0;
  *(unsigned int *)(param_1 + 100) = 0;
  *(unsigned int *)(param_1 + 0x68) = 0;
  *(unsigned int *)(param_1 + 0x6c) = 0;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1 + 0x90,0,0x78);
}

