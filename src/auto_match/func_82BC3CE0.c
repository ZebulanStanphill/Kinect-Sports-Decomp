extern int fn_82BC33B0();
extern unsigned int lbl_820E4360;


void fn_82BC3CE0(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_82BC33B0();
  puVar1[0x2a] = 0;
  *puVar1 = &lbl_820E4360;
  puVar1[4] = 1;
  puVar1[5] = 0;
  return;
}

