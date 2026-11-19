extern int fn_8248F8E8();
extern int fn_82494388();
extern unsigned int lbl_821BEE14;


unsigned int * fn_82494218(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821BEE14;
  fn_82494388();
  if ((flags & 1) != 0) {
    fn_8248F8E8(self);
  }
  return self;
}

