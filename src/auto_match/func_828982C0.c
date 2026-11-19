extern void fn_8265CA20(void *);
extern unsigned int lbl_82023998;


unsigned int * fn_828982C0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82023998;
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

