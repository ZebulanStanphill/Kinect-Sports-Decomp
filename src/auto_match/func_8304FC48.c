extern int fn_8265CA20(self);
extern unsigned int lbl_8217DDBC;


unsigned int * fn_8304FC48(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8217DDBC;
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

