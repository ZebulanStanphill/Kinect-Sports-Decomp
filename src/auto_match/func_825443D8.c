extern int fn_825315E0();
extern int fn_82560690();
extern int fn_82A1BB18();
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8326B430;
extern unsigned int lbl_8326B434;
extern unsigned int lbl_83296B94;
extern unsigned int lbl_83296B98;


unsigned __int64 fn_825443D8(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int iVar4;
  
  uVar1 = *(unsigned int *)(lbl_8320A898 + 0x2a88);
  uVar3 = fn_82A1BB18();
  fn_825315E0(-(unsigned int)(uVar3 == uVar1) & lbl_8320A898);
  iVar2 = lbl_83296B94;
  uVar1 = *(unsigned int *)(lbl_8320A898 + 0x2a88);
  uVar3 = fn_82A1BB18();
  fn_825315E0(-(unsigned int)(uVar3 == uVar1) & lbl_8320A898);
  iVar4 = fn_82560690(2);
  if (iVar4 != 1) {
    if (iVar2 != lbl_8326B430) {
      if (param_1 == 0) {
        return 0xffffffff8326b0f8;
      }
      return 0xffffffff8326b12c;
    }
    if (lbl_83296B98 != lbl_8326B434) {
      if (param_1 == 0) {
        return 0xffffffff8326b160;
      }
      return 0xffffffff8326b194;
    }
  }
  return 0xffffffff8326b090;
}

