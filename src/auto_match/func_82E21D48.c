extern int fn_8265CA20();
extern int fn_82E22818();
extern unsigned int lbl_8214BEAC;


unsigned int * fn_82E21D48(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8214BEAC;
  fn_82E22818();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

