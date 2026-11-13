extern int fn_82F691F0();


void fn_82F4DF08(unsigned char *param_1)

{
  *param_1 = 0;
  *(unsigned int *)(param_1 + 0x2b00) = 0;
  *(unsigned int *)(param_1 + 0x2b04) = 0;
  *(unsigned int *)(param_1 + 0x2b08) = 0;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1 + 0x2b0c,0,0x1c);
}

