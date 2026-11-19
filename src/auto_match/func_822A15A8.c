extern int fn_82292450();
extern int fn_8229AA08();
extern int fn_8265CA20();
extern unsigned int lbl_821ABEB0;


unsigned int * fn_822A15A8(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821ABEB0;
  if (self[0xe] != 0) {
    fn_82292450(self[0xe],1);
  }
  if (self[0xd] != 0) {
    fn_82292450(self[0xd],1);
  }
  fn_8229AA08(self);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

