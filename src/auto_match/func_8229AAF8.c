extern int fn_82672C20();


void fn_8229AAF8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if ((*(int *)(iVar1 + 0x18) == 0) && (*(int *)(iVar1 + 0x14) != 0)) {
    fn_82672C20(*(unsigned int *)(iVar1 + 4),"_root.caption.HideCaption",0,0);
    *(unsigned int *)(iVar1 + 0x18) = 1;
  }
  return;
}

