extern int fn_82233888();
extern int fn_8265CA20();
extern unsigned int lbl_821982B0;


unsigned int * fn_82257658(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821982B0;
  fn_82233888();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

