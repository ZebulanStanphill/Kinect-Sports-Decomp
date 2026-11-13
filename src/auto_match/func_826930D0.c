extern unsigned int lbl_831F129C;
extern unsigned int uRam831e9298;


void fn_826930D0(void)

{
  unsigned int *puVar1;
  __int64 lVar2;
  
  puVar1 = (unsigned int *)0x831e9298;
  lVar2 = 0x1000;
  uRam831e9298 = 0;
  do {
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
    *puVar1 = 0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  lbl_831F129C = 0x831e9298;
  return;
}

