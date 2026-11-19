extern void fn_8265CA20(void *);
extern unsigned int lbl_82024D24;


unsigned int * fn_828B04E0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82024D24;
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

