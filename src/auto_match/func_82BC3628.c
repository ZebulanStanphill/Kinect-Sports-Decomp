extern int fn_82BC33B0();
extern unsigned int lbl_820E3D90;


void fn_82BC3628(void)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  
  puVar1 = (unsigned int *)fn_82BC33B0();
  puVar1[5] = 1;
  puVar2 = puVar1 + 0x13;
  *puVar1 = &lbl_820E3D90;
  puVar1[4] = 1;
  lVar3 = 2;
  do {
    puVar2[-5] = 0xffffffff;
    puVar2 = puVar2 + 1;
    *puVar2 = 0;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

