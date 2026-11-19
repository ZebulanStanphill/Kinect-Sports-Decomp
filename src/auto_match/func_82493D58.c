extern int fn_8248F8E8();
extern int fn_82493E80();
extern unsigned int lbl_821BED84;


unsigned int * fn_82493D58(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821BED84;
  fn_82493E80();
  if ((flags & 1) != 0) {
    fn_8248F8E8(self);
  }
  return self;
}

