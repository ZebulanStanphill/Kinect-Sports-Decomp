extern int fn_82347A80();
extern int fn_8265CA20();
extern unsigned int lbl_821B1980;


void fn_82343080(unsigned int *param_1)

{
  unsigned int iVar1;
  
  iVar1 = param_1[5];
  *param_1 = &lbl_821B1980;
  if (iVar1 != 0) {
    if (*(unsigned int *)(iVar1 + 0x4c) != 0) {
      fn_8265CA20(*(unsigned int *)(iVar1 + 0x4c));
    }
    *(unsigned int *)(iVar1 + 0x4c) = 0;
    *(unsigned int *)(iVar1 + 0x50) = 0;
    *(unsigned int *)(iVar1 + 0x54) = 0;
    fn_8265CA20(iVar1);
  }
  fn_82347A80(param_1);
  return;
}

