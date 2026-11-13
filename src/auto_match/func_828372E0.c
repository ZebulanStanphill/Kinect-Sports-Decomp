extern int fn_82631920();
extern int fn_82648158();
extern int fn_82648160();
extern int fn_82648988();
extern unsigned int lbl_8320A87C;
extern unsigned int lbl_8320A880;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8320A8A8;
extern unsigned int lbl_8320A8B4;
extern unsigned int lbl_8320A8B8;


void fn_828372E0(void)

{
  if (lbl_8320A880 == '\0') {
    if (lbl_8320A8B4 == 0) {
      fn_82648988(lbl_8320A898);
    }
    else {
      fn_82648158(lbl_8320A898);
      fn_82631920(lbl_8320A898,0);
      fn_82648160(lbl_8320A898,*(unsigned int *)(&lbl_8320A8A8 + lbl_8320A8B8 * 4),0);
      lbl_8320A8B8 = (unsigned int)LZCOUNT(lbl_8320A8B8) >> 5;
    }
  }
  else {
    fn_82648158(lbl_8320A898);
    fn_82631920(lbl_8320A898,0);
    fn_82648160(lbl_8320A898,lbl_8320A87C,0);
    lbl_8320A87C = 0;
  }
  return;
}

