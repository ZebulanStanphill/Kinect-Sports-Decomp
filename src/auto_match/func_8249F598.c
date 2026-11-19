extern int fn_8249F7D0();
extern int fn_8265CA20();
extern unsigned int lbl_821BF0D4;


unsigned int * fn_8249F598(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821BF0D4;
  fn_8249F7D0(self,0);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

