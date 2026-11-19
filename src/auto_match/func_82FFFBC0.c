extern int fn_8265CA20();
extern int fn_83008310();
extern unsigned int lbl_8217BDAC;


unsigned int * fn_82FFFBC0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8217BDAC;
  fn_83008310();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

