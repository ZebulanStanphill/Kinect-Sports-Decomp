extern int fn_8265CA20();
extern int fn_83050928();
extern unsigned int lbl_8217DF04;


unsigned int * fn_83053E78(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8217DF04;
  fn_83050928();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

