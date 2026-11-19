extern int fn_82292450();
extern int fn_8229AA08();
extern int fn_8265CA20();
extern unsigned int lbl_821AAF44;


unsigned int * fn_8229B058(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821AAF44;
  if (self[0xf] != 0) {
    fn_82292450(self[0xf],1);
  }
  if (self[0xe] != 0) {
    fn_82292450(self[0xe],1);
  }
  fn_8229AA08(self);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

