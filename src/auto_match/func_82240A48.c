extern int fn_8265CA20();
extern int fn_8289D4C0();
extern unsigned int lbl_82197158;


unsigned int * fn_82240A48(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82197158;
  fn_8289D4C0();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

