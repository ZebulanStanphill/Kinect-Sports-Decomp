extern int fn_8265CA20();
extern int fn_828B22F0();
extern int fn_828B3E88();
extern unsigned int lbl_82024E20;


unsigned int * fn_828B4CE0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82024E20;
  fn_828B22F0(self + 8);
  fn_8265CA20(self[8]);
  fn_828B3E88(self + 2);
  fn_8265CA20(self[2]);
  self[2] = 0;
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

