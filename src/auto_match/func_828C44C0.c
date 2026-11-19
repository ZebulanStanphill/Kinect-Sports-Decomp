extern void fn_8265CA20(void *);
extern unsigned int lbl_820260A8;


unsigned int * fn_828C44C0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_820260A8;
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

