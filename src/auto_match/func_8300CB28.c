extern void fn_8265CA20(void *);
extern unsigned int lbl_8217C318;


unsigned int * fn_8300CB28(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8217C318;
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

