extern int fn_8265CA20();
extern int fn_83039920();
extern unsigned int lbl_8217D040;


unsigned int * fn_8301E0C0(unsigned int *self,unsigned int flags)

{
  fn_83039920(self + 4);
  *self = &lbl_8217D040;
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

