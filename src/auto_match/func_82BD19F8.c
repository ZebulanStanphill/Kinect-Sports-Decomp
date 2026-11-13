extern int fn_82B7BEB0();
extern int fn_82BC0088();
extern int fn_82BC6DC0();
extern int fn_82BD12E8();
extern unsigned int lbl_83223EC4;


void fn_82BD19F8(int param_1)

{
  unsigned int iVar1;
  int *piVar2;
  int iVar3;
  unsigned int uVar4;
  
  uVar4 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(param_1 + 4);
      if ((uVar4 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar1 + 4)) {
        piVar2 = (int *)(*(int *)(iVar1 + 8) + iVar3);
      }
      else {
        piVar2 = (int *)fn_82BC0088(iVar1,uVar4);
      }
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        fn_82BD12E8(iVar1);
        fn_82B7BEB0(*(unsigned int *)(iVar1 + -4),iVar1 + -4);
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 4;
    } while ((int)uVar4 < *(int *)(param_1 + 0x10));
  }
  if (*(unsigned int *)(param_1 + 4) != 0) {
    fn_82BC6DC0(*(int *)(param_1 + 4),1);
  }
  fn_82B7BEB0(*(unsigned int *)(*(int *)(param_1 + 8) + 0x5b0),lbl_83223EC4);
  return;
}

