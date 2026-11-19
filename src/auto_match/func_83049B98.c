extern int fn_8265CA20();
extern int fn_830490E0();
extern int fn_8304D718();
extern unsigned int lbl_8217DA9C;


unsigned int * fn_83049B98(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8217DA9C;
  fn_830490E0();
  fn_8304D718(self);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

