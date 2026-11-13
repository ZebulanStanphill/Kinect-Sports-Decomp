extern unsigned int lbl_82027588;


void fn_828ED4C0(unsigned int *param_1)

{
  unsigned int *puVar1;
  __int64 lVar2;
  
  param_1[2] = 0;
  puVar1 = param_1 + 4;
  *(unsigned char *)(param_1 + 3) = 0;
  param_1[4] = 0;
  lVar2 = 7;
  param_1[0xcc] = 0;
  param_1[0x10d] = 0;
  *(unsigned char *)(param_1 + 0x10e) = 0;
  *(unsigned char *)((int)param_1 + 0x441) = 0;
  *param_1 = &lbl_82027588;
  do {
    puVar1 = puVar1 + 1;
    *puVar1 = 0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

