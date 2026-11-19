extern void fn_8265CA20(void *);
extern unsigned int lbl_8217D360;


unsigned int * fn_8303B208(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8217D360;
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
    return self;
  }
  return self;
}

