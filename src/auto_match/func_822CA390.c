extern int fn_82517E78();
extern int fn_825AD4B8();
extern int fn_8265CA20();
extern unsigned int lbl_821AD0A8;
extern unsigned int lbl_821AD0F4;


void fn_822CA390(unsigned int *param_1)

{
  unsigned int iVar1;
  
  iVar1 = param_1[0x2f];
  *param_1 = &lbl_821AD0A8;
  param_1[0x1a] = &lbl_821AD0F4;
  if (iVar1 != 0) {
    if (*(unsigned int *)(iVar1 + 0x168) != 0) {
      *(unsigned int *)(*(int *)(iVar1 + 0x168) + 0xbc) = 0;
    }
    *(unsigned int *)(iVar1 + 0x168) = 0;
    param_1[0x2f] = 0;
  }
  fn_825AD4B8(param_1 + 0x29);
  fn_8265CA20(param_1[0x29]);
  param_1[0x29] = 0;
  fn_82517E78(param_1);
  return;
}

