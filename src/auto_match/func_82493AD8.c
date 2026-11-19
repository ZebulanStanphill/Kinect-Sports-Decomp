extern int fn_8248F8E8();
extern int fn_82493CD0();
extern unsigned int lbl_821BED3C;


unsigned int * fn_82493AD8(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821BED3C;
  fn_82493CD0();
  if ((flags & 1) != 0) {
    fn_8248F8E8(self);
  }
  return self;
}

