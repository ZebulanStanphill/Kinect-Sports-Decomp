extern int fn_8265CA20();
extern int fn_8302D2E8();
extern int fn_8303EA68();
extern unsigned int lbl_8217C940;
extern unsigned int lbl_8217C948;


unsigned int * fn_8302EC08(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8217C948;
  self[7] = &lbl_8217C940;
  fn_8302D2E8();
  fn_8303EA68(self);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

