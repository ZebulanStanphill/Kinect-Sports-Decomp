extern int fn_8265CA20();
extern int fn_83055DC0();
extern unsigned int lbl_8217DE1C;


unsigned int * fn_83052E78(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8217DE1C;
  fn_83055DC0();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

