extern int fn_82BC33B0();
extern unsigned int lbl_820E3DF8;


void fn_82BC36D0(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_82BC33B0();
  puVar1[0x2b] = 0;
  puVar1[5] = 1;
  *puVar1 = &lbl_820E3DF8;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0;
  puVar1[4] = 1;
  return;
}

