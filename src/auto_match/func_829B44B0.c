extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_8296CF68();
extern int fn_82F691F0();


unsigned __int64 fn_829B44B0(int param_1)

{
  int iVar1;
  
  *(unsigned int *)(param_1 + 8) = 0;
  *(unsigned int *)(param_1 + 0xc) = 0;
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0x1c) = 0;
  *(unsigned int *)(param_1 + 0x20) = 0;
  *(unsigned int *)(param_1 + 0x24) = 0;
  *(unsigned int *)(param_1 + 0x28) = 0;
  *(unsigned int *)(param_1 + 0x2c) = 0;
  *(unsigned int *)(param_1 + 0x30) = 0;
  *(unsigned int *)(param_1 + 0x34) = 0;
  *(unsigned int *)(param_1 + 0x3c) = 0;
  *(unsigned int *)(param_1 + 0x38) = *(unsigned int *)(*(int *)(param_1 + 4) + 0xc);
  fn_8296CF68();
  iVar1 = fn_8265C940(*(int *)(param_1 + 0x38) << 2,0x24810000);
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 != 0) {
    iVar1 = fn_8265C940(*(int *)(param_1 + 0x38) << 2,0x24810000);
    *(int *)(param_1 + 0x1c) = iVar1;
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(*(unsigned int *)(param_1 + 8),0,*(int *)(param_1 + 0x38) << 2);
    }
  }
  fn_8265C990(*(unsigned int *)(param_1 + 8),0x24810000);
  fn_8265C990(*(unsigned int *)(param_1 + 0xc),0x24810000);
  fn_8265C990(*(unsigned int *)(param_1 + 0x10),0x24810000);
  fn_8265C990(*(unsigned int *)(param_1 + 0x14),0x24810000);
  fn_8265C990(*(unsigned int *)(param_1 + 0x18),0x24810000);
  fn_8265C990(*(unsigned int *)(param_1 + 0x1c),0x24810000);
  fn_8265C990(*(unsigned int *)(param_1 + 0x20),0x24810000);
  fn_8265C990(*(unsigned int *)(param_1 + 0x24),0x24810000);
  fn_8265C990(*(unsigned int *)(param_1 + 0x28),0x24810000);
  fn_8265C990(*(unsigned int *)(param_1 + 0x2c),0x24810000);
  fn_8265C990(*(unsigned int *)(param_1 + 0x30),0x24810000);
  fn_8265C990(*(unsigned int *)(param_1 + 0x34),0x24810000);
  fn_8265C990(*(unsigned int *)(param_1 + 0x3c),0x24810000);
  fn_8265C990(*(unsigned int *)(param_1 + 0x40),0x24810000);
  fn_8265C990(*(unsigned int *)(param_1 + 0x44),0x24810000);
  return 0xffffffff8007000e;
}

