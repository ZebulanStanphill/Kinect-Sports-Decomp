extern int fn_8267BE38();
extern int fn_82779BB8();
extern unsigned int lbl_8200D7F4;


unsigned int * fn_826EAB60(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8200D7F4;
  fn_82779BB8();
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

