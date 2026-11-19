extern int fn_82231CD8();
extern int fn_8265CA20();
extern unsigned int lbl_82196A14;


unsigned int * fn_82231E90(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82196A14;
  fn_82231CD8();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

