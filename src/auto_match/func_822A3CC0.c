extern int fn_82266D28();
extern int memset();


void fn_822A3CC0(int param_1)

{
  unsigned int *puVar1;
  __int64 lVar2;
  
  puVar1 = (unsigned int *)(param_1 + -4);
  lVar2 = 5;
  do {
    puVar1[1] = 1;
    puVar1 = puVar1 + 2;
    *puVar1 = 0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *(unsigned int *)(param_1 + 0x28) = 0;
  *(unsigned int *)(param_1 + 0x2c) = 0;
  fn_82266D28(param_1 + 0x28,0);
                    /* WARNING: Subroutine does not return */
  memset(param_1 + 0x30,0,0x20);
}

