extern int fn_82232AE8();
extern int fn_8265CA20();
extern unsigned int lbl_8219732C;


unsigned int * fn_82240FD8(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8219732C;
  fn_82232AE8();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

