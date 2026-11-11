extern unsigned lbl_8320A764,lbl_8320A760;
extern void (*lbl_8320A75C)(unsigned,unsigned,void *);
void fn_82822728(void *p,unsigned n) {
 unsigned count=++lbl_8320A764;
 if(lbl_8320A75C) {
  if(n>=64) n=64;
  lbl_8320A75C(n,lbl_8320A760+count,p);
 }
}
