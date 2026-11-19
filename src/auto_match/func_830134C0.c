extern int fn_8265CA20();
extern int fn_83037638();
extern unsigned int lbl_8217C360;
extern unsigned int lbl_8217D040;


unsigned int * fn_830134C0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8217C360;
  fn_83037638(self + 0x27);
  *self = &lbl_8217D040;
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

