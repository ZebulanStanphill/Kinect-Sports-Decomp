extern int fn_822442F0();
extern int fn_82517E78();
extern unsigned int lbl_82197448;
extern unsigned int lbl_82197488;
extern unsigned int lbl_8329759C;


void fn_82243198(unsigned int *param_1)

{
  int iVar1;
  
  iVar1 = lbl_8329759C;
  *param_1 = &lbl_82197448;
  param_1[0x1a] = &lbl_82197488;
  if (iVar1 == 0) {
    iVar1 = fn_822442F0();
  }
  *(unsigned int *)(iVar1 + 0x1c) = 0;
  fn_82517E78(param_1);
  return;
}

