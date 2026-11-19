extern int fn_8265CA20();
extern int fn_8304D718();
extern int fn_8304DCB8();
extern unsigned int lbl_8217DC50;


unsigned int * fn_8304E688(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8217DC50;
  if (self[10] != 0) {
    fn_8304DCB8();
  }
  fn_8304D718(self);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

