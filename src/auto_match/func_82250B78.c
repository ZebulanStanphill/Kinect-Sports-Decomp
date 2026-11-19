extern int fn_82232BC0();
extern int fn_8265CA20();
extern unsigned int lbl_82197EDC;


unsigned int * fn_82250B78(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82197EDC;
  fn_82232BC0();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

