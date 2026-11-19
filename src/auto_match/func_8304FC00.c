extern int fn_8265CA20(self);
extern unsigned int lbl_8217DD8C;


unsigned int * fn_8304FC00(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8217DD8C;
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

