extern int fn_8280ACD8();
extern int fn_82859BE8();
extern int fn_8285F118();
extern unsigned int lbl_83211330;


void fn_8285A128(int param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x50) + param_3;
  iVar2 = iVar1 + 0x60;
  if ((param_2 & 0xff) == 0) {
    iVar2 = 0;
  }
  fn_8280ACD8(iVar1 + 0x10);
  *(unsigned int *)(iVar1 + 0x50) = 0;
  if ((param_2 & 0xff) != 0) {
    *(int *)(iVar1 + 0x54) = iVar2;
  }
  iVar2 = *(int *)(param_1 + 0x34);
  lbl_83211330 = iVar2;
  if ((iVar2 != 0) && (iVar1 = fn_8285F118(iVar2), iVar1 == 0)) {
    fn_82859BE8(iVar2,param_2,param_3);
  }
  return;
}

