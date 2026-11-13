extern int fn_8277CB68();
extern int fn_82F691F0();
extern unsigned int lbl_821AAD20;


void fn_8277DDC0(int param_1)

{
  *(unsigned char *)(param_1 + 8) = 0;
  if (((lbl_821AAD20 < *(float *)(param_1 + 0xe8) - *(float *)(param_1 + 0xe0)) &&
      (lbl_821AAD20 < *(float *)(param_1 + 0xec) - *(float *)(param_1 + 0xe4))) &&
     (0x40 < *(unsigned int *)(param_1 + 0x30))) {
    fn_8277CB68(param_1 + 0x18,0x42,0);
    *(unsigned int *)(param_1 + 0x1c) = 0x42;
    fn_8277CB68(param_1 + 0xc,0x42,0);
    *(unsigned int *)(param_1 + 0x10) = 0x42;
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(*(unsigned int *)(param_1 + 0x18),0,*(int *)(param_1 + 0x1c) << 2);
  }
  return;
}

