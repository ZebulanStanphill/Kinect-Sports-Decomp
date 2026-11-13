extern int fn_8263A1B8();
extern int fn_8263A508();
extern int fn_82646018();
extern int fn_82646858();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8320A89C;
extern unsigned int lbl_8320A8A0;
extern unsigned int lbl_8320A8A4;
extern unsigned int lbl_8320A8B0;
extern unsigned int lbl_8320A8B4;


void fn_828375E8(void)

{
  unsigned __int64 in_r8;
  
  if (lbl_8320A8B4 != 0) {
    fn_8263A1B8(lbl_8320A898,0,lbl_8320A8A0);
    fn_8263A508(lbl_8320A898,lbl_8320A8A4);
    if ((lbl_8320A89C != 1) &&
       (fn_82646018((double)lbl_82002AE0,lbl_8320A898,0,lbl_8320A89C,0xffffffff8320a7b0,
                          0xffffffff8320a7f0,in_r8,0), lbl_8320A8B0 != 0)) {
      fn_82646858(lbl_8320A898,0);
    }
  }
  return;
}

