extern void fn_8265CA20(void *);
extern unsigned int lbl_82026780;


unsigned int * fn_828CFA40(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82026780;
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

