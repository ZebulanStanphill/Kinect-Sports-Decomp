extern int fn_82231D38();
extern int fn_8265CA20();
extern unsigned int lbl_82196A04;


unsigned int * fn_82231EE8(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82196A04;
  fn_82231D38();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

