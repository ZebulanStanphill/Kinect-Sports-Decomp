extern int fn_823019E8();
extern int fn_8265CA20();
extern unsigned int lbl_821AECCC;


unsigned int * fn_82301890(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821AECCC;
  fn_823019E8();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

