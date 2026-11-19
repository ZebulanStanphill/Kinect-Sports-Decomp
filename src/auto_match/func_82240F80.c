extern int fn_8265CA20();
extern int fn_8288B338();
extern unsigned int lbl_82196884;


unsigned int * fn_82240F80(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82196884;
  fn_8288B338();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

