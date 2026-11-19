extern int fn_8265CA20();
extern int fn_830B4CA0();
extern unsigned int lbl_821880CC;


unsigned int * fn_830B3A88(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821880CC;
  fn_830B4CA0();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

