extern int fn_82230300();
extern int fn_8248F8E8();
extern int fn_8248F9A0();
extern unsigned int lbl_821BEC10;


unsigned int * fn_82493198(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821BEC10;
  fn_82230300(self + 0xf,1,0);
  fn_8248F9A0(self);
  if ((flags & 1) != 0) {
    fn_8248F8E8(self);
  }
  return self;
}

