extern int fn_8248F8E8();
extern int fn_82496368();
extern int fn_82558B08();
extern unsigned int lbl_821BEEE0;


unsigned int * fn_82494DE0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821BEEE0;
  fn_82558B08();
  fn_82496368(self);
  if ((flags & 1) != 0) {
    fn_8248F8E8(self);
  }
  return self;
}

