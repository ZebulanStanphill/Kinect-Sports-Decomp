extern int fn_82266D28();
extern int fn_82A1EFC0();


void fn_8229F2C0(unsigned int *param_1)

{
  unsigned int *puVar1;
  __int64 lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  fn_82266D28(param_1,0);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0x26] = 0xffffffff;
  param_1[0x25] = 0;
  puVar1 = param_1 + 0x1c;
  param_1[0x4c] = 0;
  lVar2 = 8;
  do {
    puVar1 = puVar1 + 1;
    *puVar1 = 0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(param_1 + 5,0,0x20);
}

