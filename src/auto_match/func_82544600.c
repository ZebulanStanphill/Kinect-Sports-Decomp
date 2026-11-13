extern int fn_825315E0();
extern int fn_8259A230();
extern int fn_82A1BB18();
extern int fn_82A93C18();
extern int fn_82A93F70();
extern int iRam8326b344;
extern int iRam8326b348;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8326B334;
extern unsigned int lbl_8326B338;
extern unsigned int lbl_83296B94;
extern unsigned int lbl_83296B98;
extern unsigned int uStack_30;


unsigned __int64 fn_82544600(void)

{
  unsigned int uVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned int uStack_30;
  
  fn_82A1BB18();
  iVar3 = fn_8259A230();
  if (iVar3 == 0) {
    uVar1 = *(unsigned int *)(lbl_8320A898 + 0x2a88);
    uVar2 = fn_82A1BB18();
    fn_825315E0(-(unsigned int)(uVar2 == uVar1) & lbl_8320A898);
    iVar3 = lbl_83296B94;
    uVar1 = *(unsigned int *)(lbl_8320A898 + 0x2a88);
    uVar2 = fn_82A1BB18();
    fn_825315E0(-(unsigned int)(uVar2 == uVar1) & lbl_8320A898);
    if ((iVar3 != iRam8326b344) || (lbl_83296B98 != iRam8326b348)) {
      iRam8326b348 = lbl_83296B98;
      iRam8326b344 = iVar3;
      fn_82A93C18(iVar3,lbl_83296B98,1,0,0x18280186,0,0,0xffffffffffffffff);
      fn_82A93F70(0xffffffff8326b05c,
                        ((unsigned __int64)lbl_8326B334 - (unsigned __int64)uStack_30) + (unsigned __int64)lbl_8326B338);
    }
  }
  return 0xffffffff8326b05c;
}

