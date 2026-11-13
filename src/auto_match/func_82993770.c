extern unsigned int *auStack_98;
extern int fn_82F691F0();


unsigned __int64 fn_82993770(int param_1)

{
  unsigned __int64 *puVar1;
  __int64 lVar2;
  unsigned __int64 auStack_98 [19];
  
  if (*(int *)(param_1 + 0x15c) != 0) {
    return 0;
  }
  puVar1 = auStack_98;
  lVar2 = 8;
  do {
    puVar1 = puVar1 + 1;
    *puVar1 = 0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *(unsigned int *)(param_1 + 0x21c) = 0;
  *(unsigned int *)(param_1 + 0x220) = 0;
  auStack_98[0] = 0;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1 + 0x1fc,0,0x20);
}

