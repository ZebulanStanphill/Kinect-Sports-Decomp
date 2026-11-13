extern int fn_825266F8();
extern int fn_8265CA20();
extern unsigned int lbl_832967A8;


void fn_8313F520(void)

{
  __int64 lVar1;
  unsigned int *puVar2;
  
  lVar1 = 3;
  puVar2 = &lbl_832967A8;
  do {
    fn_825266F8(puVar2 + -0x59);
    fn_8265CA20(puVar2[-0x58]);
    fn_825266F8(puVar2 + -0x5d);
    fn_8265CA20(puVar2[-0x5c]);
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + -0x5c;
  } while (-1 < lVar1);
  return;
}

