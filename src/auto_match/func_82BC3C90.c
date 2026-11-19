extern int fn_82B7BEB0();
extern unsigned int lbl_820E0214;


unsigned int * fn_82BC3C90(unsigned int *self,unsigned int flags)

{
  *self = &lbl_820E0214;
  if ((flags & 1) != 0) {
    fn_82B7BEB0(self[-1],self + -1);
  }
  return self;
}

