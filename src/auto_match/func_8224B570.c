extern int fn_8265CA20();
extern unsigned int lbl_82197048;


unsigned int * fn_8224B570(unsigned int *self,unsigned int flags)

{
  self[2] = &lbl_82197048;
  *self = &lbl_82197048;
  if ((flags & 1) != 0) {
    fn_8265CA20();
  }
  return self;
}

