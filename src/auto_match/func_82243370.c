extern int fn_822442F0();
extern int fn_82517DC8();
extern int fn_8265C9E0();
extern unsigned int lbl_82197448;
extern unsigned int lbl_82197488;
extern unsigned int lbl_8329759C;


unsigned int * fn_82243370(unsigned __int64 param_1)

{
  unsigned int *puVar1;
  int iVar2;
  
  puVar1 = (unsigned int *)fn_8265C9E0(0x80);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    fn_82517DC8(puVar1,param_1);
    *puVar1 = &lbl_82197448;
    puVar1[0x1a] = &lbl_82197488;
    iVar2 = lbl_8329759C;
    if (lbl_8329759C == 0) {
      iVar2 = fn_822442F0();
    }
    *(unsigned int **)(iVar2 + 0x1c) = puVar1;
  }
  return puVar1;
}

