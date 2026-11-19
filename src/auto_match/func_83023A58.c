extern int fn_8265CA20();
extern unsigned int lbl_8217C5D0;
extern unsigned int lbl_8217D040;


unsigned int * fn_83023A58(unsigned int *self,unsigned int flags)

{
  self[1] = &lbl_8217C5D0;
  *self = &lbl_8217D040;
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

