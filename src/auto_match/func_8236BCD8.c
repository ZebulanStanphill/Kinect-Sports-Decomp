extern int fn_82672C20();


void fn_8236BCD8(int param_1)

{
  unsigned int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x4b0);
  if (iVar1 != 0) {
    if (((*(int *)(iVar1 + 0x30) != 0) &&
        (iVar2 = *(int *)(iVar1 + 0x54), *(int *)(iVar2 + 0x34) != 0)) &&
       (*(int *)(iVar2 + 0x38) == 0)) {
      *(unsigned int *)(iVar2 + 0x38) = 1;
      fn_82672C20(*(unsigned int *)(iVar2 + 0x3c),"_root.mainCtrl.hide",0,0);
    }
    *(unsigned int *)(iVar1 + 0x30) = 0;
  }
  return;
}

