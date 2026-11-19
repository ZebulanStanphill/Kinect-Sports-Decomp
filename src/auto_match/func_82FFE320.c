extern int fn_8265CA20();
extern int fn_82FF9188();
extern unsigned int lbl_8217BCF4;
extern unsigned int lbl_8217D040;


unsigned int * fn_82FFE320(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8217BCF4;
  fn_82FF9188();
  *self = &lbl_8217D040;
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

