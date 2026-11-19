extern int fn_8265CA20();
extern unsigned int lbl_8200C4D4;
extern unsigned int lbl_8200D8E4;


unsigned int * fn_826EFAA8(unsigned int *self,unsigned int flags)

{
  self[3] = &lbl_8200C4D4;
  *self = &lbl_8200D8E4;
  if ((flags & 1) != 0) {
    fn_8265CA20();
  }
  return self;
}

