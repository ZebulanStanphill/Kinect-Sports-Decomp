extern int fn_8265CA20();
extern int fn_83008488();
extern unsigned int lbl_8217C068;
extern unsigned int lbl_8217D040;


unsigned int * fn_83008880(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8217C068;
  fn_83008488();
  *self = &lbl_8217D040;
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

