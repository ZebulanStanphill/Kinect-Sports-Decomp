extern int fn_8265CA20();
extern int fn_83050928();
extern unsigned int lbl_8217E0A0;


unsigned int * fn_83055B68(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8217E0A0;
  fn_83050928();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

