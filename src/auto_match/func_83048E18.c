extern int fn_8265CA20();
extern int fn_8304DF08();
extern unsigned int lbl_8217DA58;


unsigned int * fn_83048E18(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8217DA58;
  fn_8304DF08();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

