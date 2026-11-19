extern int fn_8265CA20();
extern int fn_82897D88();
extern unsigned int lbl_821972BC;


unsigned int * fn_8223C1A8(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821972BC;
  fn_82897D88();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

