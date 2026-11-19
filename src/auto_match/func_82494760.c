extern int fn_8248F8E8();
extern int fn_82494960();
extern unsigned int lbl_821BEE74;


unsigned int * fn_82494760(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821BEE74;
  fn_82494960();
  if ((flags & 1) != 0) {
    fn_8248F8E8(self);
  }
  return self;
}

