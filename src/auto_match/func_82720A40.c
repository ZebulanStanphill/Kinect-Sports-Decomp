extern int fn_8265CA20();
extern unsigned int lbl_82010454;


unsigned int * fn_82720A40(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82010454;
  if ((flags & 1) != 0) {
    fn_8265CA20();
  }
  return self;
}

