extern int fn_82BC33B0();
extern unsigned int lbl_820E3B0C;
extern unsigned int lbl_820E4AE0;


void fn_82BC4B18(void)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  
  puVar2 = (unsigned int *)fn_82BC33B0();
  puVar2[5] = 0;
  puVar2[4] = 0;
  *puVar2 = &lbl_820E4AE0;
  uVar1 = lbl_820E3B0C;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[0x20] = uVar1;
  return;
}

