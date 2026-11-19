extern int fn_8248F8E8();
extern int fn_82497EA8();
extern int fn_82497F18();
extern int fn_82558B08();
extern unsigned int lbl_821BEF50;


unsigned int * fn_824979A0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821BEF50;
  fn_82558B08();
  fn_82497EA8(self,0);
  fn_82497F18(self);
  if ((flags & 1) != 0) {
    fn_8248F8E8(self);
  }
  return self;
}

