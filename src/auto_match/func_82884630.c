extern int fn_8265CA20();
extern int fn_82883EE0();
extern unsigned int lbl_82022FD4;


unsigned int * fn_82884630(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82022FD4;
  fn_82883EE0(self + 1);
  fn_8265CA20(self[1]);
  self[1] = 0;
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

