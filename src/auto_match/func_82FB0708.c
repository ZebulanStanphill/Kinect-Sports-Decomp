extern int fn_8265CA20();
extern int fn_83008658();
extern unsigned int lbl_8216D2CC;


unsigned int * fn_82FB0708(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8216D2CC;
  fn_83008658();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

