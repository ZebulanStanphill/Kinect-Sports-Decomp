extern void fn_8265CA20(void *);
extern unsigned int lbl_8216CCD0;


unsigned int * fn_82FAC5A0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8216CCD0;
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

