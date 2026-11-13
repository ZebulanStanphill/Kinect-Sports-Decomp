extern int fn_8259A230();
extern int fn_82A1BB18();
extern int fn_82A93C18();
extern int fn_82A93F70();
extern unsigned int lbl_8326B334;
extern unsigned int lbl_8326B338;
extern unsigned int lbl_8326B33C;
extern unsigned int lbl_8326B340;
extern unsigned int lbl_8326B430;
extern unsigned int lbl_8326B434;
extern unsigned int uStack_20;


unsigned __int64 fn_82544528(void)

{
  int iVar1;
  unsigned int uStack_20;
  
  fn_82A1BB18();
  iVar1 = fn_8259A230();
  if ((iVar1 == 0) && ((lbl_8326B430 != lbl_8326B33C || (lbl_8326B434 != lbl_8326B340)))) {
    lbl_8326B33C = lbl_8326B430;
    lbl_8326B340 = lbl_8326B434;
    fn_82A93C18(lbl_8326B430,lbl_8326B434,1,0,0x1a220197,0,0,0xffffffffffffffff);
    fn_82A93F70(0xffffffff8326b028,
                      ((unsigned __int64)lbl_8326B334 - (unsigned __int64)uStack_20) + (unsigned __int64)lbl_8326B338);
  }
  return 0xffffffff8326b028;
}

