extern int fn_82E4FE40();
extern int fn_82E65EF8();
extern int fn_82E66B90();
extern unsigned int lbl_82155154;


unsigned int * fn_82E66080(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82155154;
  fn_82E65EF8();
  fn_82E66B90();
  if ((flags & 1) != 0) {
    fn_82E4FE40(self);
  }
  return self;
}

