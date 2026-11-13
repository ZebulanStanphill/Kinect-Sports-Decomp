extern int fn_82BE57C0();
extern int fn_82BE70C0();
extern int fn_82BE7678();
extern int fn_82BE89E0();
extern int fn_82BE8FB8();
extern int fn_82BE90E0();
extern int fn_82BEA1F8();
extern int fn_82BEA230();
extern unsigned int *lbl_8322B130;
extern unsigned int *lbl_8322B134;


unsigned __int64 fn_82BE1A20(void)

{
  unsigned __int64 uVar1;
  
  fn_82BEA1F8(0xffffffff8322b13c,0xffffffff820e8994);
  if (lbl_8322B130 == (unsigned int *)0x0) {
    uVar1 = 0;
  }
  else {
    fn_82BE7678();
    fn_82BE70C0();
    fn_82BE89E0();
    fn_82BE90E0();
    uVar1 = fn_82BE8FB8();
    if (lbl_8322B134 != (unsigned int *)0x0) {
      (**(int (***)())*lbl_8322B134)(lbl_8322B134,1);
      lbl_8322B134 = (unsigned int *)0x0;
    }
    if (lbl_8322B130 != (unsigned int *)0x0) {
      (**(int (***)())*lbl_8322B130)(lbl_8322B130,1);
    }
    lbl_8322B130 = (unsigned int *)0x0;
    fn_82BE57C0();
  }
  fn_82BEA230(0xffffffff8322b13c,0xffffffff820e8994);
  return uVar1;
}

