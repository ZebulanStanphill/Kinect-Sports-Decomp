extern int fn_8265CA20();
extern int fn_82F53A10();
extern unsigned int lbl_821BFE98;


unsigned int * fn_824AD000(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821BFE98;
  fn_82F53A10();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

