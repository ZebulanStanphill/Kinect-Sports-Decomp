extern void fn_8265CA20(void *);
extern unsigned int lbl_82197010;


unsigned int * fn_828ABF10(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82197010;
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

