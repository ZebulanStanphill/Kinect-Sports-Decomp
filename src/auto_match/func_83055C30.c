extern int fn_8265CA20();
extern int fn_83051070();
extern unsigned int lbl_8217E11C;
extern unsigned int lbl_8217E150;


unsigned int * fn_83055C30(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8217E150;
  self[0x1e] = &lbl_8217E11C;
  fn_83051070();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

