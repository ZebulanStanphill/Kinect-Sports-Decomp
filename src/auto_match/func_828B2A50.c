extern int fn_8265CA20();
extern int fn_828B22F0();
extern unsigned int lbl_82024E1C;


unsigned int * fn_828B2A50(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82024E1C;
  if ((int *)self[1] != (int *)0x0) {
    (*(int (**)())(*(int *)self[1] + 4))(self[1]);
    self[1] = 0;
    self[2] = 0;
  }
  fn_828B22F0(self + 3);
  fn_8265CA20(self[3]);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

