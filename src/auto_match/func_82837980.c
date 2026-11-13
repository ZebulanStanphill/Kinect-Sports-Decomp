extern int fn_8262FE50();
extern int fn_8263A890();
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8320A8A8;
extern unsigned int lbl_8320A8B4;
extern unsigned int lbl_8320A8B8;


void fn_82837980(unsigned int *param_1)

{
  int iVar1;
  unsigned int uVar2;
  
  if (lbl_8320A8B4 == 0) {
    uVar2 = fn_8263A890(lbl_8320A898);
    *param_1 = uVar2;
  }
  else {
    iVar1 = lbl_8320A8B8 * 4;
    *param_1 = *(unsigned int *)(&lbl_8320A8A8 + iVar1);
    fn_8262FE50(*(unsigned int *)(&lbl_8320A8A8 + iVar1));
  }
  return;
}

